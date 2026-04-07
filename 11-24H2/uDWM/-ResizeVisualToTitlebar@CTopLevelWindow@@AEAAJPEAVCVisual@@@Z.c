/*
 * XREFs of ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180095130
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18002CD2C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x180055C04 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18000F80C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18000F87C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x18006A324 (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 *     ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x18007727C (-GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ.c)
 *     ?SetHeight@CVisual@@QEAAXH@Z @ 0x180095184 (-SetHeight@CVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ResizeVisualToTitlebar(CTopLevelWindow *this, struct CVisual *a2)
{
  int TitlebarHeight; // eax

  CVisual::SetInsetFromParentLeft(a2, 0);
  CVisual::SetInsetFromParentTop(a2, 0);
  CVisual::SetInsetFromParentRight(a2, 0);
  TitlebarHeight = CTopLevelWindow::GetTitlebarHeight(this);
  CVisual::SetHeight(a2, TitlebarHeight);
  return 0LL;
}
