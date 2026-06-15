/*
 * XREFs of WPP_SF_ @ 0x1800C0208
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180008BD8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000BDD8 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180020D60 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026930 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180044E30 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180047340 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1800697D0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18006F710 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18006FC90 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180077AA0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x180086C90 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x180086DD0 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ @ 0x180087380 (-NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009C858 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800BF408 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C1270 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800C5C9C (--1CAudioSessionManager@@QEAA@XZ.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800CDFF0 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800CF5A4 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x1800CF7F0 (-ServiceStart@CAudioSrv@@UEAAXXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800CF898 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800D092C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x1800FE3BC (-BuildSecurityDescriptor@@YAPEAXKK@Z.c)
 *     ?InitializePnpInfo@@YAHXZ @ 0x1800FE974 (-InitializePnpInfo@@YAHXZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x1800FEDC0 (-MME_ServiceStart@@YAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800FEEB0 (-MME_ServiceStop@@YAXXZ.c)
 *     ?InitializeAPOs_old@CMuteSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1801020D0 (-InitializeAPOs_old@CMuteSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeAPOs_old@CVolumeSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180113D74 (-InitializeAPOs_old@CVolumeSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@UEAAXXZ @ 0x180116210 (-ProviderFinalRelease@CVolumeStrip@@UEAAXXZ.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x180117C50 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011952C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180119C08 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18011A2AC (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18011A978 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x18011AF00 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18011B5B0 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18011B8D0 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011C790 (-DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x18011CAC0 (-MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x18011CCE0 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18011D134 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnSessionDisconnected@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x18011D440 (-OnSessionDisconnected@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18011D984 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for WPP_SF_ @ 0x1800C0208
 * Reason: Hex-Rays returned no pseudocode for 0x1800C0208
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800C0208: sub     rsp, 38h
 * 00000001800C020C: and     [rsp+38h+var_18], 0
 * 00000001800C0212: movzx   r9d, dx
 * 00000001800C0216: mov     edx, 2Bh ; '+'
 * 00000001800C021B: call    cs:__imp_EtwTraceMessage
 * 00000001800C0222: nop     dword ptr [rax+rax+00h]
 * 00000001800C0227: add     rsp, 38h
 * 00000001800C022B: retn
 */
