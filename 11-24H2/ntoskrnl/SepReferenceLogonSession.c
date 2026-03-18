/*
 * XREFs of SepReferenceLogonSession @ 0x140A31B0C
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x14043FF10 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x1404A1250 (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x1406083E4 (SepOneWayLinkLogonSessions.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x140A31B44 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
