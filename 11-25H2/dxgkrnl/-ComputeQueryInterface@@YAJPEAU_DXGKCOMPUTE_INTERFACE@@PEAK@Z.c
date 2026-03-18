/*
 * XREFs of ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x14006F17C
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403AECB0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x14006FFE0 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ComputeQueryInterface(struct _DXGKCOMPUTE_INTERFACE *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  __int16 v5; // cx
  bool v6; // zf
  __int64 v7; // rbx

  v4 = 624LL;
  if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = *((_WORD *)a1 + 1);
    if ( v5 == 3 )
    {
      v6 = *(_WORD *)a1 == 624;
    }
    else
    {
      if ( v5 != 2 )
      {
LABEL_7:
        if ( v5 != 3 )
          v4 = 616LL;
        v7 = 3LL - (v5 != 3);
        WdLogSingleEntry4(1LL, *((unsigned __int16 *)a1 + 1), *(unsigned __int16 *)a1, v7, v4);
        WdLogGlobalForLineNumber = 794;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"Interface mismatch between caller (0x%I64x, 0x%I64x) and Dxgkrnl (0x%I64x, 0x%I64x).",
          *((unsigned __int16 *)a1 + 1),
          *(unsigned __int16 *)a1,
          v7,
          v4,
          0LL);
        return 3221225485LL;
      }
      v6 = *(_WORD *)a1 == 616;
    }
    if ( !v6 )
      goto LABEL_7;
  }
  else if ( *(_WORD *)a1 != 616 || *((_WORD *)a1 + 1) != 2 )
  {
    WdLogSingleEntry4(1LL, *((unsigned __int16 *)a1 + 1), *(unsigned __int16 *)a1, 2LL, 616LL);
    WdLogGlobalForLineNumber = 803;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Interface mismatch between caller (0x%I64x, 0x%I64x) and Dxgkrnl (0x%I64x, 0x%I64x).",
      *((unsigned __int16 *)a1 + 1),
      *(unsigned __int16 *)a1,
      2LL,
      616LL,
      0LL);
    return 3221225485LL;
  }
  *((_QWORD *)a1 + 1) = DxgkProcessCallout;
  *((_QWORD *)a1 + 2) = DxgkChangeVideoMemoryReservation;
  *((_QWORD *)a1 + 3) = DxgkCloseAdapterImpl;
  *((_QWORD *)a1 + 4) = DxgkCreateAllocation;
  *((_QWORD *)a1 + 5) = DxgkCreateContext;
  *((_QWORD *)a1 + 6) = DxgkCreateContextVirtual;
  *((_QWORD *)a1 + 7) = DxgkCreateDevice;
  *((_QWORD *)a1 + 8) = DxgkDestroyHwContext;
  *((_QWORD *)a1 + 9) = DxgkCreateHwQueue;
  *((_QWORD *)a1 + 10) = DxgkCreatePagingQueue;
  *((_QWORD *)a1 + 11) = W32kStub_GreSfmOpenTokenEvent;
  *((_QWORD *)a1 + 12) = DxgkDestroyAllocation2;
  *((_QWORD *)a1 + 13) = DxgkDestroyContext;
  *((_QWORD *)a1 + 14) = DxgkDestroyDevice;
  *((_QWORD *)a1 + 15) = DxgkDestroyHwContext;
  *((_QWORD *)a1 + 16) = DxgkDestroyHwQueue;
  *((_QWORD *)a1 + 17) = DxgkDestroyPagingQueue;
  *((_QWORD *)a1 + 18) = DxgkDestroySynchronizationObject;
  *((_QWORD *)a1 + 19) = DxgkEnumAdapters2Impl;
  *((_QWORD *)a1 + 20) = DxgkEscape;
  *((_QWORD *)a1 + 21) = DxgkEvict;
  *((_QWORD *)a1 + 22) = DxgkFlushHeapTransitions;
  *((_QWORD *)a1 + 23) = DxgkFreeGpuVirtualAddress;
  *((_QWORD *)a1 + 24) = DxgkGetContextInProcessSchedulingPriority;
  *((_QWORD *)a1 + 25) = DxgkGetContextSchedulingPriority;
  *((_QWORD *)a1 + 26) = DxgkGetDeviceState;
  *((_QWORD *)a1 + 27) = DxgkGetGpuUsageStatistics;
  *((_QWORD *)a1 + 28) = DxgkGetProcessSchedulingPriorityClass;
  *((_QWORD *)a1 + 29) = DxgkGetSharedResourceAdapterLuid;
  *((_QWORD *)a1 + 30) = DxgkInvalidateCache;
  *((_QWORD *)a1 + 31) = DxgkLock2;
  *((_QWORD *)a1 + 32) = DxgkMakeResident;
  *((_QWORD *)a1 + 33) = DxgkMapGpuVirtualAddress;
  *((_QWORD *)a1 + 34) = DxgkMarkDeviceAsError;
  *((_QWORD *)a1 + 35) = DxgkOfferAllocations;
  *((_QWORD *)a1 + 36) = DxgkOpenAdapter;
  *((_QWORD *)a1 + 37) = DxgkOpenAdapterFromLuid;
  *((_QWORD *)a1 + 38) = DxgkOpenNtHandleFromName;
  *((_QWORD *)a1 + 39) = DxgkOpenResource;
  *((_QWORD *)a1 + 40) = W32kStub_GreSfmOpenTokenEvent;
  *((_QWORD *)a1 + 41) = DxgkOpenSyncObjectNtHandleFromName;
  *((_QWORD *)a1 + 42) = DxgkOpenSynchronizationObject;
  *((_QWORD *)a1 + 43) = DxgkQueryAdapterInfoImpl;
  *((_QWORD *)a1 + 44) = DxgkQueryAllocationResidency;
  *((_QWORD *)a1 + 45) = DxgkQueryResourceInfo;
  *((_QWORD *)a1 + 46) = W32kStub_GreSfmOpenTokenEvent;
  *((_QWORD *)a1 + 47) = DxgkQueryStatistics;
  *((_QWORD *)a1 + 48) = DxgkQueryVideoMemoryInfo;
  *((_QWORD *)a1 + 49) = DxgkReclaimAllocations2;
  *((_QWORD *)a1 + 50) = DxgkRender;
  *((_QWORD *)a1 + 51) = DxgkReserveGpuVirtualAddress;
  *((_QWORD *)a1 + 52) = DxgkSetAllocationPriority;
  *((_QWORD *)a1 + 53) = DxgkSetContextInProcessSchedulingPriority;
  *((_QWORD *)a1 + 54) = DxgkSetContextSchedulingPriority;
  *((_QWORD *)a1 + 55) = &DxgkSetProcessSchedulingPriorityClass;
  *((_QWORD *)a1 + 56) = W32kStub_GreSfmOpenTokenEvent;
  *((_QWORD *)a1 + 57) = W32kStub_GreSfmOpenTokenEvent;
  *((_QWORD *)a1 + 58) = DxgkSignalSynchronizationObjectFromCpu;
  *((_QWORD *)a1 + 59) = DxgkSignalSynchronizationObjectFromGpu;
  *((_QWORD *)a1 + 60) = W32kStub_GreSfmOpenTokenEvent;
  *((_QWORD *)a1 + 61) = DxgkSubmitCommand;
  *((_QWORD *)a1 + 62) = DxgkSubmitCommandToHwQueue;
  *((_QWORD *)a1 + 63) = DxgkSubmitSignalSyncObjectsToHwQueue;
  *((_QWORD *)a1 + 64) = DxgkSubmitWaitForSyncObjectsToHwQueue;
  *((_QWORD *)a1 + 65) = DxgkUnlock2;
  *((_QWORD *)a1 + 66) = DxgkUpdateAllocationProperty;
  *((_QWORD *)a1 + 67) = DxgkUpdateGpuVirtualAddress;
  *((_QWORD *)a1 + 68) = DxgkWaitForSynchronizationObject;
  *((_QWORD *)a1 + 69) = W32kStub_GreSfmOpenTokenEvent;
  *((_QWORD *)a1 + 70) = DxgkWaitForSynchronizationObjectFromGpu;
  *((_QWORD *)a1 + 71) = DxgkGetAllocationPriority;
  *((_QWORD *)a1 + 72) = DxgkQueryClockCalibration;
  *((_QWORD *)a1 + 73) = DxgkEnumAdapters3Impl;
  *((_QWORD *)a1 + 74) = DxgkWslProcessCleanup;
  *((_QWORD *)a1 + 75) = &DxgkOpenResourceFromNtHandleInternal;
  *((_QWORD *)a1 + 76) = W32kStub_GreSfmOpenTokenEvent;
  if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline() && *((_WORD *)a1 + 1) == 3 )
    *((_QWORD *)a1 + 77) = DxgkQueryStatisticsK;
  else
    LODWORD(v4) = 616;
  *a2 = v4;
  return 0LL;
}
