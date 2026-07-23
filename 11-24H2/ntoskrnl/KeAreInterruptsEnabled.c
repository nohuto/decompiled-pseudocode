/*
 * XREFs of KeAreInterruptsEnabled @ 0x140288430
 * Callers:
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140232E90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     ObGetCurrentIrql @ 0x140288400 (ObGetCurrentIrql.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     EtwpOpenLogger @ 0x140326950 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403DD360 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpStackTraceDispatcher @ 0x1403DD620 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14040F850 (IopFreeWaitCompletionPacket.c)
 *     MiRetryNonPagedAllocation @ 0x14047C730 (MiRetryNonPagedAllocation.c)
 *     EtwpCCSwapTrace @ 0x1404ED100 (EtwpCCSwapTrace.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     KiScheduleBugcheckRecovery @ 0x1405C3CB0 (KiScheduleBugcheckRecovery.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     VfAfterCallDriver @ 0x140B8FA94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8FC68 (VfBeforeCallDriver.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B9FBE0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140B9FDE0 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B9FFD0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     ViDeadlockCanProceed @ 0x140BA9B94 (ViDeadlockCanProceed.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA9F68 (ViKeIrqlLogAndTrimMemory.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
