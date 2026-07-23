/*
 * XREFs of SepSidFromProcessProtection @ 0x1403EB280
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x1403EB1F4 (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

PSID __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  PSID result; // rax

  result = 0LL;
  if ( *a1 == 98 )
    return SeProcTrustWinTcbSid;
  switch ( *a1 )
  {
    case 0x12:
      result = (PSID)SeProcTrustAuthenticodeSid;
      break;
    case 0x31:
      result = (PSID)SeProcTrustLiteAntimalwareSid;
      break;
    case 0x51:
      result = (PSID)SeProcTrustLiteWinSid;
      break;
    case 0x52:
      result = (PSID)SeProcTrustWinSid;
      break;
    case 0x61:
      result = (PSID)SeProcTrustLiteWinTcbSid;
      break;
    case 0x72:
      return SeProcTrustWinTcbSid;
    case 0x81:
      result = (PSID)SeProcTrustLiteAppSid;
      break;
    default:
      return result;
  }
  return result;
}
