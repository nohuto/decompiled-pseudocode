/*
 * XREFs of ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x180100854
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x180102610 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800020BC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180058518 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180100974 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::DisconnectAllRenderEndpoints(void)
{
  _DWORD *v0; // rcx
  int v1; // ecx
  unsigned int i; // edi
  __int64 v3; // rax
  int v4; // ebx
  unsigned __int16 **v5; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp-10h]
  unsigned int v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF
  unsigned __int16 *v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v11; // [rsp+88h] [rbp+38h] BYREF

  v9 = 0LL;
  v8 = 0;
  v0 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v0 > 4u && tlgKeywordOn((__int64)v0, 512LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v1,
      (int)&unk_1801A27F9);
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
         g_DeviceEnumerator,
         0LL,
         1LL,
         &v9) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v8) >= 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v11 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v9 + 32LL))(v9, i, &v11) >= 0 )
      {
        v10 = 0LL;
        v3 = *v11;
        v5 = &v10;
        v6 = 0LL;
        v7 = 1;
        v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 40))(v11, &v6);
        wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>((void ***)&v5);
        if ( v4 >= 0 )
          CPolicyConfig::DisconnectHelper(v10);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v10);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
}
