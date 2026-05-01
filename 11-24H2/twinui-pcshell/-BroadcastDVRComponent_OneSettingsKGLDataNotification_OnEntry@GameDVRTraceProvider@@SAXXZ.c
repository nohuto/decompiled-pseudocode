/*
 * XREFs of ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1802237E4
 * Callers:
 *     ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x1802237C0 (-StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1802CE5A0 (-Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry(void)
{
  wchar_t pszDest[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(pszDest, "BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry");
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry();
}
