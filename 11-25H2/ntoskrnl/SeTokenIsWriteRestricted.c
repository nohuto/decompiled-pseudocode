/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14045ACB0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A098B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeCompareTokens @ 0x140A18FB8 (SeCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
