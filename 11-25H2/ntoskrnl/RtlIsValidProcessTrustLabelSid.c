/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1403616D0
 * Callers:
 *     SepTrustLevelCheck @ 0x14035FC50 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     SepReferenceTokenByHandle @ 0x140361130 (SepReferenceTokenByHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403614B0 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x140361640 (RtlSidDominatesForTrust.c)
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     RtlpValidTrustSubjectContext @ 0x14045D468 (RtlpValidTrustSubjectContext.c)
 *     RtlAddAccessFilterAce @ 0x140770930 (RtlAddAccessFilterAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140918E20 (RtlAddProcessTrustLabelAce.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  int v1; // edx

  if ( *((_BYTE *)Sid + 1) != 2 || *(_BYTE *)Sid != 1 )
    return 0;
  v1 = *(_DWORD *)((char *)Sid + 2);
  if ( !v1 )
    v1 = *((unsigned __int16 *)Sid + 3) - 4864;
  if ( v1 )
    return 0;
  if ( *((_DWORD *)Sid + 2) )
    return 1;
  return *((_DWORD *)Sid + 3) == 0;
}
