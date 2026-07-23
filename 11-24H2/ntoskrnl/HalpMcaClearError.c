/*
 * XREFs of HalpMcaClearError @ 0x14053D158
 * Callers:
 *     HalpCmcPollProcessor @ 0x1404784BC (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14053DD18 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4DA4C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x140478250 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaReadMsrStatus @ 0x14047872C (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CpuVendor; // al
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 36);
  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 1 )
  {
    if ( HalpMcaScalableRasSupported && (HalpWheaReadMsrStatus(a2, v2) & 0x100000000000LL) != 0 )
    {
      v6 = 16 * v2 - 1073733624;
LABEL_8:
      guard_dispatch_icall_no_overrides(a2, v6);
    }
  }
  else if ( CpuVendor == 2 && (guard_dispatch_icall_no_overrides(a2, 377LL) & 0xFF0000) != 0 )
  {
    v6 = 392LL;
    goto LABEL_8;
  }
  result = HalpWheaWriteMsrStatus(a2, *(unsigned int *)(a1 + 36));
  _mm_mfence();
  return result;
}
