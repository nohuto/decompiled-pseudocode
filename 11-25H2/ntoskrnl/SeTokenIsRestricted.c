/*
 * XREFs of SeTokenIsRestricted @ 0x1404360F0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     SeTokenIsAdmin @ 0x1408D9E10 (SeTokenIsAdmin.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A098B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeCompareTokens @ 0x140A18FB8 (SeCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
