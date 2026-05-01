/*
 * XREFs of ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18004CA18
 * Callers:
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1800C702C (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803D70D8 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C6B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAA.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18004C97C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18004D2BC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18004D5DC (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x180064928 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1802A0D30 (--1-$_Tree@V-$_Tmap_traits@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(
        TwinUI::Lighting::AssistantLightManager *this,
        void *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  struct wil::details::IFunctorHost *v5; // r8
  void *v6; // rdx
  void *v7; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v10; // [rsp+48h] [rbp-38h]
  void **v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h] BYREF
  int v13; // [rsp+64h] [rbp-1Ch]
  _QWORD *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v17; // [rsp+90h] [rbp+10h] BYREF

  wil::details::SetEvent(*((wil::details **)this + 8), a2);
  if ( *((_QWORD *)this + 7) )
    _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
      (char *)this + 56,
      0xFFFFFFFFLL);
  v17 = this;
  v9[0] = retaddr;
  v9[1] = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v9[2] = 0LL;
  v10 = 53;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  v8[0] = &off_18070D830;
  v8[1] = &v17;
  v11 = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v12);
  v14 = v9;
  v15 = 16487091;
  wil::details::RunFunctor((wil::details *)v8, (struct wil::details::IFunctor *)&v11, v5);
  if ( v12 )
    *(_DWORD *)(v12 + 16) = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 8,
    v6);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 7,
    v7);
  std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::~_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>((char *)this + 40);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
