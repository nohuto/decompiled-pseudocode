/*
 * XREFs of KeGetCurrentStackPointer @ 0x1406AB330
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140232E90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x14028A010 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x14028A190 (KeQueryCurrentStackInformation.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     RtlpIsFrameInBoundsEx @ 0x1404059C0 (RtlpIsFrameInBoundsEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14041E270 (RtlEnoughStackSpaceForStackCapture.c)
 *     KasanWrapperRtlRestoreContext @ 0x140441B70 (KasanWrapperRtlRestoreContext.c)
 *     MiDoStackCopy @ 0x14047B710 (MiDoStackCopy.c)
 *     PnprGetStackLimits @ 0x1405A4ADC (PnprGetStackLimits.c)
 *     KasanHibernationGetStackLow @ 0x1405A6BA0 (KasanHibernationGetStackLow.c)
 *     ViDeadlockAnalyze @ 0x140B9ABE4 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140BA67F8 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
