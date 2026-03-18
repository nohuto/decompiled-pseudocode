/*
 * XREFs of NtDxgkGetProperties @ 0x1402FC800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1401D6220 (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1401D6430 (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1401D64F8 (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x140303E30 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x140336198 (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x14033637C (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkGetProperties(ULONG64 a1)
{
  const void *v1; // rdx
  unsigned int v3; // ebx
  size_t v4; // r14
  struct _LUID *Pool2; // rdi
  const void *v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v12; // r9
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  const wchar_t *v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // ebx
  struct _LUID *v18; // [rsp+58h] [rbp-60h]
  __int128 v19; // [rsp+60h] [rbp-58h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+80h] [rbp-38h]
  PVOID P; // [rsp+88h] [rbp-30h]
  _BYTE v23[4]; // [rsp+90h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+94h] [rbp-24h]

  v1 = (const void *)a1;
  v19 = 0LL;
  *(_OWORD *)Src = 0LL;
  v21 = 0LL;
  P = 0LL;
  v24 = 0;
  if ( a1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v19, v1, 0x28uLL);
  if ( !Src[0] )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6487;
    if ( P != v23 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v24 = 0;
    return 3221225485LL;
  }
  if ( !DWORD1(v19) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6494;
    if ( P != v23 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v24 = 0;
    return 3221225485LL;
  }
  if ( DWORD2(v19) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6501;
    if ( P != v23 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v24 = 0;
    return 3221225485LL;
  }
  if ( (_DWORD)v19 == 4 )
  {
    v3 = 88;
  }
  else
  {
    if ( (unsigned int)v19 <= 2 )
    {
LABEL_26:
      v3 = 16;
      goto LABEL_29;
    }
    if ( (_DWORD)v19 != 3 )
    {
      if ( (_DWORD)v19 != 5 )
      {
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 6548;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != v23 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v24 = 0;
        return 3221225485LL;
      }
      goto LABEL_26;
    }
    v3 = 32;
  }
LABEL_29:
  if ( DWORD1(v19) < v3 )
  {
    WdLogSingleEntry2(2LL, (int)v19, -1073741811LL);
    WdLogGlobalForLineNumber = 6557;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v19,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v23 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v24 = 0;
    return 3221225485LL;
  }
  v4 = v3;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v3 )
  {
    Pool2 = (struct _LUID *)ExAllocatePool2(256LL, v3, 1265072196LL);
    P = Pool2;
    v24 = v3;
    v18 = Pool2;
    v4 = v3;
  }
  else
  {
    Pool2 = 0LL;
    v18 = 0LL;
  }
  if ( !Pool2 )
  {
    WdLogSingleEntry2(2LL, v3, -1073741801LL);
    WdLogGlobalForLineNumber = 6566;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
      v4,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    if ( P != v23 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v24 = 0;
    return 3221225495LL;
  }
  v6 = Src[0];
  if ( (char *)Src[0] + v3 < Src[0] || (char *)Src[0] + v3 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v6, v3);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_52;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v12 )
    {
      Pool2 = v18;
      goto LABEL_54;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    Pool2 = v18;
LABEL_52:
    v12 = v10;
    goto LABEL_54;
  }
  v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v12 )
    v12 = v10;
LABEL_54:
  if ( (_DWORD)v19 == 4 )
  {
    if ( Pool2[1].LowPart < 0x50 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 6623;
      v15 = L"Invalid cbSize specified of PresentStatsDwm2 , returning 0x%I64x";
LABEL_68:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v15, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
      if ( P != v23 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225485LL;
    }
    v16 = PresentStatsDwm2Property(v12, (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)Pool2);
  }
  else if ( (_DWORD)v19 )
  {
    switch ( (_DWORD)v19 )
    {
      case 1:
        v16 = ProcessUserPreferredAdapterProperty(
                v12,
                (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                0);
        break;
      case 2:
        v16 = ProcessDefaultHighPerformanceAdapterProperty(
                v12,
                (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                0);
        break;
      case 3:
        v16 = PresentDurationPlaneProperty(v12, Pool2, 0);
        break;
      case 5:
        v16 = ProcessBoostedVSyncEligibleProperty(
                v12,
                (struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *)Pool2,
                0);
        break;
      default:
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 6643;
        v15 = L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x";
        goto LABEL_68;
    }
  }
  else
  {
    v16 = ProcessVrrEligibleProperty(v12, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)Pool2, 0);
  }
  v17 = v16;
  RtlCopyToUser(Src[0], Pool2, v4);
  if ( P != v23 && P )
    ExFreePoolWithTag(P, 0);
  return v17;
}
