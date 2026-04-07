/*
 * XREFs of ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E7444
 * Callers:
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z @ 0x18010B0EC (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartGrowAnimationForThumbnail(CTopLevelWindow3D *this)
{
  int started; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 656)
    || (started = CTopLevelWindow3D::StartAnimation((__int64)this, 17), v3 = started, started >= 0) )
  {
    *((_BYTE *)this + 656) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21B,
      (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)started);
    return v3;
  }
}
