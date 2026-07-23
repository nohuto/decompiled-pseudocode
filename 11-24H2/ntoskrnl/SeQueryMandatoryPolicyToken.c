/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x140423C00
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1409DD7CC (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
