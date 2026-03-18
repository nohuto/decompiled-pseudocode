/*
 * XREFs of KzLowerIrql @ 0x1403F7360
 * Callers:
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  unsigned __int64 v1; // rbx

  v1 = NewIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), NewIrql);
  __writecr8(v1);
}
