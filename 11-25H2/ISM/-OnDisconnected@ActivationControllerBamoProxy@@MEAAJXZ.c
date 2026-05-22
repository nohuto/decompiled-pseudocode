/*
 * XREFs of ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18006D660
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D688 (-UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D738 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnDisconnected(ActivationControllerBamoProxy *this)
{
  ForegroundManager *v2; // rcx

  ISMStatics::GetForegroundManager();
  ForegroundManager::UnregisterActivationController(v2, this);
  return 0LL;
}
