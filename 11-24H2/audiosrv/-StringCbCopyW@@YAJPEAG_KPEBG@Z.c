/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180020AB0
 * Callers:
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001CAB0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001F190 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180020800 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180020B2C (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18003F250 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18006C574 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180073A50 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x18007CBC0 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180087430 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800C3AE0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800C3C70 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800C9770 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010ACD4 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     _lambda_9f1167a5534bf7cb01feca28c1508be7_::operator() @ 0x180131F34 (_lambda_9f1167a5534bf7cb01feca28c1508be7_--operator().c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x18014DA80 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( v3 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v7 = (unsigned __int16 *)a1;
    *v7 = 0;
    result = 2147942522LL;
    if ( v3 )
      return 0LL;
  }
  return result;
}
