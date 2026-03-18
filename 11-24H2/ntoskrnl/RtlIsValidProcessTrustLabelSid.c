/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1403599E0
 * Callers:
 *     SepTrustLevelCheck @ 0x140357F50 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403581B0 (SepLocateTokenTrustLevel.c)
 *     SepReferenceTokenByHandle @ 0x140359440 (SepReferenceTokenByHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403597C0 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x140359950 (RtlSidDominatesForTrust.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     RtlpValidTrustSubjectContext @ 0x14045B91C (RtlpValidTrustSubjectContext.c)
 *     RtlAddAccessFilterAce @ 0x14077FB80 (RtlAddAccessFilterAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140866F50 (RtlAddProcessTrustLabelAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
