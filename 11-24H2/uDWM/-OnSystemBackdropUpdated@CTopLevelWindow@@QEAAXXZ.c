/*
 * XREFs of ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B624
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ @ 0x180085C80 (-OnSystemBackdropUpdated@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18002CF20 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 */

void __fastcall CTopLevelWindow::OnSystemBackdropUpdated(CContainerVisual **this)
{
  CVisual::SetDirtyFlags((CVisual *)this, 0x4000u);
  CVisual::SetDirtyFlags((CVisual *)this, 0x100000u);
  if ( (unsigned __int8)Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(this + 35) )
  {
    CContainerVisual::RemoveChild(this[31], this[35]);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 35);
  }
}
