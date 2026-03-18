/*
 * XREFs of PspUnlockJob @ 0x1408ED360
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407779F0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x140777B78 (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x140778224 (PspSetNetRateControl.c)
 *     PspSetUILimitJobObject @ 0x1407785C8 (PspSetUILimitJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetJobIoRateControl @ 0x14085E618 (PspSetJobIoRateControl.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspJobClose @ 0x1408E9460 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1408EA490 (PspNotificationPacketCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408EA780 (PspSendProcessNotificationToJobChain.c)
 *     PspLockRootJobFromProcess @ 0x1408EB304 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x1408EB458 (PspGetNextJobProcess.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408EB554 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408EB654 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408EF378 (PspEvaluateAndNotifyEmptyJob.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E20A4 (PsInsertPermanentSiloContextEx.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 *     PspJobNotificationWorker @ 0x140A451A0 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140A73C18 (PspCreateSilo.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v4, v3);
  }
}
