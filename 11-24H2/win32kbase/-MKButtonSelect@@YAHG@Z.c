/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1401F54B0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall MKButtonSelect(__int64 a1)
{
  *(_WORD *)(W32GetUserSessionState(a1) + 20662) = a1;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
