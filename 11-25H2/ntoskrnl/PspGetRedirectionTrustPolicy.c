/*
 * XREFs of PspGetRedirectionTrustPolicy @ 0x1408BA06C
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14048DA00 (SeTokenGetRedirectionTrustPolicy.c)
 */

__int64 __fastcall PspGetRedirectionTrustPolicy(__int64 a1)
{
  ULONG_PTR v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenGetRedirectionTrustPolicy(v2, &v4, &v5);
  ObFastDereferenceObject((__int64 *)(a1 + 584), v2, 2035381072LL);
  if ( v4 )
    return 1LL;
  else
    return v5 ? 2 : 0;
}
