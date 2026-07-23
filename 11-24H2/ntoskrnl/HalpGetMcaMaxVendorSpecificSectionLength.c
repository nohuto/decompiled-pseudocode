/*
 * XREFs of HalpGetMcaMaxVendorSpecificSectionLength @ 0x140541074
 * Callers:
 *     HalpCorrectErrSrc @ 0x140B4D840 (HalpCorrectErrSrc.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
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
