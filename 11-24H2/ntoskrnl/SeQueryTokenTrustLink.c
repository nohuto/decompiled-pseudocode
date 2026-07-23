/*
 * XREFs of SeQueryTokenTrustLink @ 0x14045EEDC
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     PsRestoreImpersonation @ 0x1409C74E0 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
