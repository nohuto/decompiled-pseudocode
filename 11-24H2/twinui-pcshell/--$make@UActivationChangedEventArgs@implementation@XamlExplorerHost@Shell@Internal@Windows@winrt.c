/*
 * XREFs of ??$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEB_NAEBQEAUHWND__@@@winrt@@YA?A_PAEB_NAEBQEAUHWND__@@@Z @ 0x1800C6C08
 * Callers:
 *     ?MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x1801AC188 (-MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     ??0?$producers_base@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800C6C80 (--0-$producers_base@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,bool const &,HWND__ * const &>(
        _QWORD *a1,
        _BYTE *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r10
  _QWORD *result; // rax
  __int64 v8; // rcx
  char v9; // r8
  __int64 v10; // r9
  char *v11; // [rsp+40h] [rbp+8h]

  v11 = (char *)operator new(0x28uLL);
  LOBYTE(v4) = *a2;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>(
    v11 + 16,
    v5,
    v4);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v6 + 8) = 1LL;
  *(_QWORD *)v6 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs>::`vftable';
  result = a1;
  *a1 = v8;
  *(_BYTE *)(v6 + 24) = v9;
  *(_QWORD *)(v6 + 32) = v10;
  return result;
}
