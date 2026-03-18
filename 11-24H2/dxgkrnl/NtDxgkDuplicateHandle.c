/*
 * XREFs of NtDxgkDuplicateHandle @ 0x1401E3CC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E129C (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkDuplicateHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  const wchar_t *v6; // r9
  const void *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+50h] [rbp-68h]
  int v14; // [rsp+58h] [rbp-60h] BYREF
  __int64 v15; // [rsp+60h] [rbp-58h]
  char v16; // [rsp+68h] [rbp-50h]
  __int128 v17; // [rsp+70h] [rbp-48h] BYREF
  __int128 v18; // [rsp+80h] [rbp-38h]
  __int128 v19; // [rsp+90h] [rbp-28h]

  v4 = (unsigned int)Feature_EnableHostResourceSharing__private_featureState;
  v13 = (unsigned int)Feature_EnableHostResourceSharing__private_featureState;
  if ( (Feature_EnableHostResourceSharing__private_featureState & 0x10) == 0 )
  {
    LODWORD(v13) = Feature_EnableHostResourceSharing__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EnableHostResourceSharing__private_descriptor,
      v13,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v13,
      3,
      (__int64)&Feature_EnableHostResourceSharing__private_descriptor);
  }
  v14 = -1;
  v15 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2208;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, a3, 2208);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2208);
  if ( !DXGPROCESS::GetCurrent() )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3283;
    v6 = L"Invalid process context, returning 0x%I64x";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v6, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_17;
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v7 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v17, v7, 0x30uLL);
  if ( (HIDWORD(v19) & 0xFFFFFFFE) != 0 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3306;
    v6 = L"Reserved flags must be set to 0, returning 0x%I64x";
    goto LABEL_16;
  }
  if ( (BYTE12(v19) & 1) != 0 && DWORD2(v19) )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3316;
    v6 = L"When SameAccess flag is specified, DesiredAccess must be 0, returning 0x%I64x";
    goto LABEL_16;
  }
  v11 = *((_QWORD *)&v17 + 1) - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
  if ( *((_QWORD *)&v17 + 1) == *(_QWORD *)&GUID_SPM_DEFAULT.Data1 )
    v11 = v18 - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
  if ( v11 )
    v5 = DxgkpDuplicateHandleToVm((struct _D3DKMT_DUPLICATEHANDLE *)&v17);
  else
    v5 = -1073741811;
  v12 = (_QWORD *)(a1 + 32);
  if ( a1 + 32 >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  *v12 = v19;
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v14);
  return v5;
}
