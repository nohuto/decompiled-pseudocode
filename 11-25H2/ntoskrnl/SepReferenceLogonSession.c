/*
 * XREFs of SepReferenceLogonSession @ 0x140A2B0BC
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x140440020 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x1404A1A1C (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x140A2B0F4 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
