/*
 * XREFs of WPP_SF_qdg @ 0x180086310
 * Callers:
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18001BB80 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180051CB0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180055F00 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006937C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x180076DC0 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800784A4 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1801078E0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18010C4C0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdg(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va, 8LL, (__int64 *)va1, 4LL, va2, 8LL, 0LL);
}
