/*
 * XREFs of ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4
 * Callers:
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800A4374 (--1CSpatialProperties@@QEAA@XZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800EB4CC (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@Z @ 0x1800EBADC (--$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@Z @ 0x1800EBB78 (--$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800EBC30 (--$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@-$TokenManager@VCB.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800EC80C (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 *     ??1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ @ 0x1800EC8D4 (--1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ.c)
 *     ??1Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ @ 0x1800EC8FC (--1Token@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ.c)
 *     ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1800FC77C (-ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z.c)
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x1800FD5E0 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800FD900 (-clear@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180110028 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180110388 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x1801114DC (-HasMicrophoneAccess@@YAJPEA_N@Z.c)
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x1801168BC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 *     ?CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPEAU3@@Z @ 0x18012AE2C (-CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPE.c)
 *     wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator() @ 0x180143220 (wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_c.c)
 *     wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x1801432B0 (wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(en_ea_1801432B0.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$16 @ 0x1801645DB (_InitializeStreamAndModeDescriptors_--_1_--dtor$16.c)
 *     _CMulticastSessionManager::ActivateMulticastSession_::_1_::dtor$2 @ 0x180166364 (_CMulticastSessionManager--ActivateMulticastSession_--_1_--dtor$2.c)
 *     _wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator()_::_1_::dtor$0 @ 0x1801663C7 (_wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows--.c)
 *     _wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator()_::_1_::dtor$0 @ 0x1801663D9 (_wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$2 @ 0x180166417 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$2.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$9 @ 0x180167148 (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$9.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$7 @ 0x1801677F7 (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$7.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$7 @ 0x18016785A (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$7.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$8 @ 0x18016786C (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$8.c)
 *     _HasMicrophoneAccess_::_1_::dtor$2 @ 0x180167960 (_HasMicrophoneAccess_--_1_--dtor$2.c)
 *     _EffectPack::CheckForPreferredFormat_::_1_::dtor$0 @ 0x180168214 (_EffectPack--CheckForPreferredFormat_--_1_--dtor$0.c)
 *     _dynamic_atexit_destructor_for__g_MulticastSessionManager__ @ 0x180169D50 (_dynamic_atexit_destructor_for__g_MulticastSessionManager__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
