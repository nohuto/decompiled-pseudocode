/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x14046D660
 * Callers:
 *     IopInitActivityIdIrp @ 0x140454AF0 (IopInitActivityIdIrp.c)
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     PnpInsertEventInQueue @ 0x1408B3950 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v0 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode != 1
    || KeGetCurrentThread()->SpecialApcDisable
    || KeGetEffectiveIrql()
    || BYTE6(CurrentThread[1].Queue) > 1u )
  {
    return 0;
  }
  return v0;
}
