/*
 * XREFs of ??$emplace_back@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA?A_TAEBURect@Foundation@Windows@@@Z @ 0x18047B3D8
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18004ED50 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x1805B2F8C (-GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA-AV-$vector@URect@Foundation@Windows@@V-$allocat.c)
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BA32C (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180469BDC (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 */

char *__fastcall std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect const &>(
        __int64 a1,
        _OWORD *a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // rdx

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(
             (const void **)a1,
             v3,
             a2);
  *(_OWORD *)v3 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 16;
  return (char *)v4;
}
