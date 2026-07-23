/*
 * XREFs of WheaPrmTranslatePhysicalAddress @ 0x14065CD60
 * Callers:
 *     HalpAddPrmAddressTranslationToMemoryExtIntelSection @ 0x140540A58 (HalpAddPrmAddressTranslationToMemoryExtIntelSection.c)
 * Callees:
 *     WheapPrmTranslatePhysicalAddressIntel @ 0x14065D028 (WheapPrmTranslatePhysicalAddressIntel.c)
 */

__int64 WheaPrmTranslatePhysicalAddress()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = 3221225659LL;
  if ( !CurrentPrcb->CpuID )
    return 3221225473LL;
  if ( CurrentPrcb->CpuVendor == 2 )
    return WheapPrmTranslatePhysicalAddressIntel();
  return result;
}
