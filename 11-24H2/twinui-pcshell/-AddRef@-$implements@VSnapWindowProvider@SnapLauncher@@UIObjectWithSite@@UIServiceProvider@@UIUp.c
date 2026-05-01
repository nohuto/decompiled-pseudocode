/*
 * XREFs of ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAKXZ @ 0x1805C1C00
 * Callers:
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@W7EAAKXZ @ 0x1805C1C10 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_1805C1C10.c)
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@WBA@EAAKXZ @ 0x1805C1C20 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_1805C1C20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(a1 + 24);
}
