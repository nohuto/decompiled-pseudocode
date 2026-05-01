/*
 * XREFs of ??$as@UVisual@Composition@UI@Windows@winrt@@@?$com_ptr@UIDCompositionVisual2@@@winrt@@QEBA?A_PXZ @ 0x1804A4CD4
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A5630 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ??$as@UVisual@Composition@UI@Windows@winrt@@UIDCompositionVisual2@@$0A@@impl@winrt@@YA?AUVisual@Composition@UI@Windows@1@PEAUIDCompositionVisual2@@@Z @ 0x1804A4CF8 (--$as@UVisual@Composition@UI@Windows@winrt@@UIDCompositionVisual2@@$0A@@impl@winrt@@YA-AUVisual@.c)
 */

__int64 __fastcall winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
        _QWORD *a1,
        __int64 a2)
{
  winrt::impl::as<winrt::Windows::UI::Composition::Visual,IDCompositionVisual2,0>(a2, *a1);
  return a2;
}
