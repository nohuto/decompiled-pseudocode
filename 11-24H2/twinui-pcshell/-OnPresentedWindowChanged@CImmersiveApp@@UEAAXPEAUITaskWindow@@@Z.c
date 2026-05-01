/*
 * XREFs of ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x18022CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::OnPresentedWindowChanged(CImmersiveApp *this, struct ITaskWindow *a2)
{
  CImmersiveApp::_QueuePresentationChangeNotification((__int64)this - 112, 0);
}
