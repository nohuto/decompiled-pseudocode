/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18011C5B0
 * Callers:
 *     ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x18011C4DC (-CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Inter.c)
 *     ??D?$fast_iterator@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@2@XZ @ 0x18011C588 (--D-$fast_iterator@U-$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@win.c)
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x18011E468 (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B276C (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180582BC0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
        __int64 *a1,
        winrt *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void **); // rbx
  void **v7; // rax
  unsigned int v8; // eax
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  char v12; // [rsp+60h] [rbp+8h] BYREF
  winrt *v13; // [rsp+68h] [rbp+10h]

  v13 = a2;
  *(_QWORD *)a2 = 0LL;
  v5 = *a1;
  v10 = 0;
  v11 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v5 + 48LL);
  v7 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v8 = v6(v5, a3, v7);
  winrt::check_hresult(&v12, v8, &v10);
  return a2;
}
