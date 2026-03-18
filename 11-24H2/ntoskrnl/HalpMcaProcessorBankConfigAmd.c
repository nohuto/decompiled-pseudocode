/*
 * XREFs of HalpMcaProcessorBankConfigAmd @ 0x14054380C
 * Callers:
 *     HalpMcaProcessorBankConfig @ 0x14047CEBC (HalpMcaProcessorBankConfig.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaProcessorBankConfigAmd(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // r9

  v5 = 16 * a2 - 1073733628;
  v6 = guard_dispatch_icall_no_overrides(a1, v5, 0LL, a4);
  return guard_dispatch_icall_no_overrides(a1, v5, v6 | 5, v7);
}
