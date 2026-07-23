/*
 * XREFs of KzRaiseIrql @ 0x1403FC0F0
 * Callers:
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(NewIrql);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, NewIrql);
  return CurrentIrql;
}
