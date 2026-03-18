/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x140541938
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpMaxHotPlugMemoryAddress;
}
