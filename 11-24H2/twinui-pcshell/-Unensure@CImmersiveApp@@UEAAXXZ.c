/*
 * XREFs of ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x180305F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Unensure(CImmersiveApp *this)
{
  *((_BYTE *)this + 476) = 0;
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)((char *)this - 112));
}
