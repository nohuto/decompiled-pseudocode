/*
 * XREFs of SepLocateTokenTrustLevel @ 0x1403E3620
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     SepAdjustAccessStateForConstraints @ 0x14090B020 (SepAdjustAccessStateForConstraints.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140994420 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14099A7A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403E3C50 (RtlIsValidProcessTrustLabelSid.c)
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
