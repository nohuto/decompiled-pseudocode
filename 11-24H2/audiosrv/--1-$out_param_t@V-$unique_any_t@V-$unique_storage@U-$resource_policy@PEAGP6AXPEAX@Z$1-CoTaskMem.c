/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18001E6BC
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x18001E254 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@@Z @ 0x1800288E4 (-RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_G.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800B3C40 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800BEFD0 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@.c)
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@PEBG@Z @ 0x1800C9358 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEBG@Z @ 0x1800F48D0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAGPEA_N@Z @ 0x1800F6200 (-GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x180105DC4 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     _CVADServer::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18016855B (_CVADServer--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180169BBF (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CPolicyConfig::DisconnectAllRenderEndpoints_::_1_::dtor$3 @ 0x18016A2BE (_CPolicyConfig--DisconnectAllRenderEndpoints_--_1_--dtor$3.c)
 *     _AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18016D35A (_AudioEffectsWatcher--CMMNotificationDelegator--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$1 @ 0x18016DB7E (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$1.c)
 *     _CAudioStream::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18016E13B (_CAudioStream--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180053478 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800592FC (--0last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        void ***a1)
{
  void **v1; // rbx
  void **v2; // rsi
  void *v3; // rdi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = *a1;
    v2 = a1[1];
    v3 = **a1;
    if ( v3 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v4);
      CoTaskMemFree(v3);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v4);
    }
    *v1 = v2;
  }
}
