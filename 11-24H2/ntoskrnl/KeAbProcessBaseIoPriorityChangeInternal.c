/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x1402097EC
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x140207C84 (KeAbProcessBaseIoPriorityChange.c)
 *     PsSetIoPriorityThread @ 0x14020973C (PsSetIoPriorityThread.c)
 *     IoUpdateThreadIoRateThrottle @ 0x140491C50 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 result; // rax
  __int64 v9; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx

  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL, a3);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(v4 + 793) || a2 )
  {
    if ( !*(_BYTE *)(v4 + 792) || !a2 )
      goto LABEL_5;
    v9 = v4 + 808;
    p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
  }
  else
  {
    v9 = v4 + 816;
    p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  }
  if ( (unsigned int)KiAbThreadInsertList(v4, p_AbPropagateBoostsList, v9) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_5:
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
