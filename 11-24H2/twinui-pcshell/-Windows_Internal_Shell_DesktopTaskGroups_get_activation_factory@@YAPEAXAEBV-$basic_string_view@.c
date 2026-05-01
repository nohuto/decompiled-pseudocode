/*
 * XREFs of ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016E9F0
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801792A4 (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??$equal@V?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@0@000U?$equal_to@X@0@@Z @ 0x18016EA6C (--$equal@V-$reverse_iterator@V-$_String_view_iterator@U-$char_traits@G@std@@@std@@@std@@V12@U-$e.c)
 *     ??0?$producers_base@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180296FF4 (--0-$producers_base@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGro.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory(_QWORD *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // r8
  __int64 v3; // rcx
  char v5; // [rsp+20h] [rbp-18h]

  v5 = 0;
  if ( !(unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                           *a1 + 2LL * a1[1],
                           *a1,
                           L"",
                           L"Windows.Internal.Shell.DesktopTaskGroups.DesktopTaskGroupsSwitchItemController",
                           v5) )
    return 0LL;
  v1 = operator new(0x18uLL);
  *(_OWORD *)v1 = 0LL;
  v1[2] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,std::tuple<winrt::Windows::Foundation::IActivationFactory>>::producers_base<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,std::tuple<winrt::Windows::Foundation::IActivationFactory>>(v1 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v2[1] = 1LL;
  *v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
  return v3;
}
