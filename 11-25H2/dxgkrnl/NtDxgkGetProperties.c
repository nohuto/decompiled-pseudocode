/*
 * XREFs of NtDxgkGetProperties @ 0x1402E2560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1401D0EEC (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1401D10FC (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1401D11C4 (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x1402E2E90 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1402E31F8 (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1402E33DC (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkGetProperties(ULONG64 a1)
{
  const void *v2; // rdx
  __int64 v3; // r9
  unsigned int v4; // edi
  size_t v5; // r14
  struct _LUID *Pool2; // rsi
  const void *v7; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // r15
  struct DXGPROCESS *v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // edi
  char *v16; // rcx
  PVOID v17; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  struct _LUID *v21; // [rsp+58h] [rbp-60h]
  __int128 v22; // [rsp+60h] [rbp-58h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-48h]
  __int64 v24; // [rsp+80h] [rbp-38h]
  PVOID P; // [rsp+88h] [rbp-30h]
  _BYTE v26[4]; // [rsp+90h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+94h] [rbp-24h]

  v22 = 0LL;
  *(_OWORD *)Src = 0LL;
  v24 = 0LL;
  P = 0LL;
  v27 = 0;
  v2 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v22, v2, 0x28uLL);
  if ( !Src[0] )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6487;
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v27 = 0;
    return 3221225485LL;
  }
  if ( !DWORD1(v22) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6494;
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v27 = 0;
    return 3221225485LL;
  }
  if ( DWORD2(v22) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6501;
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v27 = 0;
    return 3221225485LL;
  }
  if ( (_DWORD)v22 == 4 )
  {
    v4 = 88;
    goto LABEL_8;
  }
  if ( (unsigned int)v22 <= 2 )
    goto LABEL_20;
  if ( (_DWORD)v22 != 3 )
  {
    if ( (_DWORD)v22 != 5 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 6548;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v26 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v27 = 0;
      return 3221225485LL;
    }
LABEL_20:
    v4 = 16;
    goto LABEL_8;
  }
  v4 = 32;
LABEL_8:
  if ( DWORD1(v22) < v4 )
  {
    WdLogSingleEntry2(2LL, (int)v22, -1073741811LL);
    WdLogGlobalForLineNumber = 6557;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v22,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v27 = 0;
    return 3221225485LL;
  }
  else
  {
    v5 = v4;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v4 )
    {
      Pool2 = (struct _LUID *)ExAllocatePool2(256LL, v4, 1265072196LL, v3);
      P = Pool2;
      v27 = v4;
      v21 = Pool2;
      v5 = v4;
    }
    else
    {
      Pool2 = 0LL;
      v21 = 0LL;
    }
    if ( Pool2 )
    {
      v7 = Src[0];
      if ( (char *)Src[0] + v4 < Src[0] || (char *)Src[0] + v4 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v7, v4);
      CurrentProcess = PsGetCurrentProcess(v9);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v12 = (struct DXGPROCESS *)ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
        goto LABEL_47;
      Current = DXGTHREAD::GetCurrent();
      if ( Current )
      {
        v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
        if ( v13 )
        {
LABEL_48:
          if ( (_DWORD)v22 == 4 )
          {
            if ( Pool2[1].LowPart >= 0x50 )
            {
              v14 = PresentStatsDwm2Property(v13, (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)Pool2);
              goto LABEL_51;
            }
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 6623;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Invalid cbSize specified of PresentStatsDwm2 , returning 0x%I64x",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v17 = P;
            if ( P == v26 || !P )
              return 3221225485LL;
LABEL_66:
            ExFreePoolWithTag(v17, 0);
            return 3221225485LL;
          }
          if ( (_DWORD)v22 )
          {
            switch ( (_DWORD)v22 )
            {
              case 1:
                v14 = ProcessUserPreferredAdapterProperty(
                        v13,
                        (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                        0);
                break;
              case 2:
                v14 = ProcessDefaultHighPerformanceAdapterProperty(
                        v13,
                        (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                        0);
                break;
              case 3:
                v14 = PresentDurationPlaneProperty(v13, Pool2, 0);
                break;
              case 5:
                v14 = ProcessBoostedVSyncEligibleProperty(
                        v13,
                        (struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *)Pool2,
                        0);
                break;
              default:
                WdLogSingleEntry1(2LL, -1073741811LL);
                WdLogGlobalForLineNumber = 6643;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v17 = P;
                if ( P == v26 || !P )
                  return 3221225485LL;
                goto LABEL_66;
            }
          }
          else
          {
            v14 = ProcessVrrEligibleProperty(v13, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)Pool2, 0);
          }
LABEL_51:
          v15 = v14;
          v16 = *(char **)(a1 + 16);
          if ( &v16[v5] <= v16 || (unsigned __int64)&v16[v5] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v16, Pool2, v5);
          if ( P != v26 )
          {
            if ( P )
              ExFreePoolWithTag(P, 0);
          }
          return v15;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v13 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
        if ( v13 )
        {
          Pool2 = v21;
          goto LABEL_48;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2925;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
        Pool2 = v21;
      }
LABEL_47:
      v13 = v12;
      goto LABEL_48;
    }
    WdLogSingleEntry2(2LL, v4, -1073741801LL);
    WdLogGlobalForLineNumber = 6566;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
      v5,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v27 = 0;
    return 3221225495LL;
  }
}
