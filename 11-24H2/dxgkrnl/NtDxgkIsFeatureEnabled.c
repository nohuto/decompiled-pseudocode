/*
 * XREFs of NtDxgkIsFeatureEnabled @ 0x1401D1A40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     DpiIsFeatureEnabled @ 0x14024E064 (DpiIsFeatureEnabled.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkIsFeatureEnabled(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  BOOL v5; // ebx
  int IsFeatureEnabled; // ebx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rsi
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DXGADAPTER *v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int PairingAdapters; // esi
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rsi
  int v23; // r14d
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  void *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-118h] BYREF
  __int64 v32; // [rsp+58h] [rbp-110h]
  char v33; // [rsp+60h] [rbp-108h]
  __int64 v34; // [rsp+68h] [rbp-100h]
  struct DXGADAPTER *v35; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v36; // [rsp+78h] [rbp-F0h] BYREF
  DXGADAPTER *v37[2]; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v38; // [rsp+90h] [rbp-D8h] BYREF
  unsigned int v39[2]; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD Src[4]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v41[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2224;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2224);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2224);
  v34 = (unsigned int)Feature_IsFeatureEnabled__private_featureState;
  if ( (Feature_IsFeatureEnabled__private_featureState & 0x10) == 0 )
  {
    LODWORD(v34) = Feature_IsFeatureEnabled__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_IsFeatureEnabled__private_descriptor, v34, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v34,
      3,
      (__int64)&Feature_IsFeatureEnabled__private_descriptor);
  }
  *(_QWORD *)v39 = 0LL;
  Src[0] = 0;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v39, v4, 0xCuLL);
  v5 = g_ClearDatabaseCacheOnQuery;
  if ( !v39[0] )
  {
    IsFeatureEnabled = DpiIsFeatureEnabled(0LL, v39[1], g_ClearDatabaseCacheOnQuery, Src);
LABEL_30:
    if ( IsFeatureEnabled >= 0 )
    {
      v28 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v28 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v28, Src, 4uLL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v31);
    }
    return (unsigned int)IsFeatureEnabled;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry1(2LL, CurrentProcess);
    WdLogGlobalForLineNumber = 58;
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NtDxgkIsFeatureEnabled: Failed to get DXGPROCESS, EPROCESS=0x%.16x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  v35 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v37, v39[0], Current, &v35, 1);
  v13 = v35;
  if ( !v35 )
  {
    WdLogSingleEntry2(3LL, v39[0], v9);
    WdLogGlobalForLineNumber = 68;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v14);
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v31);
    return 3221225485LL;
  }
  v36 = 0LL;
  v38 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v35, 0, &v36, &v38, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
    v22 = v36;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v36, 0LL);
    v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41, 0LL);
    DXGADAPTER::ReleaseReference(v22);
    if ( v23 >= 0 )
    {
      IsFeatureEnabled = DpiIsFeatureEnabled(*((_QWORD *)v22 + 27), v39[1], v5, Src);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v27);
      goto LABEL_30;
    }
    WdLogSingleEntry1(3LL, v22);
    WdLogGlobalForLineNumber = 93;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v31);
    return (unsigned int)v23;
  }
  else
  {
    WdLogSingleEntry1(3LL, v13);
    WdLogGlobalForLineNumber = 79;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v31);
    return (unsigned int)PairingAdapters;
  }
}
