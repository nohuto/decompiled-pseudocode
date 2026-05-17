/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1800E88C0
 * Callers:
 *     RtlpGetDefaultTrustSubjectContext @ 0x180061230 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800E68E0 (RtlAddProcessTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1800E8830 (RtlSidDominatesForTrust.c)
 *     RtlAddAccessFilterAce @ 0x18013C440 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  if ( v1 )
    return 0;
  if ( *(_DWORD *)(a1 + 8) )
    return 1;
  return *(_DWORD *)(a1 + 12) == 0;
}
