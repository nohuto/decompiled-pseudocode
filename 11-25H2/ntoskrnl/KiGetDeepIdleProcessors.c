/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1402671F0
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1402670A0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402673B0 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned int __fastcall KiGetDeepIdleProcessors(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  struct _KAFFINITY_EX *v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a1;
  _InterlockedOr(v7, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  PoCopyDeepIdleMask(v3);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(CurrentIrql);
  KiComplementAffinityEx(a2, a2->Size, v3);
  return KiAndAffinityEx(a2, &KeActiveProcessors, a2, a2->Size);
}
