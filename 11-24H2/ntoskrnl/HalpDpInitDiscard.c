/*
 * XREFs of HalpDpInitDiscard @ 0x140C110F0
 * Callers:
 *     HalpDpInitSystem @ 0x140B4EFA0 (HalpDpInitSystem.c)
 * Callees:
 *     HalpGetHotPlugMemoryInfo @ 0x140C10710 (HalpGetHotPlugMemoryInfo.c)
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
