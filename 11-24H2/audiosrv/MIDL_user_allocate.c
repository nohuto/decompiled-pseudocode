/*
 * XREFs of MIDL_user_allocate @ 0x18003F650
 * Callers:
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001CAB0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001F190 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18003F250 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x18003F360 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18006C574 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     asm_GetApplicationSubmixes @ 0x180076160 (asm_GetApplicationSubmixes.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x18007CBC0 (s_rtgGetDefaultAudioEndpoint.c)
 *     PolicyConfigGetDeviceFormat @ 0x18007ED80 (PolicyConfigGetDeviceFormat.c)
 *     s_sndevtResolveSoundAlias @ 0x18007F820 (s_sndevtResolveSoundAlias.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     ?SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800E7330 (-SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0.c)
 *     ?SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800E74C0 (-SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@U_Mul.c)
 *     ?GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180100474 (-GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_GUID@@U-$functio.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x180107430 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x180107820 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetMixFormat @ 0x180107B80 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetAudioStreamInfo @ 0x18010FB30 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size > 0x40000 )
    return 0LL;
  else
    return operator new[](size, (const struct std::nothrow_t *)&std::nothrow);
}
