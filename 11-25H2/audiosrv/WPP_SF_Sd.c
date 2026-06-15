/*
 * XREFs of WPP_SF_Sd @ 0x1800C4424
 * Callers:
 *     ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x180026414 (-StateCheckExpired@CAudioSession@@AEAA-AW4StateCheckExpirationResult@1@XZ.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AE58 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x1800698D4 (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 *     ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x18006F190 (-GetMute@CAudioSession@@UEAAJPEAH@Z.c)
 *     ?GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x18007C560 (-GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x18007EE50 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180085DD0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x180087120 (-GetChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800FDF50 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Sd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4, v5, va, 4LL, 0LL);
}
