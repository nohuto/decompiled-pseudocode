/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x140468200
 * Callers:
 *     IopInitActivityIdIrp @ 0x140449990 (IopInitActivityIdIrp.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 */

char __fastcall PnpIsSafeToExamineUserModeTeb(__int64 a1, __int64 a2)
{
  char v2; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v2 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode != 1
    || KeGetCurrentThread()->SpecialApcDisable
    || KeGetEffectiveIrql(a1, a2)
    || BYTE6(CurrentThread[1].Queue) > 1u )
  {
    return 0;
  }
  return v2;
}
