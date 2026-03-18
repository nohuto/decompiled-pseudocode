/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x140544168
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpMaxHotPlugMemoryAddress;
}
