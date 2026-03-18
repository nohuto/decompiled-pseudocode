/*
 * XREFs of HalpMcaClearError @ 0x14053D028
 * Callers:
 *     HalpCmcPollProcessor @ 0x14047C42C (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14053DBE8 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B3BA0C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x14047C1C0 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaReadMsrStatus @ 0x14047C69C (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CpuVendor; // al
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 36);
  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 1 )
  {
    if ( HalpMcaScalableRasSupported && (HalpWheaReadMsrStatus(a2, v2) & 0x100000000000LL) != 0 )
LABEL_7:
      guard_dispatch_icall_no_overrides(a2);
  }
  else if ( CpuVendor == 2 && (guard_dispatch_icall_no_overrides(a2) & 0xFF0000) != 0 )
  {
    goto LABEL_7;
  }
  result = HalpWheaWriteMsrStatus(a2, *(unsigned int *)(a1 + 36));
  _mm_mfence();
  return result;
}
