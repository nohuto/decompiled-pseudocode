/*
 * XREFs of ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804F8838
 * Callers:
 *     ??0?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@QEAA@XZ @ 0x1804F851C (--0-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x18014A910 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x180217FEC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180294914 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x18032A9E0 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x18032CFA4 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$GetActivationFactory@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804F5220 (--$GetActivationFactory@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@W.c)
 *     ??0?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@Unon_agile@3@@winrt@@QEAA@XZ @ 0x1804F840C (--0-$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePosit.c)
 *     ??0GamingFallbackWindow@@QEAA@PEAVGamingPosturePositioner@@@Z @ 0x1804F85E8 (--0GamingFallbackWindow@@QEAA@PEAVGamingPosturePositioner@@@Z.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180507228 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=30
GamingPosturePositioner *__fastcall GamingPosturePositioner::GamingPosturePositioner(
        GamingPosturePositioner *this,
        __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rax
  GamingFallbackWindow *v5; // rbx
  volatile int *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r8d
  const WCHAR *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15[20]; // [rsp+20h] [rbp-79h] BYREF
  char v16; // [rsp+70h] [rbp-29h]
  _BYTE v17[112]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  GamingFallbackWindow *v19; // [rsp+108h] [rbp+6Fh] BYREF

  winrt::implements<GamingPosturePositioner,winrt::immersive_shell_component,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IWindowManagementWindowGroupingEvents,winrt::non_agile>::implements<GamingPosturePositioner,winrt::immersive_shell_component,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IWindowManagementWindowGroupingEvents,winrt::non_agile>(
    this,
    a2);
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IGamingPosturePositioner,void>'};
  *((_QWORD *)this + 1) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IBasicPositioner,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IShellPositionerViewHandoff,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IImmersiveMonitorNotification,void>'};
  *((_QWORD *)this + 4) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IPositionerApplicationClosePolicy,void>'};
  *((_QWORD *)this + 5) = &wil::details::module_count_wrapper<GamingPosturePositioner>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 6) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  *((_QWORD *)this + 7) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IWindowManagementShowMoveSizeEvents,void>'};
  *((_QWORD *)this + 8) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IWindowManagementWindowGroupingEvents,void>'};
  *((_QWORD *)this + 9) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 10) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 11) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 13) = &GamingPosturePositioner::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 1;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 162) = 0;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 196) = 0;
  *((_BYTE *)this + 788) = 0;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_DWORD *)this + 202) = 0;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  v3 = (__int64 *)((char *)this + 880);
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_DWORD *)this + 240) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  v16 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v4 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v17, "ctor");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v15, v4);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
  }
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (RTL_SRWLOCK *)this + 9,
    (__int128 *)&GUID_e0e78cc4_82f7_4d70_bd5c_217e39804a26);
  v5 = (GamingFallbackWindow *)operator new(0x28uLL);
  v19 = v5;
  GamingFallbackWindow::GamingFallbackWindow(v5, this);
  *(_QWORD *)v5 = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  *((_QWORD *)v5 + 1) = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  v19 = v5;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 113, (__int64 *)&v19);
  if ( v19 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v19);
  v7 = *v3;
  *v3 = 0LL;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
      v7,
      v6);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((_QWORD *)this + 110);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v8,
      v15[0]);
  v11 = wil::GetActivationFactory<Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>(
          (const WCHAR *)&v19,
          v9,
          v10);
  v12 = *(_QWORD *)v11;
  *(_QWORD *)v11 = 0LL;
  v13 = *((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = v12;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v19);
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v15);
  return this;
}
