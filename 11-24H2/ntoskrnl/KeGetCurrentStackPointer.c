/*
 * XREFs of KeGetCurrentStackPointer @ 0x1406AA390
 * Callers:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x140259A00 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x140259B80 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14027C840 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14027D900 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     RtlpIsFrameInBoundsEx @ 0x14040D770 (RtlpIsFrameInBoundsEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14042B6E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     KasanWrapperRtlRestoreContext @ 0x140449420 (KasanWrapperRtlRestoreContext.c)
 *     MiDoStackCopy @ 0x140480C40 (MiDoStackCopy.c)
 *     PnprGetStackLimits @ 0x1405A7AEC (PnprGetStackLimits.c)
 *     KasanHibernationGetStackLow @ 0x1405A9C30 (KasanHibernationGetStackLow.c)
 *     ViDeadlockAnalyze @ 0x140B98BE4 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140BA47F8 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
