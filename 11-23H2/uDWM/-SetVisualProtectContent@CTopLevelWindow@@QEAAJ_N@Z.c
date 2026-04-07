/*
 * XREFs of ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E675C
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18004E4AC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180109350 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::SetVisualProtectContent(CTopLevelWindow *this, bool a2)
{
  *((_BYTE *)this + 249) = (32 * a2) | *((_BYTE *)this + 249) & 0xDF;
  return CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), a2);
}
