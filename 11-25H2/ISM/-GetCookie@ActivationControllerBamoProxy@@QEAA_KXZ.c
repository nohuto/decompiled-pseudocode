/*
 * XREFs of ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x18006D82C
 * Callers:
 *     ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D688 (-UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?RegisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D780 (-RegisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 * Callees:
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D918 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

unsigned __int64 __fastcall ActivationControllerBamoProxy::GetCookie(ActivationControllerBamoProxy *this)
{
  return *((unsigned int *)this + 10)
       + ((unsigned __int64)Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)this + 4) + 16LL)) << 32);
}
