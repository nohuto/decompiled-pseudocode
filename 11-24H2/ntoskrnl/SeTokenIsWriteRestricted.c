/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14045A0B0
 * Callers:
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A13F88 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeCompareTokens @ 0x140A235A8 (SeCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
