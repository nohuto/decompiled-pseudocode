/*
 * XREFs of ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18006D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?RegisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D510 (-RegisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnConnected(ActivationControllerBamoProxy *this)
{
  ForegroundManager *ForegroundManager; // rax

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::RegisterActivationController(ForegroundManager, this);
  return 0LL;
}
