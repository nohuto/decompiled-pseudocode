/*
 * XREFs of WPP_SF_S @ 0x1800C033C
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800097F0 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18000A330 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18000BA10 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000BDD8 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000C300 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180012D30 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180014EE0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001CAB0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001F190 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180020800 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180020B2C (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180034344 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180044E30 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180047510 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800477F0 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x18004D5B0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x18004E700 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180054D50 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?MME_AudioInterfaceRemove@@YAJPEBG@Z @ 0x180059CE0 (-MME_AudioInterfaceRemove@@YAJPEBG@Z.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18005BCC0 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180061DB0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800625BC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x18006B120 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18006FC90 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x180074B30 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180085DC0 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     _lambda_9219152d4e141db21e4330029f5108f8_::operator() @ 0x1800C0C0C (_lambda_9219152d4e141db21e4330029f5108f8_--operator().c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C14B0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C1770 (-GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C1AC0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800C21BC (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ?PropertyStoreCommit@CAudioSession@@UEAAJXZ @ 0x1800C2560 (-PropertyStoreCommit@CAudioSession@@UEAAJXZ.c)
 *     ?PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x1800C25C0 (-PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z.c)
 *     ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x1800C2640 (-PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800C3930 (-GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800C3AE0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C3ED0 (-SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800CC0C0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800CE970 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800CF5A4 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800CF898 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800EE200 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x1800EE2C0 (-LogOutput@@YAXPEBGZZ.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x1800FEF38 (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 *     ?LoadMuteState_old@CMuteSoftware@@AEAAJXZ @ 0x180102400 (-LoadMuteState_old@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x180102904 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011892C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18011AA80 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x18011AD10 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+38h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp-8h]

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
  return EtwTraceMessage(a1, 43LL, a3, a2, a4, v5, 0LL, v7, v8);
}
