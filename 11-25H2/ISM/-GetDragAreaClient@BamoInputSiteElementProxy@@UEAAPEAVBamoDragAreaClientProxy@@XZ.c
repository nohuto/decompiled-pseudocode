/*
 * XREFs of ?GetDragAreaClient@BamoInputSiteElementProxy@@UEAAPEAVBamoDragAreaClientProxy@@XZ @ 0x180059160
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800595E0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoDragAreaClientProxy *__fastcall BamoInputSiteElementProxy::GetDragAreaClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoDragAreaClientProxy *)*((_QWORD *)this + 19);
}
