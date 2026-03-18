/*
 * XREFs of SeTokenIsAdmin @ 0x1408E91E0
 * Callers:
 *     IoComputeRedirectionTrustLevel @ 0x1404B5410 (IoComputeRedirectionTrustLevel.c)
 *     SepMandatorySubProcessToken @ 0x1404EF064 (SepMandatorySubProcessToken.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x1408E917C (PspIsContextAdmin.c)
 *     PspDisablePrimaryTokenExchange @ 0x1408FEB00 (PspDisablePrimaryTokenExchange.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140987584 (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     SepSidInToken @ 0x1403624E0 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x140432500 (SeTokenIsRestricted.c)
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
