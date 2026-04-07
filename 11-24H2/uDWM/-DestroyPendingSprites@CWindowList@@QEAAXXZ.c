/*
 * XREFs of ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x18001A2A0
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001A1E0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A304 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::DestroyPendingSprites(struct CWindowData ***this)
{
  while ( *((_DWORD *)this + 76) )
    CWindowList::ImmediateDestroySprite((CWindowList *)this, *this[35]);
  *((_DWORD *)this + 76) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 35, 8LL);
}
