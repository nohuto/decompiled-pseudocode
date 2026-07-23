/*
 * XREFs of SepReferenceLogonSession @ 0x140A25A7C
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x1404361D0 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x14049BAB0 (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x140A25AB4 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
