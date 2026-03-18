/*
 * XREFs of KzLowerIrql @ 0x1403FE9F0
 * Callers:
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  unsigned __int64 v1; // rbx

  v1 = NewIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), NewIrql);
  __writecr8(v1);
}
