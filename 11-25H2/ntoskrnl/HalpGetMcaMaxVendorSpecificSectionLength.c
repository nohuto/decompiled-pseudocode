/*
 * XREFs of HalpGetMcaMaxVendorSpecificSectionLength @ 0x140540EF4
 * Callers:
 *     HalpCorrectErrSrc @ 0x140B3B800 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
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
