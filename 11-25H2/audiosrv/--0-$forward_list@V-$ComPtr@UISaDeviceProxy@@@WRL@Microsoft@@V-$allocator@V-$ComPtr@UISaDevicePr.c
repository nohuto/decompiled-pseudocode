/*
 * XREFs of ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180021710
 * Callers:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18002141C (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002C618 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CEndpointStore@@QEAA@XZ @ 0x18007A540 (--0CEndpointStore@@QEAA@XZ.c)
 *     ??0CEndpointStoreCache@@QEAA@XZ @ 0x1800A3ED8 (--0CEndpointStoreCache@@QEAA@XZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800A70FC (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0CAudioRenderEndpointChangeDelegator@@QEAA@XZ @ 0x1800B7148 (--0CAudioRenderEndpointChangeDelegator@@QEAA@XZ.c)
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800D51F8 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800DA3F0 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800DA5C8 (-ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDisp.c)
 *     ??$Make@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@12@XZ @ 0x1800EBCF0 (--$Make@VToken@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@$$V@Details@WRL.c)
 *     ??$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800EBEC0 (--$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microso.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800F9F7C (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 * Callees:
 *     <none>
 */

void __fastcall std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        _QWORD *a1)
{
  *a1 = 0LL;
}
