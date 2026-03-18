/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x14047C1C0
 * Callers:
 *     HalpMcaClearError @ 0x14053D028 (HalpMcaClearError.c)
 *     HalpMcaReadErrorUncorrected @ 0x140541030 (HalpMcaReadErrorUncorrected.c)
 *     HalpMcaSetProcessorConfig @ 0x140B590EC (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaWriteMsrStatus(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2) == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * v2 - 1073733631);
  else
    v4 = (unsigned int)(4 * v2 + 1025);
  return guard_dispatch_icall_no_overrides(v3, v4);
}
