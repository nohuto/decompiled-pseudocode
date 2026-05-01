/*
 * XREFs of ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180303500
 * Callers:
 *     <none>
 * Callees:
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18030328C (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

void __fastcall CImmersiveApp::HandleGhostAnimationWaitCompleted(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted((CImmersiveApp *)((char *)this + 176));
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 112));
}
