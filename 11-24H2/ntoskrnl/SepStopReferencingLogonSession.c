/*
 * XREFs of SepStopReferencingLogonSession @ 0x140A706B4
 * Callers:
 *     SepLinkLogonSessions @ 0x14049BAB0 (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x14043F618 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1404A15A4 (SepConvertToOwnTokenClaims.c)
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
