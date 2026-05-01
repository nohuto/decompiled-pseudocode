/*
 * XREFs of ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x18029EA0C
 * Callers:
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@4PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18015F214 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIAppli.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x18016B218 (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@A.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18029EABC (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
AppViewDataSourceAdapter **__fastcall wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,winrt::Windows::Internal::UI::Shell::IWindowTabExtension &>(
        AppViewDataSourceAdapter **a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        __int64 a7)
{
  int v11; // eax
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(a1);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<AppViewDataSourceAdapter,AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,winrt::Windows::Internal::UI::Shell::IWindowTabExtension &>(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v11,
      v13);
  return a1;
}
