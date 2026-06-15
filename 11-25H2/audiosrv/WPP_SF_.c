/*
 * XREFs of WPP_SF_ @ 0x1800C1670
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180009FC0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     AudioServerGetAudioSession @ 0x180011E60 (AudioServerGetAudioSession.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18001C240 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AE58 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18002EAD8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180050AE0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180053200 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18007ACB0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18007C2C0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ @ 0x18007DEC0 (-NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x18007F450 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800813B0 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180081E00 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800823D0 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180082C20 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180089300 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009FF94 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800C06D8 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C2C30 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800C6838 (--1CAudioSessionManager@@QEAA@XZ.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800CD480 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800CE4C0 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x1800CE700 (-ServiceStart@CAudioSrv@@UEAAXXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800CE7A8 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800CF034 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800CF868 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x1800FB0B0 (-BuildSecurityDescriptor@@YAPEAXKK@Z.c)
 *     ?InitializePnpInfo@@YAHXZ @ 0x1800FB668 (-InitializePnpInfo@@YAHXZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x1800FBAB4 (-MME_ServiceStart@@YAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800FBBA4 (-MME_ServiceStop@@YAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@UEAAXXZ @ 0x18010E670 (-ProviderFinalRelease@CVolumeStrip@@UEAAXXZ.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x18010FDA0 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180110388 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1801116CC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180111DA8 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18011244C (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x180112B18 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x1801130A0 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x1801135C4 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x180113750 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x180113A70 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180114950 (-DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x180114C80 (-MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180114EA0 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1801152F4 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnSessionDisconnected@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180115600 (-OnSessionDisconnected@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180115B44 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for WPP_SF_ @ 0x1800C1670
 * Reason: Hex-Rays returned no pseudocode for 0x1800C1670
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800C1670: sub     rsp, 38h
 * 00000001800C1674: and     [rsp+38h+var_18], 0
 * 00000001800C167A: movzx   r9d, dx
 * 00000001800C167E: mov     edx, 2Bh ; '+'
 * 00000001800C1683: call    cs:__imp_EtwTraceMessage
 * 00000001800C168A: nop     dword ptr [rax+rax+00h]
 * 00000001800C168F: add     rsp, 38h
 * 00000001800C1693: retn
 */
