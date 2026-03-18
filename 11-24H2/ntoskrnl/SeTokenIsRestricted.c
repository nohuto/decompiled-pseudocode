/*
 * XREFs of SeTokenIsRestricted @ 0x140432500
 * Callers:
 *     SeTokenIsAdmin @ 0x1408E91E0 (SeTokenIsAdmin.c)
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A13F88 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeCompareTokens @ 0x140A235A8 (SeCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
