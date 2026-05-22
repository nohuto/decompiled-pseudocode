/*
 * XREFs of ?GetDragSourceClient@BamoInputSiteElementProxy@@UEAAPEAVBamoDragSourceClientProxy@@XZ @ 0x180059030
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoDragSourceClientProxy *__fastcall BamoInputSiteElementProxy::GetDragSourceClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoDragSourceClientProxy *)*((_QWORD *)this + 21);
}
