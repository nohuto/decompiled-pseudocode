/*
 * XREFs of ?GetLightDismissClient@BamoInputSiteElementProxy@@UEAAPEAVBamoLightDismissClientProxy@@XZ @ 0x180059400
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800595E0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoLightDismissClientProxy *__fastcall BamoInputSiteElementProxy::GetLightDismissClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoLightDismissClientProxy *)*((_QWORD *)this + 29);
}
