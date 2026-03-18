/*
 * XREFs of SepLocateTokenTrustLevel @ 0x1403581B0
 * Callers:
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140360470 (SepCommonAccessCheckEx.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409175B0 (SepAdjustAccessStateForConstraints.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1409AABF0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1409B0CE0 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403599E0 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // r10
  __int64 v5; // r11

  v2 = a1[2];
  if ( !*a1 )
    return *(_QWORD *)(v2 + 1104);
  v4 = *(_QWORD *)(*a1 + 1104LL);
  if ( *(_QWORD *)(v2 + 1104) && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(*(_QWORD *)(v2 + 1104), a2, v2) )
    return v5;
  if ( !v4 )
    return v4;
  if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(v4, a2, v2) )
  {
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 8) >= *(_DWORD *)(v4 + 8) && *(_DWORD *)(v5 + 12) >= *(_DWORD *)(v4 + 12) )
        return v4;
    }
    else if ( !*(_DWORD *)(v4 + 8) )
    {
      return v4;
    }
  }
  return v5;
}
