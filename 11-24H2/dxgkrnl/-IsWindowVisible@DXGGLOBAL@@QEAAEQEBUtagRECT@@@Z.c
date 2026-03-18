/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x140308EE0
 * Callers:
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x140308B08 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     DxgkCheckOcclusion @ 0x140308B70 (DxgkCheckOcclusion.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1403092E4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  char *v4; // rax
  char v5; // di
  char *v6; // r15
  char *v7; // rsi
  volatile signed __int32 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 *v16; // r13
  unsigned int i; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int j; // ebx
  __int64 v22; // r12
  __int64 v23; // r9
  LONG left; // r8d
  LONG right; // edx
  LONG top; // r8d
  LONG bottom; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v30; // [rsp+50h] [rbp-F8h]
  DXGADAPTERLISTLOCK *v31[2]; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD v32[2]; // [rsp+68h] [rbp-E0h] BYREF
  char v33; // [rsp+78h] [rbp-D0h]
  _BYTE v34[144]; // [rsp+80h] [rbp-C8h] BYREF

  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v31, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v31);
  v4 = (char *)this + 800;
  v5 = 0;
  v6 = (char *)*((_QWORD *)this + 100);
  v30 = (char *)this + 800;
  while ( 2 )
  {
    if ( v6 != v4 && v6 )
    {
      v7 = v6;
      v8 = (volatile signed __int32 *)v6;
      v6 = *(char **)v6;
      _m_prefetchw((const void *)(v8 + 6));
      v9 = *((_QWORD *)v8 + 3);
      do
      {
        if ( !v9 )
          goto LABEL_22;
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 3, v9 + 1, v9);
      }
      while ( v10 != v9 );
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, (struct DXGADAPTER *const)v7, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
      if ( !*((_QWORD *)v7 + 390) )
      {
LABEL_21:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
LABEL_22:
        v4 = v30;
        continue;
      }
      v32[1] = v7;
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
      v32[0] = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v8 + 34, 0LL);
      _InterlockedIncrement(v8 + 38);
      v12 = *((_DWORD *)v7 + 50);
      v33 = 1;
      if ( v12 != 1 )
      {
LABEL_20:
        _InterlockedDecrement((volatile signed __int32 *)v7 + 38);
        ExReleasePushLockSharedEx(v7 + 136, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
        goto LABEL_21;
      }
      v13 = *((_QWORD *)v7 + 390);
      if ( !a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2553;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pWindowClientRect != NULL",
          2553LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( a2->left != a2->right && a2->top != a2->bottom )
      {
        v14 = *((_QWORD *)DXGPROCESS::GetCurrent(v11) + 11);
        if ( !v14 || (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v14 + 240))(0LL, 0LL, 0LL) == 0 )
        {
          v16 = (__int64 *)(v13 + 128);
          for ( i = 0; i < *(_DWORD *)(v13 + 96); ++i )
          {
            v16 = (__int64 *)(v13 + 128);
            v18 = 4024LL * i;
            v19 = *(_QWORD *)(v13 + 128);
            if ( *(_DWORD *)(v18 + v19 + 736) == 1 && *(_BYTE *)(v18 + v19 + 760) )
              goto LABEL_24;
          }
          for ( j = 0; j < *(_DWORD *)(v13 + 96); ++j )
          {
            v22 = 4024LL * j;
            if ( !*(_BYTE *)(v22 + *v16 + 760)
              || !DmmIsTargetNonStandard(*(struct DXGADAPTER **)(v13 + 16), *(_DWORD *)(v22 + *v16 + 1072)) )
            {
              v23 = *v16;
              left = a2->left;
              right = a2->right;
              if ( a2->left <= *(_DWORD *)(*v16 + v22 + 628) )
                left = *(_DWORD *)(*v16 + v22 + 628);
              if ( right >= *(_DWORD *)(*v16 + v22 + 636) )
                right = *(_DWORD *)(*v16 + v22 + 636);
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
                  if ( !*(_DWORD *)(4024LL * j + *(_QWORD *)(v13 + 128) + 736)
                    && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v13, j) )
                  {
                    goto LABEL_24;
                  }
                  v28 = *(_QWORD *)(v13 + 128);
                  v29 = 4024LL * j;
                  if ( a2->left >= *(_DWORD *)(v29 + v28 + 628)
                    && a2->right <= *(_DWORD *)(v29 + v28 + 636)
                    && a2->top >= *(_DWORD *)(v29 + v28 + 632)
                    && a2->bottom <= *(_DWORD *)(v29 + v28 + 640) )
                  {
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
                    goto LABEL_25;
                  }
                }
              }
            }
            v16 = (__int64 *)(v13 + 128);
          }
          goto LABEL_20;
        }
      }
LABEL_24:
      _InterlockedDecrement((volatile signed __int32 *)v7 + 38);
      ExReleasePushLockSharedEx(v7 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
      v5 = 1;
LABEL_25:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    }
    break;
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v31);
  return v5;
}
