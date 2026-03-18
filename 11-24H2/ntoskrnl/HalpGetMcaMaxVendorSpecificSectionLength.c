/*
 * XREFs of HalpGetMcaMaxVendorSpecificSectionLength @ 0x140543724
 * Callers:
 *     HalpCorrectErrSrc @ 0x140B4B800 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 */

__int64 HalpGetMcaMaxVendorSpecificSectionLength()
{
  unsigned __int8 CpuVendor; // al
  unsigned int v1; // ecx

  CpuVendor = HalpGetCpuVendor();
  v1 = 166;
  if ( CpuVendor != 2 )
    return 0;
  return v1;
}
