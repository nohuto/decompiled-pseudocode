/*
 * XREFs of ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28
 * Callers:
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18000AA20 (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180012EB4 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001DE30 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@@Z @ 0x18001FA68 (-RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_G.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800580B0 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x180059270 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18006723C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ @ 0x180075DEC (-OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ.c)
 *     ?OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupProxy@@@Z @ 0x18007E560 (-OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupPro.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800881EC (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x18008829C (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008BB8C (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BC790 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BF3B0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800CAC64 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     _lambda_85ba0ca61e3c2b77a785476ced47f678_::operator() @ 0x1800D37D4 (_lambda_85ba0ca61e3c2b77a785476ced47f678_--operator().c)
 *     ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUSaDeviceParams@@@Z @ 0x1800D9620 (-OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUSaDeviceParams@@@Z.c)
 *     ?OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800D9700 (-OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamSta.c)
 *     wistd::__function::__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState_const_&)_::operator() @ 0x1800E0560 (wistd--__function--__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft-.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800E1AA0 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800E1BD0 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800F0658 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800F2BD4 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F2D80 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800F7790 (-OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800F78C0 (-OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800F8CB0 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x1800F90A4 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 *     ?ScanForMulticastSessions@CMulticastSessionManager@@UEAAJXZ @ 0x1800FD780 (-ScanForMulticastSessions@CMulticastSessionManager@@UEAAJXZ.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800FE570 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010499C (-OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x1801058A0 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 *     ?OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z @ 0x180106C80 (-OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x18010DC40 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *GetSerialWorkQueue(void)
{
  return (struct CSerialWorkQueue *)(*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
}
