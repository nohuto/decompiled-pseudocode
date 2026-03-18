/*
 * XREFs of HalpWheaReadMsrAddress @ 0x140554580
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053FB8C (HalpMcaPopulateErrorData.c)
 *     HalpMcaPopulateErrorDataEx @ 0x14053FD6C (HalpMcaPopulateErrorDataEx.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpWheaReadMsrAddress()
{
  int v0; // edx
  __int64 v1; // r9
  __int64 v2; // rdx

  if ( HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v2 = (unsigned int)(16 * v0 - 1073733630);
  else
    v2 = (unsigned int)(4 * v0 + 1026);
  return guard_dispatch_icall_no_overrides(v1, v2, 0LL, v1);
}
