/*
 * XREFs of ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x18004C6A0
 * Callers:
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18004AE00 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x18004AF40 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z @ 0x1800803F4 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::SetSuppressBorderUpdates(CTopLevelWindow *this, char a2)
{
  if ( *((_BYTE *)this + 832) != a2 )
  {
    *((_BYTE *)this + 832) = a2;
    if ( !a2 )
      CVisual::SetDirtyFlags(this, 0x100000);
  }
}
