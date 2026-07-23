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

_DWORD *__fastcall SepLocateTokenTrustLevel(_QWORD *a1)
{
  __int64 v1; // r8
  _DWORD *v3; // r10
  __int64 v4; // r11

  v1 = a1[2];
  if ( !*a1 )
    return *(_DWORD **)(v1 + 1104);
  v3 = *(_DWORD **)(*a1 + 1104LL);
  if ( *(_QWORD *)(v1 + 1104) && !RtlIsValidProcessTrustLabelSid(*(PSID *)(v1 + 1104)) )
    return (_DWORD *)v4;
  if ( !v3 )
    return v3;
  if ( RtlIsValidProcessTrustLabelSid(v3) )
  {
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) >= v3[2] && *(_DWORD *)(v4 + 12) >= v3[3] )
        return v3;
    }
    else if ( !v3[2] )
    {
      return v3;
    }
  }
  return (_DWORD *)v4;
}
