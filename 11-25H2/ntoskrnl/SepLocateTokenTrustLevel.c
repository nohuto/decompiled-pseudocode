/*
 * XREFs of SepLocateTokenTrustLevel @ 0x14035FEB0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x1408F6170 (SepAdjustAccessStateForConstraints.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1409A7210 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1409C2F30 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
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
