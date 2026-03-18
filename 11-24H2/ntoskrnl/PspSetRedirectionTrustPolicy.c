/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x140A65014
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140A5333C (PspApplyMitigationOptions.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x14049759C (SeTokenSetRedirectionTrustPolicy.c)
 */

char __fastcall PspSetRedirectionTrustPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetRedirectionTrustPolicy(v4, a2 == 2);
  return ObFastDereferenceObject((__int64 *)(a1 + 584), v4, 0x79517350u);
}
