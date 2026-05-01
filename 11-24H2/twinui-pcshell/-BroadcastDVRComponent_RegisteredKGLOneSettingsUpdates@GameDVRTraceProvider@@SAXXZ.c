/*
 * XREFs of ?BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x180062EA4
 * Callers:
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x180062D14 (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?Shell_BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x180062FF0 (-Shell_BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates(void)
{
  wchar_t pszDest[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(pszDest, "BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates");
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates();
}
