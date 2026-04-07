/*
 * XREFs of ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800DB784
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180015710 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTopLevelWindow::StartIconicAnimation(CTopLevelWindow *this)
{
  struct CVisual *v2; // rcx

  if ( (*((_BYTE *)this + 200) & 0x40) == 0 )
  {
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::RegisterForGlobalTimeChangeNotification(v2);
    *((_BYTE *)this + 200) |= 0x40u;
  }
}
