/*
 * XREFs of MmCanThreadFault @ 0x14027DC40
 * Callers:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1403ED180 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpStackTraceDispatcher @ 0x1403ED650 (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampCaptureApc @ 0x14043E480 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x14044BFEC (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
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
