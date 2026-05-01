/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805F2A58
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805F39C0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Inter.c)
 * Callees:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180283DBC (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::MeetAndChatManager(a1, a2);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,std::tuple<winrt::Windows::Internal::Shell::MeetAndChatManager,IImmersiveWindowMessageNotification>>'};
  *((_QWORD *)a1 + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,std::tuple<winrt::Windows::Internal::Shell::MeetAndChatManager,IImmersiveWindowMessageNotification>>'};
  *((_QWORD *)a1 + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::`vftable'{for `winrt::immersive_shell_component'};
  return a1;
}
