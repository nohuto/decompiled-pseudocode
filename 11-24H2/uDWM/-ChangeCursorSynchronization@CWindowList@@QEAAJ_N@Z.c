/*
 * XREFs of ?ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z @ 0x1800EE5F4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z @ 0x18009458C (-SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::ChangeCursorSynchronization(CCursorVisualProxy ***this, char a2)
{
  int IsSynchronized; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  IsSynchronized = CCursorVisual::SetIsSynchronized(this[11], a2);
  v3 = IsSynchronized;
  if ( IsSynchronized >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x212E,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)IsSynchronized);
  return v3;
}
