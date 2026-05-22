/*
 * XREFs of ?GetInputInjectionClient@BamoInputSiteElementProxy@@UEAAPEAVBamoInputInjectionClientProxy@@XZ @ 0x1800594F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800595E0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputInjectionClientProxy *__fastcall BamoInputSiteElementProxy::GetInputInjectionClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoInputInjectionClientProxy *)*((_QWORD *)this + 28);
}
