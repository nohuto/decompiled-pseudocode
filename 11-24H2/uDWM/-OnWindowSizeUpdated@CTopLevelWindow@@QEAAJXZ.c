/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180094F50
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180052B98 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180021154 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180027F28 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18004073C (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v2; // rcx
  LONG v3; // eax
  LONG v4; // eax
  struct tagRECT *BorderRect; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 89);
  v3 = v2[14] - v2[12];
  if ( v3 < 0 )
    v3 = 0;
  v7.left = v3;
  v4 = v2[15] - v2[13];
  if ( v4 < 0 )
    v4 = 0;
  v7.top = v4;
  CVisual::SetSize(this, (const struct tagSIZE *)&v7);
  BorderRect = CTopLevelWindow::GetBorderRect(this, &v7, 0);
  CWindowBorder::SetBorderRect(*((CWindowBorder **)this + 28), BorderRect);
  CTopLevelWindow::NotifyMouseLeave(this);
  CVisual::SetDirtyFlags(this, 0x4000000);
  return 0LL;
}
