/*
 * XREFs of ??1CExclusiveModeListener@@UEAA@XZ @ 0x180143174
 * Callers:
 *     ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x180132280 (--_GCExclusiveModeListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C1648 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x18011C2D4 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180132154 (--1-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CBU_GU.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18014459C (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 */

void __fastcall CExclusiveModeListener::~CExclusiveModeListener(CExclusiveModeListener *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx

  *(_QWORD *)this = &CExclusiveModeListener::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IMixedRealitySpatialAudioFormatPolicyChange,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  CExclusiveModeListener::Shutdown(this);
  v3 = (wil::details *)*((_QWORD *)this + 46);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 45);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v2);
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 184));
  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::~_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>((char **)this + 20);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>((__int64)this);
}
