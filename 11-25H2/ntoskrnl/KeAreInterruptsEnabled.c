/*
 * XREFs of KeAreInterruptsEnabled @ 0x140256C40
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeAreAllApcsDisabled @ 0x140256FE0 (KeAreAllApcsDisabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwpOpenLogger @ 0x140257A00 (EtwpOpenLogger.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwpStackTraceDispatcher @ 0x140309B20 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x14030B270 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140347DF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     MmCanThreadFault @ 0x140348130 (MmCanThreadFault.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x140348E10 (EtwpExpandStackAndWalkFrameChain.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041E430 (IopFreeWaitCompletionPacket.c)
 *     MiRetryNonPagedAllocation @ 0x1404807B0 (MiRetryNonPagedAllocation.c)
 *     EtwpCCSwapTrace @ 0x1404EC190 (EtwpCCSwapTrace.c)
 *     KeCanUseHaltOnAddress @ 0x1404F81B0 (KeCanUseHaltOnAddress.c)
 *     KiScheduleBugcheckRecovery @ 0x1405C21E0 (KiScheduleBugcheckRecovery.c)
 *     EtwpEnumerateAddressSpace @ 0x1408C04E0 (EtwpEnumerateAddressSpace.c)
 *     VfAfterCallDriver @ 0x140B7DAB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B7DC88 (VfBeforeCallDriver.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B8DC00 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140B8DE00 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B8DFF0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     ViDeadlockCanProceed @ 0x140B97BB4 (ViDeadlockCanProceed.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140B97F88 (ViKeIrqlLogAndTrimMemory.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
