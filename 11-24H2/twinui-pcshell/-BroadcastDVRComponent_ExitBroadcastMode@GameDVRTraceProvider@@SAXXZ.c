/*
 * XREFs of ?BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802AAAAC
 * Callers:
 *     ?ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ @ 0x18023AD40 (-ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?Shell_BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802AAB04 (-Shell_BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_ExitBroadcastMode(void)
{
  wchar_t pszDest[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(pszDest, "BroadcastDVRComponent_ExitBroadcastMode");
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_ExitBroadcastMode();
}
