/*
 * XREFs of ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E74A4
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 * Callees:
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002FA0C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x1800369DC (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___ @ 0x1800E6F68 (wil--details--lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___--_lambda_call__lambda_ef37.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::StartMinimizeAnimationForDisplayChange(CTopLevelWindow3D *this, __int64 a2)
{
  int started; // eax
  unsigned int v4; // edi
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled((__int64)this, a2) )
  {
    *(_QWORD *)v7 = this;
    v8 = 1;
    *((_BYTE *)this + 617) = 1;
    started = CTopLevelWindow3D::StartAnimation((__int64)this, 3);
    v4 = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)started);
      wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___((__int64 *)v7);
      return v4;
    }
    v6 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F3,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v6);
      *((_BYTE *)this + 617) = 0;
      return v4;
    }
    *((_BYTE *)this + 617) = 0;
  }
  return 0LL;
}
