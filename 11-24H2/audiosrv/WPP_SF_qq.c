/*
 * XREFs of WPP_SF_qq @ 0x1800A21B4
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180023938 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180026188 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x1800480E0 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1800697D0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180072C58 (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011952C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180119C08 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 *     ?OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18011A910 (-OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ??1CMonitor@@MEAA@XZ @ 0x18011C558 (--1CMonitor@@MEAA@XZ.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x18011CCE0 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va, 8LL, va1, 8LL, 0LL);
}
