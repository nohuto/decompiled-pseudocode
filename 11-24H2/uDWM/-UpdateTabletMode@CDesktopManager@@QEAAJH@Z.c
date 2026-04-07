/*
 * XREFs of ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x180045ED4
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045D50 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x180045FCC (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::UpdateTabletMode(CDesktopManager *this, int a2)
{
  *((_BYTE *)this + 516) = a2 != 0;
  CWindowList::UpdateShellWindowFrameColorization(*((CWindowList **)this + 53));
  return 0LL;
}
