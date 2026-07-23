/*
 * XREFs of PsGetDefaultWsMaximum @ 0x1404A2D3C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
