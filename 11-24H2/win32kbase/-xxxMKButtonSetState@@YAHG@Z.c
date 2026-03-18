/*
 * XREFs of ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F5A40
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1401F59D0 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F5EB0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     MouseButtonAction @ 0x140213040 (MouseButtonAction.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall xxxMKButtonSetState(__int64 a1)
{
  __int16 v1; // bx
  BOOL v2; // esi
  __int64 UserSessionState; // rdi
  __int16 v4; // ax
  __int16 v5; // bx

  v1 = a1;
  v2 = (_WORD)a1 != 0;
  UserSessionState = W32GetUserSessionState(a1);
  v4 = *(_WORD *)(UserSessionState + 20660);
  if ( v1 )
    v5 = v4 & ~*(_WORD *)(UserSessionState + 20662);
  else
    v5 = *(_WORD *)(UserSessionState + 20662) | v4;
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v4) & 1) != 0 )
    MouseButtonAction(1LL, v2);
  if ( ((*(_BYTE *)(UserSessionState + 20660) ^ (unsigned __int8)v5) & 2) != 0 )
    MouseButtonAction(2LL, v2);
  *(_WORD *)(UserSessionState + 20660) = v5;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
