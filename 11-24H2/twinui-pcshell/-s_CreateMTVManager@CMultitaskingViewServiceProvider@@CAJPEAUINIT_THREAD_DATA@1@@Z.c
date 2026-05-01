/*
 * XREFs of ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180206870
 * Callers:
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x180206820 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800D334C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010E690 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUISnapAssistSwitchItemRelevanceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@PEAUIWindowTabExtension@Shell@UI@Internal@Windows@@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A6664 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall CMultitaskingViewServiceProvider::s_CreateMTVManager(
        struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 *v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  const struct _GUID *v25; // [rsp+C8h] [rbp-90h]
  struct IApplicationViewVisibilityDebouncedNotificationService *v26; // [rsp+D8h] [rbp-80h] BYREF
  struct IApplicationViewCollection *v27; // [rsp+E0h] [rbp-78h] BYREF
  struct IApplicationViewSwitcher *v28; // [rsp+E8h] [rbp-70h] BYREF
  struct ITabletModeController *v29; // [rsp+F0h] [rbp-68h] BYREF
  struct IVirtualDesktopPinnedApps *v30; // [rsp+F8h] [rbp-60h] BYREF
  struct IVirtualDesktopManagerInternal *v31; // [rsp+100h] [rbp-58h] BYREF
  struct IImmersiveAppCrusher *v32; // [rsp+108h] [rbp-50h] BYREF
  struct IVirtualDesktopNotificationService *v33; // [rsp+110h] [rbp-48h] BYREF
  struct IMultitaskingViewVisibilityServiceInternal *v34; // [rsp+118h] [rbp-40h] BYREF
  struct IMultitaskingViewGestureState *v35; // [rsp+120h] [rbp-38h] BYREF
  struct IImmersiveSettingsCache *v36; // [rsp+128h] [rbp-30h] BYREF
  struct ITabletModeViewManager *v37; // [rsp+130h] [rbp-28h] BYREF
  struct IShellTargetingContractManager *v38; // [rsp+138h] [rbp-20h] BYREF
  struct ISnapServiceProvider *v39; // [rsp+140h] [rbp-18h] BYREF
  struct IApplicationViewIconLoader *v40; // [rsp+148h] [rbp-10h] BYREF
  struct ITouchGestureSettings *v41; // [rsp+150h] [rbp-8h] BYREF
  struct IImmersiveMonitorManager *v42; // [rsp+158h] [rbp+0h] BYREF
  struct IImmersiveShellHookService *v43; // [rsp+160h] [rbp+8h] BYREF
  struct IInspectable *v44; // [rsp+168h] [rbp+10h] BYREF
  struct IInspectable *v45; // [rsp+170h] [rbp+18h] BYREF
  struct ISnapAssistSwitchItemRelevanceProvider *v46; // [rsp+178h] [rbp+20h] BYREF
  void *v47; // [rsp+180h] [rbp+28h] BYREF
  struct IMultitaskingViewServiceProvider *v48; // [rsp+188h] [rbp+30h] BYREF
  struct Windows::Internal::Shell::IRemoteSessionWindowManager *v49; // [rsp+190h] [rbp+38h] BYREF
  struct Windows::Internal::UI::Shell::IWindowTabExtension *v50[2]; // [rsp+198h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+58h]

  v48 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, (void **)&v48, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v27 = 0LL;
    v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v27);
    v5 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 8),
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (void **)v4,
           0);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v5);
LABEL_55:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
      goto LABEL_56;
    }
    v26 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v6 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 16),
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           (void **)&v26,
           0);
    v3 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v6);
LABEL_54:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      goto LABEL_55;
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    v7 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 24),
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           (void **)&v28,
           0);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x230,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v7);
LABEL_53:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
      goto LABEL_54;
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    CMarshaledInterface::_Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 32),
      &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
      (void **)&v31,
      0);
    v30 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    CMarshaledInterface::_Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 40),
      &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
      (void **)&v30,
      0);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    v8 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 48),
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (void **)&v29,
           0);
    v3 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x236,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v8);
LABEL_52:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      goto LABEL_53;
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    CMarshaledInterface::_Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 56),
      &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
      (void **)&v33,
      0);
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    v9 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 64),
           &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
           (void **)&v32,
           0);
    v3 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23A,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9);
LABEL_51:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
      goto LABEL_52;
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    v10 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 72),
            &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
            (void **)&v34,
            0);
    v3 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23C,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v10);
LABEL_50:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
      goto LABEL_51;
    }
    v35 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    v11 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 80),
            &GUID_4639c886_cffe_492c_915a_1e3f02d22434,
            (void **)&v35,
            0);
    v3 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v11);
LABEL_49:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
      goto LABEL_50;
    }
    v36 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    v12 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 88),
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            (void **)&v36,
            0);
    v3 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x240,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12);
LABEL_48:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
      goto LABEL_49;
    }
    v37 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
    v13 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 96),
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            (void **)&v37,
            0);
    v3 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x242,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v13);
LABEL_47:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
      goto LABEL_48;
    }
    v38 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    v14 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 104),
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            (void **)&v38,
            0);
    v3 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x244,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
LABEL_46:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      goto LABEL_47;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
    v15 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 112),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            (void **)&v39,
            0);
    v3 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x246,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v15);
LABEL_45:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
      goto LABEL_46;
    }
    v46 = 0LL;
    v40 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
    v16 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 128),
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            (void **)&v40,
            0);
    v3 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v16);
LABEL_44:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
      goto LABEL_45;
    }
    v42 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v42);
    v17 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 152),
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            (void **)&v42,
            0);
    v3 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24F,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v17);
LABEL_43:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v42);
      goto LABEL_44;
    }
    v45 = 0LL;
    v44 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
      1u,
      v18,
      v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
    CMarshaledInterface::_Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 136),
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      (void **)&v45,
      0);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
    CMarshaledInterface::_Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 144),
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      (void **)&v44,
      0);
    v41 = 0LL;
    if ( *((_QWORD *)this + 20) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
      if ( (int)CMarshaledInterface::_Unmarshal(
                  (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 160),
                  &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0,
                  (void **)&v41,
                  0) < 0 )
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
    }
    v43 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v43);
    v20 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 168),
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            (void **)&v43,
            0);
    v3 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x263,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v20);
LABEL_42:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v43);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
      goto LABEL_43;
    }
    v50[0] = 0LL;
    CMarshaledInterface::_Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 176),
      &GUID_0e84cceb_709b_52d2_a663_ec5130862a9b,
      (void **)v50,
      0);
    v49 = 0LL;
    v21 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 184),
            &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
            (void **)&v49,
            0);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x269,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v21);
    v47 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
    v22 = CMultitaskingViewManager_CreateInstance(
            v48,
            v27,
            v26,
            v28,
            v31,
            v30,
            v29,
            v33,
            v32,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v46,
            v40,
            v45,
            v44,
            v42,
            v41,
            v43,
            v50[0],
            v49,
            v25,
            &v47);
    v3 = v22;
    if ( v22 >= 0 )
    {
      v22 = (*(__int64 (__fastcall **)(struct IMultitaskingViewServiceProvider *, void *))(*(_QWORD *)v48 + 24LL))(
              v48,
              v47);
      v3 = v22;
      if ( v22 >= 0 )
      {
LABEL_41:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v49);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v50);
        goto LABEL_42;
      }
      v23 = 648LL;
    }
    else
    {
      v23 = 645LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22A,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v2);
LABEL_56:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
  return v3;
}
