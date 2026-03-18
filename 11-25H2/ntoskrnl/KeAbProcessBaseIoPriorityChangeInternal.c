/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x14020E09C
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x14020DC88 (KeAbProcessBaseIoPriorityChange.c)
 *     PsSetIoPriorityThread @ 0x14020DFEC (PsSetIoPriorityThread.c)
 *     IoUpdateThreadIoRateThrottle @ 0x1404929F0 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 result; // rax
  __int64 v8; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(v3 + 793) || a2 )
  {
    if ( !*(_BYTE *)(v3 + 792) || !a2 )
      goto LABEL_5;
    v8 = v3 + 808;
    p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
  }
  else
  {
    v8 = v3 + 816;
    p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  }
  if ( (unsigned int)KiAbThreadInsertList(v3, p_AbPropagateBoostsList, v8) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_5:
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
