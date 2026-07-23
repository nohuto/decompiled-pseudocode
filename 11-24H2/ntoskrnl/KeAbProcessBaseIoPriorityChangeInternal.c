/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x140330DCC
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x14032F264 (KeAbProcessBaseIoPriorityChange.c)
 *     PsSetIoPriorityThread @ 0x140330D1C (PsSetIoPriorityThread.c)
 *     IoUpdateThreadIoRateThrottle @ 0x14048CAF0 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  struct _KDPC *CurrentPrcb; // rsi
  __int64 result; // rax
  _QWORD *v10; // r8
  PVOID *p_DpcData; // rdx

  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
  if ( !*(_BYTE *)(v5 + 793) || a2 )
  {
    if ( !*(_BYTE *)(v5 + 792) || !a2 )
      goto LABEL_5;
    v10 = (_QWORD *)(v5 + 808);
    p_DpcData = &CurrentPrcb[581].DpcData;
  }
  else
  {
    v10 = (_QWORD *)(v5 + 816);
    p_DpcData = &CurrentPrcb[581].SystemArgument2;
  }
  if ( (unsigned int)KiAbThreadInsertList(v5, p_DpcData, v10, a4) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_5:
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
