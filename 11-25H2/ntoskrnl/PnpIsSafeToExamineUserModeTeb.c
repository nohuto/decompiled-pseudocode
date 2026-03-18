/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x14046EE30
 * Callers:
 *     IopInitActivityIdIrp @ 0x140454288 (IopInitActivityIdIrp.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
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
    || ObGetCurrentIrql()
    || BYTE6(CurrentThread[1].Queue) > 1u )
  {
    return 0;
  }
  return v0;
}
