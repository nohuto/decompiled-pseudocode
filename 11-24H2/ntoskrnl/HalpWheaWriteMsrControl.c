/*
 * XREFs of HalpWheaWriteMsrControl @ 0x14047829C
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140B6D5A8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaWriteMsrControl(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2) == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * v2 - 1073733632);
  else
    v4 = (unsigned int)(4 * v2 + 1024);
  return guard_dispatch_icall_no_overrides(v3, v4);
}
