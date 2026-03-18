/*
 * XREFs of HalpWheaReadMsrStatus @ 0x14047D59C
 * Callers:
 *     HalpMcaClearError @ 0x14053F858 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x14053FE0C (HalpMcaReadError.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaReadMsrStatus(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2) == 1 && HalpMcaScalableRasSupported )
    v5 = (unsigned int)(16 * v2 - 1073733631);
  else
    v5 = (unsigned int)(4 * v2 + 1025);
  return guard_dispatch_icall_no_overrides(v4, v5, v3, v4);
}
