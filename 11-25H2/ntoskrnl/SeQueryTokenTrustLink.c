/*
 * XREFs of SeQueryTokenTrustLink @ 0x140468F38
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 *     PsRestoreImpersonation @ 0x1409D7040 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
