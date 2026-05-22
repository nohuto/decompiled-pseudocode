/*
 * XREFs of ?GetLightDismissClient@BamoInputSiteElementProxy@@UEAAPEAVBamoLightDismissClientProxy@@XZ @ 0x180059210
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoLightDismissClientProxy *__fastcall BamoInputSiteElementProxy::GetLightDismissClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoLightDismissClientProxy *)*((_QWORD *)this + 29);
}
