/*
 * XREFs of SeTokenIsAdmin @ 0x1408D9E10
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14047E350 (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404B5970 (IoComputeRedirectionTrustLevel.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x1408D9DA4 (PspIsContextAdmin.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1409D1878 (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     SepSidInToken @ 0x1403CF090 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x1404360F0 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  unsigned __int8 *v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = (unsigned __int8 *)SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)SeAliasAdminsSid, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, v2, 0, 1, 0);
  }
  return v3;
}
