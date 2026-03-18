/*
 * XREFs of PsGetDefaultWsMaximum @ 0x1404A8270
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
