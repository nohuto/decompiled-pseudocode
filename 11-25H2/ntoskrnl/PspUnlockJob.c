/*
 * XREFs of PspUnlockJob @ 0x1408DDFF0
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140767F10 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x140768098 (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x140768744 (PspSetNetRateControl.c)
 *     PspJobClose @ 0x1408DA090 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1408DB0C0 (PspNotificationPacketCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408DB3B0 (PspSendProcessNotificationToJobChain.c)
 *     PspLockRootJobFromProcess @ 0x1408DBF30 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x1408DC088 (PspGetNextJobProcess.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408DC184 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408DFF78 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E3454 (PsInsertPermanentSiloContextEx.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 *     PspSetJobIoRateControl @ 0x140A3AD48 (PspSetJobIoRateControl.c)
 *     PspJobNotificationWorker @ 0x140A416F0 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140A7183C (PspCreateSilo.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
}
