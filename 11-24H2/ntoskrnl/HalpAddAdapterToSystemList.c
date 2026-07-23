/*
 * XREFs of HalpAddAdapterToSystemList @ 0x1405504E0
 * Callers:
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpAddAdapterToSystemList(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 result; // rax

  v4 = *(unsigned __int8 *)(a1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v6 = *(_QWORD **)(a1 + 24);
  v7 = (_QWORD *)(a2 + 464);
  if ( *v6 != a1 + 16 )
    __fastfail(3u);
  *v7 = a1 + 16;
  *(_QWORD *)(a2 + 472) = v6;
  *v6 = v7;
  *(_QWORD *)(a1 + 24) = v7;
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 168));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
