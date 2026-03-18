/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x1404316C0
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1409E2D6C (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
