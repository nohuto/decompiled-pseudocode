/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1403688B0
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x140368810 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v1; // r14
  _QWORD *v2; // rsi
  char v3; // di
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  volatile signed __int32 *v8; // rbp
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int i; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  DXGADAPTERLISTLOCK *v19[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-C8h] BYREF
  char v21; // [rsp+40h] [rbp-B8h]
  _BYTE v22[144]; // [rsp+50h] [rbp-A8h] BYREF

  v1 = (_QWORD **)((char *)this + 800);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v19, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v19);
  v2 = *v1;
  v3 = 1;
LABEL_2:
  while ( v2 != v1 && v2 )
  {
    v4 = v2;
    v5 = v2;
    v2 = (_QWORD *)*v2;
    _m_prefetchw(v4 + 3);
    v6 = v4[3];
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v4 + 3, v6 + 1, v6);
      if ( v7 == v6 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, (struct DXGADAPTER *const)v4, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
        if ( v4[390] )
        {
          v20[1] = v4;
          _InterlockedAdd64(v4 + 3, 1uLL);
          v20[0] = -1LL;
          v8 = (volatile signed __int32 *)(v5 + 17);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v8, 0LL);
          _InterlockedAdd(v8 + 4, 1u);
          v9 = *((_DWORD *)v4 + 50);
          v21 = 1;
          if ( v9 == 1 )
          {
            v10 = v4[390];
            v11 = 0;
            v12 = *(_DWORD *)(v10 + 96);
            while ( v11 < v12 )
            {
              v13 = 4024LL * v11;
              v14 = *(_QWORD *)(v10 + 128);
              if ( *(_QWORD *)(v13 + v14 + 728) && *(_DWORD *)(v13 + v14 + 736) == 2 )
              {
LABEL_18:
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
                goto LABEL_19;
              }
              ++v11;
            }
            for ( i = 0; i < v12; ++i )
            {
              v17 = 4024LL * i;
              v18 = *(_QWORD *)(v10 + 128);
              if ( *(_QWORD *)(v17 + v18 + 728) && *(_DWORD *)(v17 + v18 + 736) == 3 )
                goto LABEL_18;
            }
          }
          _InterlockedDecrement(v8 + 4);
          ExReleasePushLockSharedEx(v8, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
        goto LABEL_2;
      }
    }
  }
  v3 = 0;
LABEL_19:
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v19);
  return v3;
}
