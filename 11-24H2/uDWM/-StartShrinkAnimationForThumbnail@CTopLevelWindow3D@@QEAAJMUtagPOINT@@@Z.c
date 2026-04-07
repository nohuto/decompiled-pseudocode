/*
 * XREFs of ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z @ 0x1800DBB24
 * Callers:
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z @ 0x1800F12D8 (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartShrinkAnimationForThumbnail(
        CTopLevelWindow3D *this,
        float a2,
        struct tagPOINT a3)
{
  int started; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((float *)this + 147) = a2;
  *((struct tagPOINT *)this + 74) = a3;
  *((_BYTE *)this + 608) = 0;
  started = CTopLevelWindow3D::StartAnimation((__int64)this, 0x10u);
  v4 = started;
  if ( started >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)started);
  return v4;
}
