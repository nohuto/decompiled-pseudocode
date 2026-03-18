/*
 * XREFs of HalpWheaReadMsrAddress @ 0x140551C80
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053D35C (HalpMcaPopulateErrorData.c)
 *     HalpMcaPopulateErrorDataEx @ 0x14053D53C (HalpMcaPopulateErrorDataEx.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpWheaReadMsrAddress()
{
  __int64 v0; // r9

  HalpGetCpuVendor();
  return guard_dispatch_icall_no_overrides(v0);
}
