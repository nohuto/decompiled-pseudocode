/*
 * XREFs of ?GetUIAHitTestInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoUIAHitTestInputObjectProxy@@XZ @ 0x180059390
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoUIAHitTestInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetUIAHitTestInputObject(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoUIAHitTestInputObjectProxy *)*((_QWORD *)this + 38);
}
