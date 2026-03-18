/*
 * XREFs of KeAbProcessEffectiveIoPriorityChange @ 0x140429870
 * Callers:
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall KeAbProcessEffectiveIoPriorityChange(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KDPC *CurrentPrcb; // rsi

  if ( !a2 && *(_BYTE *)(a1 + 792) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb[581].DpcData, (_QWORD *)(a1 + 808)) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
