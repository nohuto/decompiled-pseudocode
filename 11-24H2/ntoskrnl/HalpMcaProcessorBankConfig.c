/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x14047CEBC
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140B68F1C (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x14054380C (HalpMcaProcessorBankConfigAmd.c)
 */

__int64 __fastcall HalpMcaProcessorBankConfig(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = HalpGetCpuVendor(a1, a2);
  if ( (_BYTE)result == 1 )
  {
    if ( HalpMcaScalableRasSupported )
      return HalpMcaProcessorBankConfigAmd(v3);
  }
  return result;
}
