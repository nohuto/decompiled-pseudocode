/*
 * XREFs of ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180062390
 * Callers:
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18004BD6C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x1800622D0 (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18007AC9C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     AudioServerIsOffloadCapable @ 0x180084BF0 (AudioServerIsOffloadCapable.c)
 *     ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800C9E5C (-SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z.c)
 *     ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800D82A8 (-TryGetResourceManager@BluetoothControls@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x1800FB41C (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 *     ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1800FFB6C (-ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180107108 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     s_epmSetCurrentEffectPackForEndpoint @ 0x180109170 (s_epmSetCurrentEffectPackForEndpoint.c)
 *     AudioServerGetBufferSizeLimits @ 0x18010FD60 (AudioServerGetBufferSizeLimits.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetEndpointCharacteristics(
        const unsigned __int16 *a1,
        unsigned int a2,
        struct CEndpointCharacteristics **a3)
{
  return (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           a2,
           0LL,
           a3);
}
