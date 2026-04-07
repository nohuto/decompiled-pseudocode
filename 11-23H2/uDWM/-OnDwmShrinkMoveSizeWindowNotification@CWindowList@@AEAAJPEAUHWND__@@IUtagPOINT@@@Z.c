/*
 * XREFs of ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z @ 0x18010B0EC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E61EC (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E7444 (-StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z @ 0x1800E7564 (-StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z.c)
 */

__int64 __fastcall CWindowList::OnDwmShrinkMoveSizeWindowNotification(
        CWindowList *this,
        HWND a2,
        int a3,
        struct tagPOINT a4)
{
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v7; // rdi
  int started; // ebx
  __int64 v9; // rdx
  int v11; // edx
  char v12; // cl
  char v13; // si
  char v14; // al
  CTopLevelWindow *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  v7 = WindowDataByHwnd;
  if ( !WindowDataByHwnd )
  {
    started = -2147024809;
    v9 = 7833LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  v11 = *((_DWORD *)WindowDataByHwnd + 14) - *((_DWORD *)WindowDataByHwnd + 12);
  v12 = *((_BYTE *)WindowDataByHwnd + 678);
  if ( v11 < 0 )
    v11 = 0;
  v13 = v12 & 1;
  if ( a3 )
  {
    v14 = *((_BYTE *)WindowDataByHwnd + 678);
    if ( v11 > (unsigned int)a3 && !v13 && *((_QWORD *)v7 + 56) )
    {
      started = CTopLevelWindow3D::StartShrinkAnimationForThumbnail(
                  *((CTopLevelWindow3D **)v7 + 56),
                  (float)a3 / (float)v11,
                  a4);
      if ( started < 0 )
      {
        v9 = 7850LL;
        goto LABEL_3;
      }
      *((_BYTE *)v7 + 678) |= 1u;
      v14 = *((_BYTE *)v7 + 678);
    }
  }
  else
  {
    if ( v13 )
    {
      *((_BYTE *)WindowDataByHwnd + 678) = v12 & 0xFE;
      started = CTopLevelWindow3D::StartGrowAnimationForThumbnail(*((CTopLevelWindow3D **)WindowDataByHwnd + 56));
      if ( started < 0 )
      {
        v9 = 7844LL;
        goto LABEL_3;
      }
      v12 = *((_BYTE *)v7 + 678);
    }
    v14 = v12;
  }
  if ( v13 != (v14 & 1) )
  {
    v15 = (CTopLevelWindow *)*((_QWORD *)v7 + 55);
    if ( v15 )
      CTopLevelWindow::OnIsInWindowMove(v15, (*((_BYTE *)v7 + 677) & 0x10) != 0, (const struct tagRECT *)v7 + 3);
  }
  return 0LL;
}
