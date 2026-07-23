/*
 * XREFs of HalpMcaProcessorBankConfigAmd @ 0x14054115C
 * Callers:
 *     HalpMcaProcessorBankConfig @ 0x14047804C (HalpMcaProcessorBankConfig.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaProcessorBankConfigAmd(__int64 a1, int a2)
{
  unsigned int v3; // edi

  v3 = 16 * a2 - 1073733628;
  guard_dispatch_icall_no_overrides(a1, v3);
  return guard_dispatch_icall_no_overrides(a1, v3);
}
