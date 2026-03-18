/*
 * XREFs of KiGetDeepIdleProcessors @ 0x140204E08
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140205180 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeAndAffinityEx2 @ 0x1402052E0 (KeAndAffinityEx2.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, __int64 a3)
{
  struct _KAFFINITY_EX *v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rdx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = a1;
  _InterlockedOr(v8, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL, a3);
  }
  PoCopyDeepIdleMask(v4);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(CurrentIrql);
  KiComplementAffinityEx(a2, a2->Size, v4);
  return KeAndAffinityEx2(a2, &KeActiveProcessors, a2);
}
