/*
 * XREFs of HalpDpInitDiscard @ 0x140C0F0F0
 * Callers:
 *     HalpDpInitSystem @ 0x140B4CF60 (HalpDpInitSystem.c)
 * Callees:
 *     HalpGetHotPlugMemoryInfo @ 0x140C0E710 (HalpGetHotPlugMemoryInfo.c)
 */

__int64 __fastcall HalpDpInitDiscard(__int64 a1)
{
  __int64 result; // rax

  HalpGetHotPlugMemoryInfo(a1);
  result = HalpMaxHotPlugMemoryAddress;
  if ( HalpMaxHotPlugMemoryAddress > (unsigned __int64)HalpMaximumPhysicalMemoryAddress )
    HalpMaximumPhysicalMemoryAddress = HalpMaxHotPlugMemoryAddress;
  return result;
}
