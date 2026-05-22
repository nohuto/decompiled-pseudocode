/*
 * XREFs of ?GetCUIHostInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoCUIHostInputObjectProxy@@XZ @ 0x180058EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoCUIHostInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetCUIHostInputObject(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoCUIHostInputObjectProxy *)*((_QWORD *)this + 16);
}
