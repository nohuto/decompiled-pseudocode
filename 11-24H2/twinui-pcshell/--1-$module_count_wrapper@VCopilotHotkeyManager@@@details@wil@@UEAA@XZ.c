/*
 * XREFs of ??1?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ @ 0x180621F24
 * Callers:
 *     ??_G?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAAPEAXI@Z @ 0x1806225D0 (--_G-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<CopilotHotkeyManager>::~module_count_wrapper<CopilotHotkeyManager>(
        CopilotHotkeyManager *this)
{
  *(_QWORD *)this = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 1) = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  *((_QWORD *)this + 13) = &CopilotHotkeyManager::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  CopilotHotkeyManager::~CopilotHotkeyManager(this);
}
