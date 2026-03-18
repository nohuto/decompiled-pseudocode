/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x140326760
 * Callers:
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x140326388 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     DxgkCheckOcclusion @ 0x1403263F0 (DxgkCheckOcclusion.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140326C30 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  char v2; // di
  char *v5; // rax
  char *v6; // r12
  char *v7; // rsi
  volatile signed __int32 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 *v16; // rdx
  unsigned int j; // ecx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v21; // ebx
  __int64 v22; // r13
  __int64 v23; // r9
  LONG right; // ecx
  LONG left; // r8d
  LONG v26; // eax
  LONG v27; // edx
  LONG top; // r8d
  LONG bottom; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // [rsp+58h] [rbp-B0h]
  char *i; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD **v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h]
  _QWORD v36[2]; // [rsp+78h] [rbp-90h] BYREF
  char v37; // [rsp+88h] [rbp-80h]
  _BYTE v38[144]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  v34 = (struct _KTHREAD **)((char *)this + 672);
  LOBYTE(v35) = 0;
  if ( this == (DXGGLOBAL *)-672LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v34[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
  v5 = (char *)this + 768;
  v6 = (char *)*((_QWORD *)this + 96);
  for ( i = (char *)this + 768; ; v5 = i )
  {
    if ( v6 == v5 || !v6 )
      goto LABEL_30;
    v7 = v6;
    v8 = (volatile signed __int32 *)v6;
    v6 = *(char **)v6;
    _m_prefetchw((const void *)(v8 + 6));
    v9 = *((_QWORD *)v8 + 3);
    do
    {
      if ( !v9 )
        goto LABEL_26;
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 3, v9 + 1, v9);
    }
    while ( v10 != v9 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    if ( *((_QWORD *)v7 + 390) )
      break;
LABEL_25:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
LABEL_26:
    ;
  }
  v36[1] = v7;
  _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
  v36[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8 + 34, 0LL);
  _InterlockedIncrement(v8 + 38);
  v12 = *((_DWORD *)v7 + 50);
  v37 = 1;
  if ( v12 != 1 )
  {
LABEL_24:
    _InterlockedDecrement((volatile signed __int32 *)v7 + 38);
    ExReleasePushLockSharedEx(v7 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    goto LABEL_25;
  }
  v13 = *((_QWORD *)v7 + 390);
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2562;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pWindowClientRect != NULL", 2562LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->left != a2->right && a2->top != a2->bottom )
  {
    v14 = *((_QWORD *)DXGPROCESS::GetCurrent(v11) + 11);
    if ( !v14 || (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v14 + 240))(0LL, 0LL, 0LL) == 0 )
    {
      v16 = (__int64 *)(v13 + 128);
      v32 = (__int64 *)(v13 + 128);
      for ( j = 0; j < *(_DWORD *)(v13 + 96); ++j )
      {
        v16 = (__int64 *)(v13 + 128);
        v18 = 3984LL * j;
        v19 = *(_QWORD *)(v13 + 128);
        v32 = (__int64 *)(v13 + 128);
        if ( *(_DWORD *)(v18 + v19 + 736) == 1 && *(_BYTE *)(v18 + v19 + 760) )
          goto LABEL_28;
      }
      v21 = 0;
      while ( 2 )
      {
        if ( v21 >= *(_DWORD *)(v13 + 96) )
          goto LABEL_24;
        v22 = 3984LL * v21;
        if ( *(_BYTE *)(*v16 + v22 + 760) )
        {
          if ( !DmmIsTargetNonStandard(*(struct DXGADAPTER **)(v13 + 16), *(_DWORD *)(*v16 + v22 + 1072)) )
          {
            v16 = v32;
            goto LABEL_34;
          }
        }
        else
        {
LABEL_34:
          v23 = *v16;
          right = a2->right;
          left = a2->left;
          v26 = *(_DWORD *)(*v16 + v22 + 636);
          v27 = *(_DWORD *)(*v16 + v22 + 628);
          if ( right >= v26 )
            right = v26;
          if ( left <= v27 )
            left = v27;
          if ( left < right )
          {
            top = a2->top;
            bottom = a2->bottom;
            if ( top <= *(_DWORD *)(v23 + v22 + 632) )
              top = *(_DWORD *)(v23 + v22 + 632);
            if ( bottom >= *(_DWORD *)(v23 + v22 + 640) )
              bottom = *(_DWORD *)(v23 + v22 + 640);
            if ( top < bottom )
            {
              if ( !*(_DWORD *)(3984LL * v21 + *(_QWORD *)(v13 + 128) + 736)
                && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v13, v21) )
              {
                break;
              }
              v30 = *(_QWORD *)(v13 + 128);
              v31 = 3984LL * v21;
              if ( a2->left >= *(_DWORD *)(v31 + v30 + 628)
                && a2->right <= *(_DWORD *)(v31 + v30 + 636)
                && a2->top >= *(_DWORD *)(v31 + v30 + 632)
                && a2->bottom <= *(_DWORD *)(v31 + v30 + 640) )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
                goto LABEL_29;
              }
            }
          }
        }
        ++v21;
        v16 = (__int64 *)(v13 + 128);
        v32 = (__int64 *)(v13 + 128);
        continue;
      }
    }
  }
LABEL_28:
  _InterlockedDecrement((volatile signed __int32 *)v7 + 38);
  ExReleasePushLockSharedEx(v7 + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
  v2 = 1;
LABEL_29:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
LABEL_30:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v34);
  return v2;
}
