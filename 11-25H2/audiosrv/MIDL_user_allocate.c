/*
 * XREFs of MIDL_user_allocate @ 0x180042530
 * Callers:
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180009A60 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     PolicyConfigGetDeviceFormat @ 0x180012310 (PolicyConfigGetDeviceFormat.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180041AC0 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     s_sndevtResolveSoundAlias @ 0x180041BD0 (s_sndevtResolveSoundAlias.c)
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180042244 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 *     asm_GetApplicationSubmixes @ 0x1800477E0 (asm_GetApplicationSubmixes.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180077FC0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007E724 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     AudioServerGetMixFormat @ 0x18008D5F0 (AudioServerGetMixFormat.c)
 *     ?SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800E28D0 (-SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0.c)
 *     ?SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800E2A60 (-SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@U_Mul.c)
 *     ?SerializeCompatibleChildEndpointsForRpc@DummyBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800F7F30 (-SerializeCompatibleChildEndpointsForRpc@DummyBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@PE.c)
 *     ?SerializeMulticastSessionsForRpc@DummyBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800F80C0 (-SerializeMulticastSessionsForRpc@DummyBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@U_Multica.c)
 *     ?GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800FD00C (-GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_GUID@@U-$functio.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x180101C60 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x180102060 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetMixFormat @ 0x180102290 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetAudioStreamInfo @ 0x180109290 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
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
