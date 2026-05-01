/*
 * XREFs of ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A5630
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A8DB8 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F49F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A6EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C95E8 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA?AUCompositor@Composition@UI@Windows@1@PEAUICompositor@345@@Z @ 0x18049B814 (--$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA-AUComposito.c)
 *     ??$as@UVisual@Composition@UI@Windows@winrt@@@?$com_ptr@UIDCompositionVisual2@@@winrt@@QEBA?A_PXZ @ 0x1804A4CD4 (--$as@UVisual@Composition@UI@Windows@winrt@@@-$com_ptr@UIDCompositionVisual2@@@winrt@@QEBA-A_PXZ.c)
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A64A0 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreatePropertySet@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A6980 (-CreatePropertySet@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A74D0 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804ABBE8 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall CAppThumbnailWindow::CreateAppThumbnail(CAppThumbnailWindow *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, GUID *, _QWORD *); // rbx
  _QWORD *v4; // r15
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, LPARAM *, char *); // rbx
  _QWORD *v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  HMONITOR v17; // rdx
  unsigned int v18; // ebx
  BOOL v19; // eax
  __int64 v20; // r9
  signed int Error; // ebx
  __int64 (__fastcall ***v22)(_QWORD, void *, __int64 *); // rbx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  int ThumbnailsForTopTwoAppsAndAddToExcludeList; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rax
  int v33; // eax
  __int64 *v34; // rax
  int v35; // eax
  __int64 *v36; // rax
  __int64 *PropertySet; // rax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  char *v41; // [rsp+30h] [rbp-138h] BYREF
  __int128 v42; // [rsp+38h] [rbp-130h] BYREF
  __int64 v43; // [rsp+48h] [rbp-120h]
  __int64 v44; // [rsp+50h] [rbp-118h] BYREF
  __int128 v45; // [rsp+58h] [rbp-110h] BYREF
  __int64 v46; // [rsp+68h] [rbp-100h]
  __int128 v47; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+80h] [rbp-E8h]
  __int64 v49; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v52[2]; // [rsp+A0h] [rbp-C8h] BYREF
  LPARAM lParam[2]; // [rsp+B0h] [rbp-B8h] BYREF
  int v54; // [rsp+C0h] [rbp-A8h] BYREF
  HWND TrayWindowForMonitor; // [rsp+C8h] [rbp-A0h] BYREF
  _QWORD v56[4]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v57[8]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v58; // [rsp+130h] [rbp-38h] BYREF
  int v59; // [rsp+138h] [rbp-30h]
  int v60; // [rsp+13Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v58 = 0LL;
  v59 = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v60 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, _QWORD *))(*(_QWORD *)v2 + 112LL);
  v4 = (_QWORD *)((char *)this + 40);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 5);
  v5 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  LODWORD(v44) = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  HIDWORD(v44) = v5;
  v6 = v3(v2, 0LL, v44, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x247,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = *((_QWORD *)this + 2);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, LPARAM *, char *))(*(_QWORD *)v9 + 88LL);
  v11 = (_QWORD *)((char *)this + 64);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 8);
  *(_OWORD *)lParam = *(_OWORD *)((char *)this + 136);
  v12 = v10(v9, *v4, 0LL, lParam, (char *)this + 64);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(*v11, &v58, 0LL, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  v49 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v11)(
          *v11,
          &GUID_7814dccf_97c7_4f4f_8fc2_a3c6c8107597,
          &v49);
  v18 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    return v18;
  }
  v42 = 0LL;
  v43 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 19), v17);
  v54 = 0;
  v56[0] = 18LL;
  v56[1] = &v54;
  v56[2] = 4LL;
  v57[0] = this;
  v57[1] = &TrayWindowForMonitor;
  v57[2] = &v42;
  v57[3] = &v47;
  v57[4] = v56;
  v57[5] = &v54;
  v57[6] = &v45;
  LODWORD(v41) = 0;
  lParam[0] = (LPARAM)&v41;
  lParam[1] = (LPARAM)v57;
  v19 = EnumWindows(
          (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___,
          (LPARAM)lParam);
  Error = (int)v41;
  if ( (int)v41 < 0 || !v19 && (Error = ResultFromKnownLastError(), Error < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)Error);
    if ( (_QWORD)v45 )
    {
      std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
      v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v47 )
    {
      std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
      v47 = 0LL;
      v48 = 0LL;
    }
    if ( (_QWORD)v42 )
    {
      std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
      v42 = 0LL;
      v43 = 0LL;
    }
LABEL_129:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    return (unsigned int)Error;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    v20);
  v22 = 0LL;
  v52[0] = 0LL;
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 96LL))(*((_QWORD *)this + 3));
  if ( v23 )
  {
    v22 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v23;
    v52[0] = v23;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  }
  winrt::impl::as<winrt::Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,0>(&v44, v22);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 48, &v44);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v44);
  v41 = 0LL;
  v24 = (*(__int64 (__fastcall **)(_QWORD, char **))(*(_QWORD *)*v11 + 104LL))(*v11, &v41);
  v25 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x287,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v24);
    if ( v41 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v41);
    if ( v22 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v52);
    if ( (_QWORD)v45 )
    {
      std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
      v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v47 )
    {
      std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
      v47 = 0LL;
      v48 = 0LL;
    }
    if ( (_QWORD)v42 )
    {
      std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
      v42 = 0LL;
      v43 = 0LL;
    }
LABEL_95:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    return v25;
  }
  v26 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                     &v41,
                     (__int64)&v44);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 51, v26);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v44);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
    1u,
    v27,
    v28);
  ThumbnailsForTopTwoAppsAndAddToExcludeList = CAppThumbnailWindow::TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList(this);
  v25 = ThumbnailsForTopTwoAppsAndAddToExcludeList;
  if ( ThumbnailsForTopTwoAppsAndAddToExcludeList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x290,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)ThumbnailsForTopTwoAppsAndAddToExcludeList);
    if ( v41 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v41);
    if ( v22 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v52);
    if ( (_QWORD)v45 )
    {
      std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
      v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v47 )
    {
      std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
      v47 = 0LL;
      v48 = 0LL;
    }
    if ( (_QWORD)v42 )
    {
      std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
      v42 = 0LL;
      v43 = 0LL;
    }
    goto LABEL_95;
  }
  v30 = *((_QWORD *)this + 52);
  if ( v30 && *((_QWORD *)this + 54) && *((_QWORD *)this + 56) )
  {
    v50 = 0LL;
    v31 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 104LL))(v30, &v50);
    v25 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x297,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v31);
      if ( v50 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
      if ( v41 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v41);
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v52);
      if ( (_QWORD)v45 )
      {
        std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
        v45 = 0LL;
        v46 = 0LL;
      }
      if ( (_QWORD)v47 )
      {
        std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
        v47 = 0LL;
        v48 = 0LL;
      }
      if ( (_QWORD)v42 )
      {
        std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
        v42 = 0LL;
        v43 = 0LL;
      }
      goto LABEL_95;
    }
    v32 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                       &v50,
                       (__int64)lParam);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 53, v32);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
    v51 = 0LL;
    v33 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 54) + 104LL))(
            *((_QWORD *)this + 54),
            &v51);
    v25 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v33);
      if ( v51 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v51);
      if ( v50 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
      if ( v41 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v41);
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v52);
      if ( (_QWORD)v45 )
      {
        std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
        v45 = 0LL;
        v46 = 0LL;
      }
      if ( (_QWORD)v47 )
      {
        std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
        v47 = 0LL;
        v48 = 0LL;
      }
      if ( (_QWORD)v42 )
      {
        std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
        v42 = 0LL;
        v43 = 0LL;
      }
      goto LABEL_95;
    }
    v34 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                       &v51,
                       (__int64)lParam);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 55, v34);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
    v44 = 0LL;
    v35 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 56) + 104LL))(
            *((_QWORD *)this + 56),
            &v44);
    v25 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29F,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v35);
      if ( v44 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v44);
      if ( v51 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v51);
      if ( v50 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
      if ( v41 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v41);
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v52);
      if ( (_QWORD)v45 )
      {
        std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
        v45 = 0LL;
        v46 = 0LL;
      }
      if ( (_QWORD)v47 )
      {
        std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
        v47 = 0LL;
        v48 = 0LL;
      }
      if ( (_QWORD)v42 )
      {
        std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
        v42 = 0LL;
        v43 = 0LL;
      }
      goto LABEL_95;
    }
    v36 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                       &v44,
                       (__int64)lParam);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 57, v36);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
    if ( v44 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v44);
    if ( v51 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v51);
    if ( v50 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
  }
  PropertySet = (__int64 *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreatePropertySet(
                             (char *)this + 384,
                             lParam);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 49, PropertySet);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
  if ( v41 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v41);
  if ( v22 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v52);
  v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v49 + 24LL))(v49, 0LL, 0LL);
  Error = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v38);
    if ( (_QWORD)v45 )
    {
      std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
      v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v47 )
    {
      std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
      v47 = 0LL;
      v48 = 0LL;
    }
    if ( (_QWORD)v42 )
    {
      std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
      v42 = 0LL;
      v43 = 0LL;
    }
    goto LABEL_129;
  }
  v39 = CAppThumbnailWindow::CreateTrayThumbnail(this, &v47);
  Error = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AD,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v39);
    if ( (_QWORD)v45 )
    {
      std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
      v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v47 )
    {
      std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
      v47 = 0LL;
      v48 = 0LL;
    }
    if ( (_QWORD)v42 )
    {
      std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
      v42 = 0LL;
      v43 = 0LL;
    }
    goto LABEL_129;
  }
  v40 = CAppThumbnailWindow::CreateBackgroundThumbnail(this, &v45);
  Error = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v40);
    if ( (_QWORD)v45 )
    {
      std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
      v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v47 )
    {
      std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
      v47 = 0LL;
      v48 = 0LL;
    }
    if ( (_QWORD)v42 )
    {
      std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
      v42 = 0LL;
      v43 = 0LL;
    }
    goto LABEL_129;
  }
  if ( (_QWORD)v45 )
  {
    std::_Deallocate<16,0>((void *)v45, (const struct std::nothrow_t *)((v46 - v45) & 0xFFFFFFFFFFFFFFF8uLL));
    v45 = 0LL;
    v46 = 0LL;
  }
  if ( (_QWORD)v47 )
  {
    std::_Deallocate<16,0>((void *)v47, (const struct std::nothrow_t *)((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL));
    v47 = 0LL;
    v48 = 0LL;
  }
  if ( (_QWORD)v42 )
  {
    std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
    v42 = 0LL;
    v43 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
  return 0LL;
}
