/*
 * XREFs of ??1?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@QEAA@XZ @ 0x18009BB48
 * Callers:
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x18009BA9C (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800CA4C4 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800D27BC (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D72CC (-RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIC.c)
 *     ?RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800E7250 (-RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1801176F8 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18011A2AC (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x18014CD80 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1801518D4 (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1801521A4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _CAudioStream::SetUpAudioEffectsWatcher_::_1_::dtor$0 @ 0x18016E1C3 (_CAudioStream--SetUpAudioEffectsWatcher_--_1_--dtor$0.c)
 *     _BluetoothControls::BluetoothVolumeAndMute::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18016E4B6 (_BluetoothControls--BluetoothVolumeAndMute--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _AtmosCheck::PerformLicenseCheckHelperLegacy_::_1_::dtor$0 @ 0x18017253F (_AtmosCheck--PerformLicenseCheckHelperLegacy_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>::~function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
