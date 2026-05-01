/*
 * XREFs of ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016E710
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801792A4 (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18016E7F4 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ??$equal@V?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@0@000U?$equal_to@X@0@@Z @ 0x18016EA6C (--$equal@V-$reverse_iterator@V-$_String_view_iterator@U-$char_traits@G@std@@@std@@@std@@V12@U-$e.c)
 */

void *__fastcall XamlExplorerHost_get_activation_factory(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r11
  char v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+20h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                          *a1 + 2LL * a1[1],
                          *a1,
                          L"",
                          L"Windows.Internal.Shell.XamlExplorerHost.XamlApplication",
                          v14) )
  {
    winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>(&v19);
    return (void *)v19;
  }
  else
  {
    LOBYTE(v15) = v3;
    if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                            v2,
                            v1,
                            L"",
                            L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostChildWindow",
                            v15) )
    {
      return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow();
    }
    else
    {
      LOBYTE(v16) = v7;
      if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                              v6,
                              v5,
                              L"",
                              L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostChildWindow_WASDK",
                              v16) )
      {
        return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow_WASDK();
      }
      else
      {
        LOBYTE(v17) = v10;
        if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                                v9,
                                v8,
                                L"",
                                L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostWindow",
                                v17) )
        {
          return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow();
        }
        else
        {
          LOBYTE(v18) = v13;
          if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                                  v12,
                                  v11,
                                  L"",
                                  L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostWindow_WASDK",
                                  v18) )
            return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow_WASDK();
          else
            return 0LL;
        }
      }
    }
  }
}
