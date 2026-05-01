/*
 * XREFs of ??1?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ @ 0x1804F8DAC
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1804FA04C (--_E-$heap_implements@V-$module_count_wrapper@VGamingPosturePositioner@@@details@wi_ea_1804FA04C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<GamingPosturePositioner>::~module_count_wrapper<GamingPosturePositioner>(
        GamingPosturePositioner *this)
{
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
  *((_QWORD *)this + 13) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  GamingPosturePositioner::~GamingPosturePositioner(this);
}
