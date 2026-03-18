/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x14019F990
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A22EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5610 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB230 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void xxxTurnOffStickyKeys(void)
{
  unsigned int v0; // ebx
  __int64 (__fastcall **v1)(struct tagKE *, unsigned int, int); // rax
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  v0 = 0;
  v1 = off_140246C80;
  while ( v0 < 5 )
  {
    ++v0;
    if ( *v1 == xxxStickyKeys )
    {
      UserSessionState = W32GetUserSessionState(xxxStickyKeys);
      xxxUpdateModifierState(*(unsigned __int8 *)(UserSessionState + 21901), v0);
      *(_BYTE *)(W32GetUserSessionState(v3) + 21905) = 0;
      *(_BYTE *)(W32GetUserSessionState(v4) + 21906) = 0;
      v6 = W32GetUserSessionState(v5);
      *(_DWORD *)(v6 + 20628) &= ~1u;
      ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      return;
    }
    ++v1;
  }
}
