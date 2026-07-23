/*
 * XREFs of RtlSidDominatesForTrust @ 0x1403E3BC0
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140606840 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     SepAdjustAccessStateForConstraints @ 0x14090B020 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140994420 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14099A7A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140A35800 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403E3C50 (RtlIsValidProcessTrustLabelSid.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  PSID v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *DominatesTrust = 0;
  v3 = Sid2;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !v3 )
  {
LABEL_3:
    *DominatesTrust = 1;
    return 0;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v3) )
    return -1073741811;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
    *DominatesTrust = 0;
    return 0;
  }
  else
  {
    *DominatesTrust = *(_DWORD *)(v5 + 8) == 0;
    return 0;
  }
}
