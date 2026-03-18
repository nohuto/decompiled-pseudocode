/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x140A62D9C
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140A521AC (PspApplyMitigationOptions.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140497B08 (SeTokenSetRedirectionTrustPolicy.c)
 */

__int64 __fastcall PspSetRedirectionTrustPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetRedirectionTrustPolicy(v4, a2 == 2);
  return ObFastDereferenceObject((__int64 *)(a1 + 584), v4, 2035381072LL);
}
