/*
 * XREFs of ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A07F8
 * Callers:
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800A07A8 (--1CSpatialProperties@@QEAA@XZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BD114 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F047C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@Z @ 0x1800F0A8C (--$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@Z @ 0x1800F0B34 (--$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F0BEC (--$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@-$TokenManager@VCB.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F181C (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 *     ??1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ @ 0x1800F1904 (--1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ.c)
 *     ??1Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ @ 0x1800F192C (--1Token@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ.c)
 *     ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1800FFB6C (-ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z.c)
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FFE04 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x180100A10 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180100C80 (-clear@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180117ED8 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x18011933C (-HasMicrophoneAccess@@YAJPEA_N@Z.c)
 *     ?CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPEAU3@@Z @ 0x180132F4C (-CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPE.c)
 *     wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator() @ 0x18014BC90 (wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_c.c)
 *     wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x18014BD20 (wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(en_ea_18014BD20.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$16 @ 0x18016DAAF (_InitializeStreamAndModeDescriptors_--_1_--dtor$16.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$21 @ 0x18016DAE5 (_InitializeStreamAndModeDescriptors_--_1_--dtor$21.c)
 *     _CMulticastSessionManager::GetCompatibleMulticastProvider_::_1_::dtor$3 @ 0x18016F9DC (_CMulticastSessionManager--GetCompatibleMulticastProvider_--_1_--dtor$3.c)
 *     _wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator()_::_1_::dtor$0 @ 0x18016FA3F (_wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$2 @ 0x18016FA67 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$2.c)
 *     _CMonitorManager::CreateStreamConnection_::_1_::dtor$2 @ 0x180170D87 (_CMonitorManager--CreateStreamConnection_--_1_--dtor$2.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$7 @ 0x180170DEA (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$7.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$8 @ 0x180170DFC (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$8.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$9 @ 0x180170E0E (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$9.c)
 *     _HasMicrophoneAccess_::_1_::dtor$2 @ 0x180170EF0 (_HasMicrophoneAccess_--_1_--dtor$2.c)
 *     _EffectPack::CheckForPreferredFormat_::_1_::dtor$0 @ 0x18017182F (_EffectPack--CheckForPreferredFormat_--_1_--dtor$0.c)
 *     _wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator()_::_1_::dtor$0 @ 0x18017226F (_wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows--.c)
 *     _dynamic_atexit_destructor_for__g_MulticastSessionManager__ @ 0x180173600 (_dynamic_atexit_destructor_for__g_MulticastSessionManager__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
