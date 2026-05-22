/*
 * XREFs of ?GetMPCInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoMPCInputObjectProxy@@XZ @ 0x180058DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoMPCInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetMPCInputObject(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoMPCInputObjectProxy *)*((_QWORD *)this + 33);
}
