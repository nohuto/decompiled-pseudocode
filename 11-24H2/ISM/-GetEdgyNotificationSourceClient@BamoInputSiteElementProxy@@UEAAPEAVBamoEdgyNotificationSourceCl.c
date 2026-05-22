/*
 * XREFs of ?GetEdgyNotificationSourceClient@BamoInputSiteElementProxy@@UEAAPEAVBamoEdgyNotificationSourceClientProxy@@XZ @ 0x180059240
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoEdgyNotificationSourceClientProxy *__fastcall BamoInputSiteElementProxy::GetEdgyNotificationSourceClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoEdgyNotificationSourceClientProxy *)*((_QWORD *)this + 24);
}
