/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x1403614B0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     SeCreateClientSecurity @ 0x1408A6230 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1408A64C0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1408A6770 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 */

char __fastcall SepReconcileTrustSidWithProcessProtection(PSID Sid, unsigned __int8 *a2, _BYTE *a3, _QWORD *a4)
{
  unsigned int v4; // eax
  PSID v5; // r11
  PSID v6; // r10
  _BYTE *v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11

  v4 = *a2;
  *a3 = 0;
  v5 = Sid;
  *a4 = 0LL;
  if ( v4 != 98 )
  {
    v4 -= 18;
    switch ( v4 )
    {
      case 0u:
        v6 = (PSID)SeProcTrustAuthenticodeSid;
        goto LABEL_3;
      case 0x1Fu:
        v6 = (PSID)SeProcTrustLiteAntimalwareSid;
        goto LABEL_3;
      case 0x3Fu:
        v6 = (PSID)SeProcTrustLiteWinSid;
        goto LABEL_3;
      case 0x40u:
        v6 = (PSID)SeProcTrustWinSid;
        goto LABEL_3;
      case 0x4Fu:
        v6 = (PSID)SeProcTrustLiteWinTcbSid;
        goto LABEL_3;
      case 0x60u:
        break;
      case 0x6Fu:
        v6 = (PSID)SeProcTrustLiteAppSid;
        goto LABEL_3;
      default:
        goto LABEL_4;
    }
  }
  v6 = SeProcTrustWinTcbSid;
LABEL_3:
  if ( v6 )
  {
    LOBYTE(v4) = RtlIsValidProcessTrustLabelSid(v6);
    if ( !(_BYTE)v4 )
      goto LABEL_7;
  }
LABEL_4:
  if ( !v5 )
    return v4;
  LOBYTE(v4) = RtlIsValidProcessTrustLabelSid(v5);
  if ( !(_BYTE)v4 )
    goto LABEL_7;
  if ( v9 )
  {
    v4 = *(_DWORD *)(v10 + 8);
    if ( *(_DWORD *)(v9 + 8) < v4 || (v4 = *(_DWORD *)(v10 + 12), *(_DWORD *)(v9 + 12) < v4) )
    {
LABEL_7:
      *v7 = 1;
      *v8 = v9;
    }
  }
  else if ( *(_DWORD *)(v10 + 8) )
  {
    *v7 = 1;
    *v8 = 0LL;
  }
  return v4;
}
