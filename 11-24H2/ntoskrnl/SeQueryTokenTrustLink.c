/*
 * XREFs of SeQueryTokenTrustLink @ 0x14046743C
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     PsRestoreImpersonation @ 0x1409D6E80 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
