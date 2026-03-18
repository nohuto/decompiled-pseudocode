/*
 * XREFs of HalpWheaGetBankFromMciStatusIndex @ 0x14047C16C
 * Callers:
 *     HalpHvLpReadMcaStatusMsr @ 0x14047C0C8 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
 */

__int64 __fastcall HalpWheaGetBankFromMciStatusIndex(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  if ( (unsigned __int8)HalpGetCpuVendor(a1, 0xFFFFFFFFLL) == 1 && HalpMcaScalableRasSupported )
  {
    if ( v2 >= 0xC0002000 )
      return (v2 + 1073733632) >> 4;
  }
  else if ( v2 >= 0x401 )
  {
    return (v2 - 1025) >> 2;
  }
  return v1;
}
