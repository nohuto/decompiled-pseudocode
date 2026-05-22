/*
 * XREFs of ?GetSystemButtonEventController@BamoInputSiteElementProxy@@UEAAPEAVBamoSystemButtonEventControllerProxy@@XZ @ 0x1800594C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800595E0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoSystemButtonEventControllerProxy *__fastcall BamoInputSiteElementProxy::GetSystemButtonEventController(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoSystemButtonEventControllerProxy *)*((_QWORD *)this + 37);
}
