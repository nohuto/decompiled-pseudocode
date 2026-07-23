/*
 * XREFs of PspUnlockJob @ 0x14085EB90
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140777BB0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x140777D38 (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1407783E4 (PspSetNetRateControl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 *     PspJobClose @ 0x14085AC90 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x14085BCC0 (PspNotificationPacketCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x14085BFB0 (PspSendProcessNotificationToJobChain.c)
 *     PspLockRootJobFromProcess @ 0x14085CB34 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x14085CD84 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14085CE84 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140860B78 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409DBE54 (PsInsertPermanentSiloContextEx.c)
 *     PspJobNotificationWorker @ 0x140A3AAD0 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140A6D570 (PspCreateSilo.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
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
