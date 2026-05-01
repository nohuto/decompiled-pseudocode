/*
 * XREFs of ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3E9C
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180185EF8 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x1800B3740 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010E690 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?InternalAddRef@?$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ @ 0x18011F9B0 (-InternalAddRef@-$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x18014075C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A704C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIM_ea_1801A704C.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AE470 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AEA70 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITouchGestureSettings@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AF600 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B184C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewManager::_CreateDCompMTVHost(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 a4,
        struct IMultitaskingViewManagerInternal *a5)
{
  struct IMultitaskingViewManagerInternal *v9; // r15
  const struct _GUID *v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int Instance; // eax
  __int64 v15; // rdx
  void *v16; // r8
  __int64 v17; // r9
  int v18; // esi
  int v19; // esi
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  const char *v23; // r9
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 *v27; // rbx
  struct _GUID *v29; // [rsp+30h] [rbp-50h]
  struct _GUID *v30; // [rsp+40h] [rbp-40h]
  void *v31; // [rsp+60h] [rbp-20h] BYREF
  struct IMultitaskingData *v32[2]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v34; // [rsp+B0h] [rbp+30h] BYREF

  v9 = a5;
  *(_QWORD *)a5 = 0LL;
  v31 = 0LL;
  if ( *(_QWORD *)(a1 + 120) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v11 = VirtualDesktopThumbnailWindowFilter_CreateInstance(
            *(struct IVirtualDesktopManagerInternal **)(a1 + 120),
            *(struct ITabletModeController **)(a1 + 136),
            *(struct IVirtualDesktopNotificationService **)(a1 + 144),
            v10,
            &v31);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_31:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      return v12;
    }
  }
  *(_OWORD *)v32 = 0LL;
  if ( a3 )
  {
    v34 = 0LL;
    v13 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    Instance = v13(a3, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, &v34);
    v12 = Instance;
    if ( Instance < 0 )
    {
      v15 = 677LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
LABEL_30:
      _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v32);
      goto LABEL_31;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32[1]);
    v30 = *(struct _GUID **)(a1 + 216);
    v29 = *(struct _GUID **)(a1 + 176);
    Instance = MultitaskingData_CreateInstance(
                 a3,
                 v34,
                 v31,
                 *(_QWORD *)(a1 + 120),
                 *(_QWORD *)(a1 + 128),
                 *(_QWORD *)(a1 + 144));
    v12 = Instance;
    if ( Instance < 0 )
    {
      v15 = 689LL;
      goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32[1]);
    v30 = *(struct _GUID **)(a1 + 216);
    v29 = *(struct _GUID **)(a1 + 176);
    v22 = MultitaskingData_CreateInstance(
            *(_QWORD *)(a1 + 96),
            *(_QWORD *)(a1 + 104),
            v31,
            *(_QWORD *)(a1 + 120),
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 144));
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C0,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_30;
    }
  }
  a5 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>>(
    a1,
    &GUID_4026878b_100e_4920_8bc7_baeed683a086,
    &a5);
  v18 = a2 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
        1u,
        (__int64)v16,
        v17);
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2EC,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        v23);
    }
    if ( v19 == 6 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v32);
      v20 = CPPIAllUpViewHost_CreateInstance(
              v32[1],
              a5,
              *(struct IApplicationViewSwitcher **)(a1 + 112),
              *(struct IImmersiveAppCrusher **)(a1 + 152),
              *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
              *(struct ITabletModeViewManager **)(a1 + 184),
              v29,
              (void **)v32);
      v12 = v20;
      if ( v20 < 0 )
      {
        v21 = 759LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
        goto LABEL_30;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v32);
    v20 = CAltTabViewHost_CreateInstance(
            v32[1],
            a5,
            *(struct IApplicationViewSwitcher **)(a1 + 112),
            *(struct IImmersiveAppCrusher **)(a1 + 152),
            *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
            *(struct IMultitaskingViewGestureState **)(a1 + 168),
            *(struct IApplicationViewCollection **)(a1 + 96),
            *(struct ITouchGestureSettings **)(a1 + 248),
            v30,
            (void **)v32);
    v12 = v20;
    if ( v20 == -2147019873 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
      _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v32);
      v12 = -2147019873;
      goto LABEL_31;
    }
    if ( v20 < 0 )
    {
      v21 = 729LL;
      goto LABEL_29;
    }
  }
  v24 = (_QWORD *)(a1 + 288);
  v25 = v24[1];
  if ( v25 != v24[3]
    || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)v24,
              v25 + 1,
              v16) >= 0 )
  {
    v26 = v24[1];
    v24[1] = v26 + 1;
    v27 = (__int64 *)(*v24 + 16 * v26);
    if ( v27 )
    {
      *v27 = (__int64)v32[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v27);
      v27[1] = (__int64)v32[1];
      Microsoft::WRL::ComPtr<IMultitaskingData>::InternalAddRef(v27 + 1);
    }
  }
  v20 = (**(__int64 (__fastcall ***)(struct IMultitaskingData *, __int64, struct IMultitaskingViewManagerInternal *))v32[0])(
          v32[0],
          a4,
          v9);
  v12 = v20;
  if ( v20 < 0 )
  {
    v21 = 765LL;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  return 0LL;
}
