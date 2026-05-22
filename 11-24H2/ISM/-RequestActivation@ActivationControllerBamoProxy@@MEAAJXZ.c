/*
 * XREFs of ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B05E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800ADEA8 (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::RequestActivation(ActivationControllerBamoProxy *this)
{
  ForegroundManager *ForegroundManager; // rax

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::RequestActivation(ForegroundManager, this);
  return 0LL;
}
