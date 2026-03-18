/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x140A9BC5C
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140A5333C (PspApplyMitigationOptions.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404B93F4 (SeTokenSetNoChildProcessRestricted.c)
 */

char __fastcall PspSetNoChildProcessRestrictedPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetNoChildProcessRestricted(v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((__int64 *)(a1 + 584), v4, 0x79517350u);
}
