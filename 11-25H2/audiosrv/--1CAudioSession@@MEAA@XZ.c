/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x18001E4B0
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002D25C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800A371C (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800C29A0 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800181E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x18001E730 (--1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAA@XZ @ 0x18001E764 (--1-$unique_ptr@$$BY0A@MU-$default_delete@$$BY0A@M@std@@@std@@QEAA@XZ.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E7A0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18001E7D0 (-clear@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@.c)
 *     ??1?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAA@XZ @ 0x18001E81C (--1-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAA@XZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18001E848 (-clear@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180025F28 (-_Tidy@-$vector@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800263DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x1800530FC (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 */

void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IInspectable'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  *((_QWORD *)this + 1) = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v3 = (_QWORD *)((char *)this + 112);
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::clear((char *)this + 112);
  if ( v2 )
    LeaveCriticalSection(v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v4 = (_QWORD *)((char *)this + 176);
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::clear((char *)this + 176);
  if ( this != (CAudioSession *)-136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 912);
  std::unique_ptr<float [0]>::~unique_ptr<float [0]>((char *)this + 896);
  AudioSrvVolumeTelemetrySessionVolume::~AudioSrvVolumeTelemetrySessionVolume((CAudioSession *)((char *)this + 792));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Tidy((char *)this + 704);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSession *)((char *)this + 584));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
  v6 = *((_QWORD *)this + 67);
  if ( v6 )
    std::default_delete<_RecurringTask>::operator()(v5, v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::~CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>((char *)this + 432);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 52);
  std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::clear((char *)this + 400);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 7);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 256);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 248);
  if ( *v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
      *v4,
      *((_QWORD *)this + 23));
    std::_Deallocate<16,0>(*v4, (*((_QWORD *)this + 24) - *((_QWORD *)this + 22)) & 0xFFFFFFFFFFFFFFF8uLL);
    *v4 = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  if ( *v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
      *v3,
      *((_QWORD *)this + 15));
    std::_Deallocate<16,0>(*v3, (*((_QWORD *)this + 16) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL);
    *v3 = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  DeleteCriticalSection(v2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>(this);
}
