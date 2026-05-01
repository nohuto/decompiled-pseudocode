/*
 * XREFs of ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802686C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18007838C (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180094FB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18009900C (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1800A3BC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801D7C6C (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180224F4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x18022581C (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18023A408 (-CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtu.c)
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18029FE74 (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A7420 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBug.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180679D28 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall CVirtualDesktopComponent::SubscribeToServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v5; // rax
  CCriticalFailureHandler *v6; // rcx
  int Instance; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v9; // rcx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v11; // rcx
  __int64 v12; // rdx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v14; // rcx
  CCriticalFailureHandler *v15; // rcx
  const struct _GUID *v16; // r9
  struct IVirtualDesktopSwitchAnimator **v17; // r15
  __int64 v18; // rcx
  CCriticalFailureHandler *v19; // rcx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v21; // eax
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v25; // eax
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v27)(_QWORD, GUID *, __int64 *); // rax
  int v28; // eax
  struct IVirtualDesktopSwitchAnimator *v29; // rcx
  __int64 (__fastcall **v30)(struct IVirtualDesktopSwitchAnimator *, GUID *, __int64 *); // rax
  int v31; // eax
  HRESULT (__stdcall *v32)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  CCriticalFailureHandler *v37; // rcx
  __int64 v38; // rdx
  CCriticalFailureHandler *v39; // rcx
  CCriticalFailureHandler *v40; // rcx
  CCriticalFailureHandler *v41; // rcx
  __int64 v42; // rcx
  CCriticalFailureHandler *v43; // rcx
  __int64 *v44; // rax
  CCriticalFailureHandler *v45; // rcx
  __int64 v46; // rdx
  CCriticalFailureHandler *v47; // rcx
  const struct _GUID *v48; // r8
  CCriticalFailureHandler *v49; // rcx
  __int64 v50; // rdx
  CCriticalFailureHandler *v51; // rcx
  __int64 v52; // r9
  __int64 v53; // rdx
  HRESULT (__stdcall *v54)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v55; // rcx
  int v56; // eax
  wil::details::in1diag3 *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r9
  unsigned __int64 *v60; // rdx
  const struct _GUID *v61; // r9
  __int64 v62; // rcx
  int v63; // eax
  CCriticalFailureHandler *v64; // rcx
  CCriticalFailureHandler *v65; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 *v69; // rax
  const struct _GUID *v70; // r8
  CCriticalFailureHandler *v71; // rcx
  HRESULT (__stdcall *v72)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v73; // rax
  CCriticalFailureHandler *v74; // rcx
  unsigned __int64 v75; // r9
  __int64 v76; // rdx
  int v77; // eax
  struct IServiceProviderVtbl *v78; // rax
  int v79; // eax
  unsigned __int64 *v81; // [rsp+20h] [rbp-89h]
  unsigned __int64 *v82; // [rsp+20h] [rbp-89h]
  unsigned __int64 *v83; // [rsp+20h] [rbp-89h]
  unsigned __int64 *v84; // [rsp+28h] [rbp-81h]
  unsigned __int64 *v85; // [rsp+28h] [rbp-81h]
  unsigned __int64 *v86; // [rsp+28h] [rbp-81h]
  const struct _GUID *v87; // [rsp+30h] [rbp-79h]
  __int64 v88; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 *v89; // [rsp+48h] [rbp-61h] BYREF
  int v90[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v91; // [rsp+58h] [rbp-51h] BYREF
  __int64 v92; // [rsp+60h] [rbp-49h] BYREF
  __int64 v93; // [rsp+68h] [rbp-41h] BYREF
  __int64 v94; // [rsp+70h] [rbp-39h] BYREF
  RTL_SRWLOCK *v95; // [rsp+78h] [rbp-31h] BYREF
  struct IApplicationViewCollection *v96; // [rsp+80h] [rbp-29h] BYREF
  __int64 v97; // [rsp+88h] [rbp-21h] BYREF
  void *v98; // [rsp+90h] [rbp-19h] BYREF
  __int64 v99; // [rsp+98h] [rbp-11h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 *v101; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v102; // [rsp+B0h] [rbp+7h] BYREF
  unsigned __int64 v103[9]; // [rsp+B8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v105; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v106; // [rsp+120h] [rbp+77h] BYREF
  __int64 v107; // [rsp+128h] [rbp+7Fh] BYREF

  v96 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v96);
  Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
               a2,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               v5);
  LODWORD(v105) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v6, (int *)&v105);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v105;
  }
  if ( Instance >= 0 )
    goto LABEL_9;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      (int *)&v105,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xC8u,
      v81,
      v84);
    Instance = v105;
  }
  if ( Instance >= 0 )
  {
LABEL_9:
    v88 = 0LL;
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v88);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
                 a2,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &v88);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v9,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xCCu,
          v81,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCC,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_17:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v88);
        goto LABEL_210;
      }
    }
    v107 = 0LL;
    v10 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v107);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v10)(
                 a2,
                 &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                 &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                 &v107);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v11,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xD0u,
          v81,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v12 = 208LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v107);
        goto LABEL_17;
      }
    }
    v13 = a2->lpVtbl->QueryService;
    v14 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
                 a2,
                 &SID_MultitaskingViewVisibilityService,
                 &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
                 (char *)this + 224);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v15,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xD3u,
          v81,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v12 = 211LL;
        goto LABEL_26;
      }
    }
    v17 = (struct IVirtualDesktopSwitchAnimator **)((char *)this + 136);
    v18 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    Instance = VirtualDesktopSwitchAnimator_CreateInstance(
                 *((struct IVirtualDesktopManagerPrivate **)this + 15),
                 *((struct IVirtualDesktopAnimationSyncNotificationServicePrivate **)this + 16),
                 *((struct IMultitaskingViewVisibilityService **)this + 28),
                 v16,
                 (void **)this + 17);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v19,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xD9u,
          v82,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v12 = 217LL;
        goto LABEL_26;
      }
    }
    v89 = 0LL;
    v20 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v89);
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))v20)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v89);
    Instance = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v21);
LABEL_50:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v89);
      goto LABEL_27;
    }
    *(_QWORD *)v90 = 0LL;
    v22 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v90);
    v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, int *))v22)(
            a2,
            &unk_1807B2E10,
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            v90);
    Instance = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v23);
LABEL_53:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v90);
      goto LABEL_50;
    }
    v91 = 0LL;
    v24 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v91);
    v25 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))v24)(
            a2,
            &unk_1807B2E00,
            &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
            &v91);
    Instance = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v25);
LABEL_56:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v91);
      goto LABEL_53;
    }
    v92 = 0LL;
    v26 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 18);
    v27 = *v26;
    v92 = 0LL;
    v28 = (*v27)(v26, &GUID_d9644dc1_ee57_4f37_8bf2_58f489243230, &v92);
    Instance = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v28);
LABEL_59:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v92);
      goto LABEL_56;
    }
    v94 = 0LL;
    v29 = *v17;
    v30 = *(__int64 (__fastcall ***)(struct IVirtualDesktopSwitchAnimator *, GUID *, __int64 *))*v17;
    v94 = 0LL;
    v31 = (*v30)(v29, &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8, &v94);
    Instance = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE4,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v31);
LABEL_62:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v94);
      goto LABEL_59;
    }
    v93 = 0LL;
    if ( v92 )
    {
      v32 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v93);
      v33 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v32)(
              a2,
              &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
              &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
              &v93);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE9,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)v33);
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 15) + 312LL))(*((_QWORD *)this + 15), &v93);
      v87 = (const struct _GUID *)&v93;
      v84 = v89;
      v82 = *(unsigned __int64 **)v90;
      v34 = (*(__int64 (__fastcall **)(__int64, __int64, struct IApplicationViewCollection *, struct IVirtualDesktopSwitchAnimator *))(*(_QWORD *)v92 + 48LL))(
              v92,
              v91,
              v96,
              *v17);
      Instance = v34;
      if ( v34 < 0 )
      {
        v35 = (unsigned int)v34;
        v36 = 235LL;
LABEL_68:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v36,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)v35);
LABEL_69:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v93);
        goto LABEL_62;
      }
    }
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), &v95);
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 15) + 240LL))(
                 *((_QWORD *)this + 15),
                 v96);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v37, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v37,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF0u,
          v82,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v38 = 240LL;
LABEL_78:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_79:
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v95);
        goto LABEL_69;
      }
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 14) + 48LL))(
                 *((_QWORD *)this + 14),
                 v96);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v39, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v39,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF1u,
          v82,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v38 = 241LL;
        goto LABEL_78;
      }
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 20) + 24LL))(
                 *((_QWORD *)this + 20),
                 v96);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v40, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v40,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF2u,
          v82,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v38 = 242LL;
        goto LABEL_78;
      }
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 19) + 24LL))(
                 *((_QWORD *)this + 19),
                 v96);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v41, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v41,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF3u,
          v82,
          v84);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v38 = 243LL;
        goto LABEL_78;
      }
    }
    v42 = *((_QWORD *)this + 22);
    if ( v42 )
    {
      Instance = (*(__int64 (__fastcall **)(__int64, struct IApplicationViewCollection *))(*(_QWORD *)v42 + 72LL))(
                   v42,
                   v96);
      LODWORD(v105) = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v43, (int *)&v105);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v43,
            (int *)&v105,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xF7u,
            v82,
            v84);
          Instance = v105;
        }
        if ( Instance < 0 )
        {
          v38 = 247LL;
          goto LABEL_78;
        }
      }
    }
    v97 = 0LL;
    v44 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v97);
    Instance = CVirtualDesktopApplicationViewEventListener_CreateInstance(
                 *((struct IVirtualDesktopManagerPrivate **)this + 15),
                 *v17,
                 *((struct IVirtualDesktopForegroundPolicy **)this + 14),
                 *((struct IVirtualDesktopWindowMoveManager **)this + 19),
                 *((struct IVirtualDesktopPinnedAppsPrivate **)this + 22),
                 *((struct IVirtualDesktopLock **)this + 13),
                 v87,
                 (void **)v44);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v45, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v45,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x102u,
          v83,
          v85);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v46 = 258LL;
LABEL_121:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v46,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_122:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v97);
        goto LABEL_79;
      }
    }
    Instance = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v88 + 24LL))(
                 v88,
                 v97,
                 (char *)this + 244);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v47, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v47,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x105u,
          v83,
          v85);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v46 = 261LL;
        goto LABEL_121;
      }
    }
    v98 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v98);
    Instance = VirtualDesktopTabletModeNotificationListener_CreateInstance(
                 *((struct IVirtualDesktopTabletModePolicy **)this + 21),
                 a2,
                 v48,
                 &v98);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v49, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v49,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x10Bu,
          v83,
          v85);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v50 = 267LL;
LABEL_139:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v50,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_140:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v98);
        goto LABEL_122;
      }
    }
    Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v107 + 72LL))(
                 v107,
                 v98,
                 (char *)this + 248);
    LODWORD(v105) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v51, (int *)&v105);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v105;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v51,
          (int *)&v105,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x10Du,
          v83,
          v85);
        Instance = v105;
      }
      if ( Instance < 0 )
      {
        v50 = 269LL;
        goto LABEL_139;
      }
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
      1u,
      3u,
      v52);
    v105 = 0LL;
    LOBYTE(v53) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl,
      v53);
    v54 = a2->lpVtbl->QueryService;
    v55 = v105;
    v105 = 0LL;
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    v56 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v54)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
            &v105);
    v57 = retaddr;
    if ( v56 >= 0 )
    {
      if ( !v105
        || (v56 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 288LL))(*((_QWORD *)this + 15)),
            v57 = retaddr,
            v56 >= 0) )
      {
LABEL_157:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v105);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
          1u,
          3u,
          v59);
        v103[0] = 0LL;
        v103[1] = 0LL;
        v60 = v103;
        v86 = v103;
        LODWORD(v83) = 4;
        LOBYTE(v60) = 1;
        if ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, const wchar_t *))(**((_QWORD **)this + 25)
                                                                                                 + 24LL))(
               *((_QWORD *)this + 25),
               v60,
               0LL,
               L"VDSoftLandingCampaignDone") == -2147024894 )
        {
          v62 = *((_QWORD *)this + 27);
          *((_QWORD *)this + 27) = 0LL;
          if ( v62 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
          v63 = CVirtualDesktopSoftLandingHandler_CreateInstance(
                  v96,
                  *((struct IVirtualDesktopNotificationServicePrivate **)this + 26),
                  *((struct IVirtualDesktopRegistryHelpers **)this + 25),
                  v61,
                  (void **)this + 27);
          Instance = v63;
          if ( v63 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x12D,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v63);
            CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)v103);
            goto LABEL_140;
          }
          *((_BYTE *)this + 240) = 1;
        }
        CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)v103);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v98);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v97);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v95);
        v106 = 0;
        Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v107 + 24LL))(v107, &v106);
        LODWORD(v105) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v64, (int *)&v105);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v105;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v64,
              (int *)&v105,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x135u,
              v83,
              v103);
            Instance = v105;
          }
          if ( Instance < 0 )
          {
            v35 = (unsigned int)Instance;
            v36 = 309LL;
            goto LABEL_68;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 32LL))(
                     *((_QWORD *)this + 21),
                     v106,
                     0LL);
        LODWORD(v105) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v65, (int *)&v105);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v105;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v65,
              (int *)&v105,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x136u,
              v83,
              v86);
            Instance = v105;
          }
          if ( Instance < 0 )
          {
            v35 = (unsigned int)Instance;
            v36 = 310LL;
            goto LABEL_68;
          }
        }
        if ( *((_QWORD *)this + 23) )
        {
          lpVtbl = a2->lpVtbl;
          v101 = 0LL;
          v67 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))lpVtbl->QueryService)(
                  a2,
                  &SID_VirtualDesktopSwitcher,
                  &GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589,
                  &v101);
          Instance = v67;
          if ( v67 < 0 )
          {
            v68 = 315LL;
LABEL_182:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v68,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v67);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v101);
            goto LABEL_69;
          }
          v86 = v101;
          v83 = v89;
          v67 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationViewCollection *, _QWORD))(**((_QWORD **)this + 23) + 24LL))(
                  *((_QWORD *)this + 23),
                  v91,
                  v96,
                  *(_QWORD *)v90);
          Instance = v67;
          if ( v67 < 0 )
          {
            v68 = 316LL;
            goto LABEL_182;
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v101);
        }
        v99 = 0LL;
        v69 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v99);
        Instance = CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopLock **)this + 13),
                     v70,
                     (void **)v69);
        LODWORD(v105) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v71, (int *)&v105);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v105;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v71,
              (int *)&v105,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x143u,
              v83,
              v86);
            Instance = v105;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x143,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_194:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v99);
            goto LABEL_69;
          }
        }
        v100 = 0LL;
        v72 = a2->lpVtbl->QueryService;
        v73 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v100);
        Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v72)(
                     a2,
                     &GUID_5090de35_ed23_43be_9714_586c5041026a,
                     &GUID_5090de35_ed23_43be_9714_586c5041026a,
                     v73);
        LODWORD(v105) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v74, (int *)&v105);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v105;
        }
        if ( Instance >= 0 )
          goto LABEL_205;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v74,
            (int *)&v105,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x146u,
            v83,
            v86);
          Instance = v105;
        }
        if ( Instance >= 0 )
        {
LABEL_205:
          v77 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v100 + 24LL))(
                  v100,
                  v99,
                  (char *)this + 252);
          Instance = v77;
          if ( v77 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 15) + 480LL))(
              *((_QWORD *)this + 15),
              v89);
            v78 = a2->lpVtbl;
            v102 = 0LL;
            v79 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v78->QueryService)(
                    a2,
                    &SID_MultitaskingViewServiceProvider,
                    &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                    &v102);
            Instance = v79;
            if ( v79 >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64, struct IVirtualDesktopSwitchAnimator *, _QWORD, __int64))(**((_QWORD **)this + 15) + 320LL))(
                *((_QWORD *)this + 15),
                v91,
                *v17,
                *(_QWORD *)v90,
                v102);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v102);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v100);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v99);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v93);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v94);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v92);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v91);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v90);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v89);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v107);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v88);
              Instance = 0;
              goto LABEL_210;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14C,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v79);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v102);
            goto LABEL_204;
          }
          v75 = (unsigned int)v77;
          v76 = 327LL;
        }
        else
        {
          v75 = (unsigned int)Instance;
          v76 = 326LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v76,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)v75);
LABEL_204:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v100);
        goto LABEL_194;
      }
      v58 = 282LL;
    }
    else
    {
      v58 = 280LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v57,
      (void *)v58,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v56);
    goto LABEL_157;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
LABEL_210:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v96);
  return (unsigned int)Instance;
}
