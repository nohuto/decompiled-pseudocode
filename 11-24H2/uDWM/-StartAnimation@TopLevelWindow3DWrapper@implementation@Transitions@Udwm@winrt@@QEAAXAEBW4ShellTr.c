/*
 * XREFs of ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z @ 0x1800803F4
 * Callers:
 *     ?StartAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHHURect@Foundation@Windows@3@@Z @ 0x1800803C0 (-StartAnimation@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopL.c)
 * Callees:
 *     ?StartAnimationForMoveResizeTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRECT@@@Z @ 0x18008049C (-StartAnimationForMoveResizeTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRE.c)
 *     ?ConvertShellTransitionToAnimationType@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@CA?AW4WindowAnimationType@CTopLevelWindow3D@@W4ShellTransitionType@345@@Z @ 0x18008053C (-ConvertShellTransitionToAnimationType@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@w.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DEEFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::StartAnimation(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        const enum winrt::Udwm::Transitions::ShellTransitionType *a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  float v4; // xmm1_4
  __int64 v5; // rbx
  __int64 v6; // rcx
  float v7; // xmm0_4
  int v8; // eax
  float v9; // xmm1_4
  unsigned int v10; // eax
  int started; // eax
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((float *)a3 + 1);
  v5 = *((_QWORD *)this + 4);
  v6 = *(unsigned int *)a2;
  v7 = *(float *)a3 + *((float *)a3 + 2);
  v12[0] = (int)*(float *)a3;
  v8 = (int)v4;
  v9 = v4 + *((float *)a3 + 3);
  v12[1] = v8;
  v12[2] = (int)v7;
  v12[3] = (int)v9;
  v10 = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::ConvertShellTransitionToAnimationType(v6);
  started = CTopLevelWindow3D::StartAnimationForMoveResizeTransition(v5, v10, v12);
  if ( started < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.toplevelwindow3dwrapper.cpp",
      (const char *)(unsigned int)started,
      v12[0]);
  CTopLevelWindow::SetSuppressBorderUpdates(
    *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)this + 4) + 288LL) + 440LL),
    0);
}
