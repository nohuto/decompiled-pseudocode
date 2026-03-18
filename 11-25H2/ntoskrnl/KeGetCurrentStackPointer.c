/*
 * XREFs of KeGetCurrentStackPointer @ 0x14069F0C0
 * Callers:
 *     EtwpTraceLastBranchRecord @ 0x140257020 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x1402571A0 (KeQueryCurrentStackInformation.c)
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140347DF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpIsFrameInBoundsEx @ 0x140429A30 (RtlpIsFrameInBoundsEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140432BE0 (RtlEnoughStackSpaceForStackCapture.c)
 *     KasanWrapperRtlRestoreContext @ 0x14044B640 (KasanWrapperRtlRestoreContext.c)
 *     MiDoStackCopy @ 0x14047FF80 (MiDoStackCopy.c)
 *     PnprGetStackLimits @ 0x1405A42DC (PnprGetStackLimits.c)
 *     KasanHibernationGetStackLow @ 0x1405A62A0 (KasanHibernationGetStackLow.c)
 *     ViDeadlockAnalyze @ 0x140B88C04 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140B94818 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
