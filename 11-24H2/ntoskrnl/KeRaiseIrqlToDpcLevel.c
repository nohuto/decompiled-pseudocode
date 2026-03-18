/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x1403FA2A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL KeRaiseIrqlToDpcLevel(void)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  return CurrentIrql;
}
