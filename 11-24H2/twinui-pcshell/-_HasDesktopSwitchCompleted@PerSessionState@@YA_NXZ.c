/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802D11C4
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180219870 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     PerSessionState::_CreateSessionKey @ 0x1801E5DE4 (PerSessionState--_CreateSessionKey.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x1801FE790 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x18020EE7C (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx

  result = byte_1808CBA85;
  if ( !byte_1808CBA85 )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
LABEL_3:
      result = 1;
      byte_1808CBA85 = 1;
      return result;
    }
    if ( PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
    {
      PerSessionState::_CreateSessionKey();
      goto LABEL_3;
    }
    return byte_1808CBA85;
  }
  return result;
}
