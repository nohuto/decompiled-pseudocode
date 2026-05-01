/*
 * XREFs of ??$convert_from_abi@UResourceDictionary@Xaml@UI@Windows@winrt@@@wil@@YA?AUResourceDictionary@Xaml@UI@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180249DAC
 * Callers:
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x180211774 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

winrt *__fastcall wil::convert_from_abi<winrt::Windows::UI::Xaml::ResourceDictionary>(winrt *a1, struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  void **v5; // rax
  unsigned int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  v8 = 0;
  v9 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  v5 = winrt::put_abi(a1, a2);
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, void *, void **))QueryInterface)(
         a2,
         &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IResourceDictionary>,
         v5);
  winrt::check_hresult(&v10, v6, &v8);
  return a1;
}
