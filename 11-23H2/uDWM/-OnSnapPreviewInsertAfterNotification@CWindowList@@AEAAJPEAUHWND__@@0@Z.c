/*
 * XREFs of ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18010B408
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18010D284 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::OnSnapPreviewInsertAfterNotification(CWindowList *this, HWND a2, HWND a3)
{
  struct CWindowData *WindowDataByHwnd; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  if ( !WindowDataByHwnd )
    return 0LL;
  if ( a3 == *((HWND *)WindowDataByHwnd + 83) )
    return 0LL;
  *((_QWORD *)WindowDataByHwnd + 83) = a3;
  if ( WindowDataByHwnd != *((struct CWindowData **)this + 88) )
    return 0LL;
  if ( !*((_QWORD *)this + 68) )
    return 0LL;
  v6 = CWindowList::ZOrderAcrylicSheet(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E8F,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
