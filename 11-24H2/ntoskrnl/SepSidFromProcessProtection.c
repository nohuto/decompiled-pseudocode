/*
 * XREFs of SepSidFromProcessProtection @ 0x14035EF60
 * Callers:
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SepSetTrustLevelForProcessToken @ 0x14035F43C (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 == 98 )
    return SeProcTrustWinTcbSid;
  switch ( *a1 )
  {
    case 0x12:
      result = SeProcTrustAuthenticodeSid;
      break;
    case 0x31:
      result = SeProcTrustLiteAntimalwareSid;
      break;
    case 0x51:
      result = SeProcTrustLiteWinSid;
      break;
    case 0x52:
      result = SeProcTrustWinSid;
      break;
    case 0x61:
      result = SeProcTrustLiteWinTcbSid;
      break;
    case 0x72:
      return SeProcTrustWinTcbSid;
    case 0x81:
      result = SeProcTrustLiteAppSid;
      break;
    default:
      return result;
  }
  return result;
}
