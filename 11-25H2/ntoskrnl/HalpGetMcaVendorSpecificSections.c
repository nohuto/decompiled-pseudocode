/*
 * XREFs of HalpGetMcaVendorSpecificSections @ 0x140540F18
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C828 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCorrectErrSrc @ 0x140B3B800 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
 */

_BOOL8 HalpGetMcaVendorSpecificSections()
{
  return HalpGetCpuVendor() == 2;
}
