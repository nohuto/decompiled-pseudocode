/*
 * XREFs of ??$from_cx@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@@YA?AU?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1801B2C1C
 * Callers:
 *     ?DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AU?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x1801B29C0 (-DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA-AU-$IVectorVi.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

winrt *__fastcall from_cx<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>>(
        winrt *a1,
        struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  void **v5; // rax
  unsigned int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  if ( a2 )
  {
    v8 = 0;
    v9 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    v5 = winrt::put_abi(a1, a2);
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, void *, void **))QueryInterface)(
           a2,
           &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>>,
           v5);
    winrt::check_hresult(&v10, v6, &v8);
  }
  return a1;
}
