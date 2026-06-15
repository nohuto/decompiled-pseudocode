/*
 * XREFs of ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x1800226F4
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VAudioModeEffectsWatcher@@UIAudioModeEffectsWatcher@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioModeEffectsWatcher@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAU_GUID@@@Z @ 0x1800229A0 (--$MakeAndInitialize@VAudioModeEffectsWatcher@@UIAudioModeEffectsWatcher@@AEAPEAUEndpointCharact.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?push_front@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18009FA30 (-push_front@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@s.c)
 *     std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_a405cf70824d0724669728a8122b89b2___ @ 0x1800A537C (std--forward_list_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef____ea_1800A537C.c)
 *     ??$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRef@01@@Z @ 0x1800B4044 (--$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRe.c)
 *     _lambda_2a34e4181bb0fe573315be9c90b0dac4_::operator() @ 0x1800B5AF4 (_lambda_2a34e4181bb0fe573315be9c90b0dac4_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall AudioModeEffectsWatcherFactory::GetWatcher(
        AudioModeEffectsWatcherFactory *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct _GUID *a3,
        struct IAudioModeEffectsWatcher **a4)
{
  int EndpointStore; // eax
  unsigned int v7; // edi
  const char *v8; // r9
  __int64 result; // rax
  struct CEndpointStore *v10; // r14
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  _QWORD *v12; // rdi
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-48h] BYREF
  struct CEndpointStore *v25; // [rsp+40h] [rbp-38h] BYREF
  AudioModeEffectsWatcherFactory *v26; // [rsp+48h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v27[2]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v26 = this;
  *(_QWORD *)&a3->Data1 = 0LL;
  v25 = 0LL;
  try
  {
    EndpointStore = CEndpointStoreCache::GetEndpointStore(
                      this,
                      *(const unsigned __int16 **)(*(_QWORD *)this + 48LL),
                      &v25);
    v7 = EndpointStore;
    if ( EndpointStore >= 0 )
    {
      v10 = v25;
      v11 = (struct _RTL_CRITICAL_SECTION *)((char *)v25 + 208);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v25 + 208));
      v27[0] = v11;
      v12 = (_QWORD *)((char *)v10 + 248);
      std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_a405cf70824d0724669728a8122b89b2___((char *)v10 + 248);
      v23 = 0LL;
      v24[0] = a2;
      v24[1] = &v23;
      while ( 1 )
      {
        v12 = (_QWORD *)*v12;
        if ( !v12 )
          break;
        v20 = v12[1];
        v22 = v20;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        if ( (unsigned __int8)lambda_2a34e4181bb0fe573315be9c90b0dac4_::operator()(v24, &v22) )
          goto LABEL_16;
      }
      v24[0] = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v24);
      v13 = Microsoft::WRL::Details::MakeAndInitialize<AudioModeEffectsWatcher,IAudioModeEffectsWatcher,EndpointCharacteristicsDescriptor * &,_GUID &>(
              v24,
              &v26,
              a2);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v27);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v25);
        return v14;
      }
      v22 = 0LL;
      v26 = (AudioModeEffectsWatcherFactory *)&v22;
      v15 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v26);
      v16 = Microsoft::WRL::AsWeak<IAudioModeEffectsWatcher>(v24[0], v15);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAE,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v27);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v25);
        return v17;
      }
      std::forward_list<Microsoft::WRL::WeakRef>::push_front((char *)v10 + 248, &v22);
      v18 = v24[0];
      v24[0] = 0LL;
      v19 = v23;
      v23 = v18;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v24);
LABEL_16:
      v21 = v23;
      if ( v23 )
      {
        *(_QWORD *)&a3->Data1 = v23;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        v21 = v23;
      }
      else
      {
        *(_QWORD *)&a3->Data1 = 0LL;
      }
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v11 )
        LeaveCriticalSection(v11);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v25);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
        (const char *)(unsigned int)EndpointStore);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v25);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB6,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
                           v8);
  }
  return result;
}
