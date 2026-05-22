/*
 * XREFs of ?GetResizeControllerClient@BamoInputSiteElementProxy@@UEAAPEAVBamoResizeControllerClientProxy@@XZ @ 0x180058F10
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoResizeControllerClientProxy *__fastcall BamoInputSiteElementProxy::GetResizeControllerClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoResizeControllerClientProxy *)*((_QWORD *)this + 35);
}
