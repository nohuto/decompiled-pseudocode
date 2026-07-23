/*
 * XREFs of HalpGetMcaVendorSpecificSections @ 0x140541098
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C958 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCorrectErrSrc @ 0x140B4D840 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 */

_BOOL8 HalpGetMcaVendorSpecificSections()
{
  return HalpGetCpuVendor() == 2;
}
