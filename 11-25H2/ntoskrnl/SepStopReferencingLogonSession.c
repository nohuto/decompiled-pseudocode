/*
 * XREFs of SepStopReferencingLogonSession @ 0x140A744C0
 * Callers:
 *     SepLinkLogonSessions @ 0x1404A1A1C (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x1405FC0DC (SepOneWayLinkLogonSessions.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140449F64 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1404A60D4 (SepConvertToOwnTokenClaims.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
