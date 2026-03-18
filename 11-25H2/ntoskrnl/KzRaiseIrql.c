/*
 * XREFs of KzRaiseIrql @ 0x1403FA640
 * Callers:
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(NewIrql);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  return CurrentIrql;
}
