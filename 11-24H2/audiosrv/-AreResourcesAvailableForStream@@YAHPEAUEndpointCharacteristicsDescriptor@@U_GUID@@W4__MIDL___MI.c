/*
 * XREFs of ?AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x18010C090
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x1800815EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x180058818 (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AreResourcesAvailableForStream(
        struct EndpointCharacteristicsDescriptor *a1,
        struct _GUID *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  int v9; // eax
  int AudioResourcePriority; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 56LL))(*(_QWORD *)a1);
  AudioResourcePriority = GetAudioResourcePriority(
                            (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(v9 != 0),
                            a4,
                            0,
                            a5);
  v12 = (__int128)*a2;
  return (*(__int64 (__fastcall **)(struct IAudioResourceManager *, struct EndpointCharacteristicsDescriptor *, __int128 *, _QWORD, int))(*(_QWORD *)g_AudioResourceManager + 56LL))(
           g_AudioResourceManager,
           a1,
           &v12,
           a3,
           AudioResourcePriority);
}
