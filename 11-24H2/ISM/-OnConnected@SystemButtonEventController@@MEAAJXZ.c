/*
 * XREFs of ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x1800990E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180075688 (-RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x1800758B4 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 */

__int64 __fastcall SystemButtonEventController::OnConnected(SystemButtonEventController *this)
{
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax

  SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
  SystemButtonEventControllerManager::RegisterController(SystemButtonEventControllerManager, this);
  return 0LL;
}
