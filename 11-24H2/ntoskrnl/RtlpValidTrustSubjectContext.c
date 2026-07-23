/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x1403E334C
 * Callers:
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140856BA0 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403E3C50 (RtlIsValidProcessTrustLabelSid.c)
 */

char __fastcall RtlpValidTrustSubjectContext(void *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // r8
  void *v5; // r10
  __int64 v7; // r10
  __int64 v8; // r11

  v4 = 0;
  if ( !a1 || !RtlIsValidProcessTrustLabelSid(a1) )
    goto LABEL_3;
  if ( !v5 )
    goto LABEL_5;
  if ( RtlIsValidProcessTrustLabelSid(v5) )
  {
    if ( *(_DWORD *)(v8 + 8) < *(_DWORD *)(v7 + 8) || *(_DWORD *)(v8 + 12) < *(_DWORD *)(v7 + 12) )
    {
LABEL_6:
      *a4 = 0;
      if ( v4 )
        return v4;
      goto LABEL_3;
    }
LABEL_5:
    v4 = 1;
    goto LABEL_6;
  }
LABEL_3:
  *a4 = -1073741790;
  return v4;
}
