/*
 * XREFs of MmCanThreadFault @ 0x140348130
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x140309B20 (EtwpStackTraceDispatcher.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     EtwpCovSampCaptureApc @ 0x140348740 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140348924 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14045839C (EtwpGetStackExtendedHeaderItem.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rcx

  if ( !KeAreInterruptsEnabled() )
    return 0LL;
  if ( KeGetCurrentIrql() >= 2u )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  return (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc
      && KiProcessorBlock[0]
      && *(_QWORD *)(KiProcessorBlock[0] + 34872) != 0LL;
}
