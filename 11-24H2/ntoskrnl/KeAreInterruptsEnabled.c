/*
 * XREFs of KeAreInterruptsEnabled @ 0x140257E20
 * Callers:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     ObGetCurrentIrql @ 0x140257DF0 (ObGetCurrentIrql.c)
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14027D900 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     MmCanThreadFault @ 0x14027DC40 (MmCanThreadFault.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140326900 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpOpenLogger @ 0x140347F50 (EtwpOpenLogger.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403ED390 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpStackTraceDispatcher @ 0x1403ED650 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041BD10 (IopFreeWaitCompletionPacket.c)
 *     MiRetryNonPagedAllocation @ 0x140481470 (MiRetryNonPagedAllocation.c)
 *     EtwpCCSwapTrace @ 0x1404EF7D0 (EtwpCCSwapTrace.c)
 *     KeCanUseHaltOnAddress @ 0x1404FA680 (KeCanUseHaltOnAddress.c)
 *     KiScheduleBugcheckRecovery @ 0x1405C6580 (KiScheduleBugcheckRecovery.c)
 *     EtwpEnumerateAddressSpace @ 0x1409690F0 (EtwpEnumerateAddressSpace.c)
 *     VfAfterCallDriver @ 0x140B8DA94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8DC68 (VfBeforeCallDriver.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B9DBE0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140B9DDE0 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B9DFD0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     ViDeadlockCanProceed @ 0x140BA7B94 (ViDeadlockCanProceed.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA7F68 (ViKeIrqlLogAndTrimMemory.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
