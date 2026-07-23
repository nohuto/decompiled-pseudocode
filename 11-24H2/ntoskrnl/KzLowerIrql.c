/*
 * XREFs of KzLowerIrql @ 0x1403F8C90
 * Callers:
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  unsigned __int64 v1; // rbx

  v1 = NewIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), NewIrql);
  __writecr8(v1);
}
