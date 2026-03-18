/*
 * XREFs of RtlSidDominatesForTrust @ 0x140361640
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405FCAF0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     SepAdjustAccessStateForConstraints @ 0x1408F6170 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1409A7210 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1409C2F30 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140A3B700 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *a3 = 0;
  v3 = a2;
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3) )
    return 3221225485LL;
  if ( !v3 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v3, a2, a3) )
    return 3221225485LL;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
    *a3 = 0;
    return 0LL;
  }
  else
  {
    *a3 = *(_DWORD *)(v5 + 8) == 0;
    return 0LL;
  }
}
