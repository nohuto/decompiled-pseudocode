/*
 * XREFs of ?BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x180315C8C
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x180059574 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Shell_BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x18031958C (-Shell_BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_ActivateForKGLUpdate_Queueing(void)
{
  wchar_t pszDest[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(pszDest, "BroadcastDVRComponent_ActivateForKGLUpdate_Queueing");
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_ActivateForKGLUpdate_Queueing();
}
