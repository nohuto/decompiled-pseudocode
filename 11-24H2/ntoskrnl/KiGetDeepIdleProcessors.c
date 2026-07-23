/*
 * XREFs of KiGetDeepIdleProcessors @ 0x14032C3E8
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14032C760 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
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
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  PoCopyDeepIdleMask(v3);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(CurrentIrql);
  KiComplementAffinityEx(a2, a2->Size, v3);
  return KeAndAffinityEx2(a2, &KeActiveProcessors, a2);
}
