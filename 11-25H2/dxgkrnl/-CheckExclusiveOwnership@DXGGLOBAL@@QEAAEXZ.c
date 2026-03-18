/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x14037F220
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x14037F180 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  char v2; // di
  char *v3; // r15
  char *v4; // rsi
  char *v5; // rbx
  char *v6; // r14
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  volatile signed __int32 *v9; // r14
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int i; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct _KTHREAD **v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  _QWORD v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v23; // [rsp+78h] [rbp-90h]
  _BYTE v24[144]; // [rsp+88h] [rbp-80h] BYREF

  v20 = (struct _KTHREAD **)((char *)this + 672);
  LOBYTE(v21) = 0;
  v2 = 1;
  if ( this == (DXGGLOBAL *)-672LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v20[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  v3 = (char *)this + 768;
  v4 = (char *)*((_QWORD *)this + 96);
LABEL_6:
  while ( v4 != v3 && v4 )
  {
    v5 = v4;
    v6 = v4;
    v4 = *(char **)v4;
    _m_prefetchw(v5 + 24);
    v7 = *((_QWORD *)v5 + 3);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 3, v7 + 1, v7);
      if ( v8 == v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, (struct DXGADAPTER *const)v5, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
        if ( *((_QWORD *)v5 + 390) )
        {
          v22[1] = v5;
          _InterlockedAdd64((volatile signed __int64 *)v5 + 3, 1uLL);
          v22[0] = -1LL;
          v9 = (volatile signed __int32 *)(v6 + 136);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v9, 0LL);
          _InterlockedAdd(v9 + 4, 1u);
          v10 = *((_DWORD *)v5 + 50);
          v23 = 1;
          if ( v10 == 1 )
          {
            v11 = *((_QWORD *)v5 + 390);
            v12 = 0;
            v13 = *(_DWORD *)(v11 + 96);
            while ( v12 < v13 )
            {
              v14 = 3984LL * v12;
              v15 = *(_QWORD *)(v11 + 128);
              if ( *(_QWORD *)(v14 + v15 + 728) && *(_DWORD *)(v14 + v15 + 736) == 2 )
              {
LABEL_22:
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
                goto LABEL_23;
              }
              ++v12;
            }
            for ( i = 0; i < v13; ++i )
            {
              v18 = 3984LL * i;
              v19 = *(_QWORD *)(v11 + 128);
              if ( *(_QWORD *)(v18 + v19 + 728) && *(_DWORD *)(v18 + v19 + 736) == 3 )
                goto LABEL_22;
            }
          }
          _InterlockedDecrement(v9 + 4);
          ExReleasePushLockSharedEx(v9, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
        goto LABEL_6;
      }
    }
  }
  v2 = 0;
LABEL_23:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v20);
  return v2;
}
