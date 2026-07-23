/*
 * XREFs of MmCanThreadFault @ 0x1402331D0
 * Callers:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1403DD150 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpStackTraceDispatcher @ 0x1403DD620 (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampCaptureApc @ 0x1404340A0 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x14044312C (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 */

_BOOL8 __fastcall MmCanThreadFault(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rcx

  if ( !(unsigned __int8)KeAreInterruptsEnabled(a1, a2) )
    return 0LL;
  if ( KeGetCurrentIrql() >= 2u )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  return (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc
      && KiProcessorBlock[0]
      && *(_QWORD *)(KiProcessorBlock[0] + 34872) != 0LL;
}
