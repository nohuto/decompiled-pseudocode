/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x140A9616C
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140A521AC (PspApplyMitigationOptions.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404BA494 (SeTokenSetNoChildProcessRestricted.c)
 */

__int64 __fastcall PspSetNoChildProcessRestrictedPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetNoChildProcessRestricted(v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((__int64 *)(a1 + 584), v4, 2035381072LL);
}
