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

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, unsigned __int8 *a2, _BYTE *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  _QWORD *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11

  result = *a2;
  *a3 = 0;
  v5 = a1;
  *a4 = 0LL;
  if ( (_DWORD)result != 98 )
  {
    a2 = (unsigned __int8 *)0x140000000LL;
    result = (int)result - 18;
    switch ( (int)result )
    {
      case 0:
        v6 = SeProcTrustAuthenticodeSid;
        goto LABEL_3;
      case 31:
        v6 = SeProcTrustLiteAntimalwareSid;
        goto LABEL_3;
      case 63:
        v6 = SeProcTrustLiteWinSid;
        goto LABEL_3;
      case 64:
        v6 = SeProcTrustWinSid;
        goto LABEL_3;
      case 79:
        v6 = SeProcTrustLiteWinTcbSid;
        goto LABEL_3;
      case 96:
        break;
      case 111:
        v6 = SeProcTrustLiteAppSid;
        goto LABEL_3;
      default:
        goto LABEL_4;
    }
  }
  v6 = SeProcTrustWinTcbSid;
LABEL_3:
  if ( v6 )
  {
    result = RtlIsValidProcessTrustLabelSid(v6, a2, a3);
    if ( !(_BYTE)result )
      goto LABEL_7;
  }
LABEL_4:
  if ( v5 )
  {
    result = RtlIsValidProcessTrustLabelSid(v5, a2, a3);
    if ( (_BYTE)result )
    {
      if ( !v8 )
      {
        if ( *(_DWORD *)(v9 + 8) )
        {
          *a3 = 1;
          *v7 = 0LL;
        }
        return result;
      }
      result = *(unsigned int *)(v9 + 8);
      if ( *(_DWORD *)(v8 + 8) >= (unsigned int)result )
      {
        result = *(unsigned int *)(v9 + 12);
        if ( *(_DWORD *)(v8 + 12) >= (unsigned int)result )
          return result;
      }
    }
LABEL_7:
    *a3 = 1;
    *v7 = v8;
  }
  return result;
}
