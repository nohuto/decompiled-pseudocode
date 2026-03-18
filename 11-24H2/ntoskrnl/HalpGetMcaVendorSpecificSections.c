/*
 * XREFs of HalpGetMcaVendorSpecificSections @ 0x140543748
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053F058 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCorrectErrSrc @ 0x140B4B800 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 */

_BOOL8 HalpGetMcaVendorSpecificSections()
{
  return HalpGetCpuVendor() == 2;
}
