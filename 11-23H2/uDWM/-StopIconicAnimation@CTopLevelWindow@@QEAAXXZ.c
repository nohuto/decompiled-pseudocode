/*
 * XREFs of ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E68B8
 * Callers:
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180106378 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x1800E5D60 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StopIconicAnimation(CTopLevelWindow *this)
{
  char v1; // al
  struct CVisual *v2; // rcx

  v1 = *((_BYTE *)this + 248);
  if ( (v1 & 0x40) != 0 )
  {
    *((_BYTE *)this + 248) = v1 & 0xBF;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
  }
}
