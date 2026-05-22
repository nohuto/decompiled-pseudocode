/*
 * XREFs of ?GetEdgyDragSourceClient@BamoInputSiteElementProxy@@UEAAPEAVBamoEdgyDragSourceClientProxy@@XZ @ 0x180059520
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800595E0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoEdgyDragSourceClientProxy *__fastcall BamoInputSiteElementProxy::GetEdgyDragSourceClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoEdgyDragSourceClientProxy *)*((_QWORD *)this + 23);
}
