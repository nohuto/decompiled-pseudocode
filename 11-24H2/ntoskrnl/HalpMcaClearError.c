/*
 * XREFs of HalpMcaClearError @ 0x14053F858
 * Callers:
 *     HalpCmcPollProcessor @ 0x14047D32C (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140540418 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4BA0C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x14047D0C0 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaReadMsrStatus @ 0x14047D59C (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CpuVendor; // al
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 36);
  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 1 )
  {
    if ( HalpMcaScalableRasSupported && (HalpWheaReadMsrStatus(a2, v2) & 0x100000000000LL) != 0 )
    {
      v8 = 16 * v2 - 1073733624;
LABEL_8:
      guard_dispatch_icall_no_overrides(a2, v8, 0LL, v7);
    }
  }
  else if ( CpuVendor == 2 && (guard_dispatch_icall_no_overrides(a2, 377LL, 0LL, v6) & 0xFF0000) != 0 )
  {
    v8 = 392LL;
    goto LABEL_8;
  }
  result = HalpWheaWriteMsrStatus(a2, *(unsigned int *)(a1 + 36));
  _mm_mfence();
  return result;
}
