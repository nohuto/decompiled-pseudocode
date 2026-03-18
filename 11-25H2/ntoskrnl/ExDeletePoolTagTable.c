/*
 * XREFs of ExDeletePoolTagTable @ 0x140648080
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExDeletePoolTagTable(unsigned int a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = a1;
  v2 = (unsigned __int64)*(&ExPoolTagTables + a1);
  v3 = 80 * (PoolTrackTableSize + 1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  *(&ExPoolTagTables + v1) = 0LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return MmFreeIndependentPages(v2, v3);
}
