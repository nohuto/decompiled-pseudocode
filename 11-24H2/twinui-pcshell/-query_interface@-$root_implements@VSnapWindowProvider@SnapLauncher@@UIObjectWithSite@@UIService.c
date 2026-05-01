/*
 * XREFs of ?query_interface@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805C20EC
 * Callers:
 *     ?QueryInterface@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805C1C60 (-QueryInterface@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvid.c)
 * Callees:
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x18029517C (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 *     ?query_interface_common@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805C2154 (-query_interface_common@-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax

  v3 = a1;
  if ( !a1 )
    a1 = 24LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::query_interface_common(
             v3,
             a2,
             a3);
  winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(v3);
  return 0LL;
}
