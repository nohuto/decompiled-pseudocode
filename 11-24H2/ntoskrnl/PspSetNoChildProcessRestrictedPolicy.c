/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x140A971CC
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140A4B32C (PspApplyMitigationOptions.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404B4294 (SeTokenSetNoChildProcessRestricted.c)
 */

char __fastcall PspSetNoChildProcessRestrictedPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetNoChildProcessRestricted(v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((__int64 *)(a1 + 584), v4, 0x79517350u);
}
