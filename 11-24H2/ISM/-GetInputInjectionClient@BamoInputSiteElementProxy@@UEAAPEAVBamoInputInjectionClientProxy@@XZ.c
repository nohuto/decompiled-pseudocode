/*
 * XREFs of ?GetInputInjectionClient@BamoInputSiteElementProxy@@UEAAPEAVBamoInputInjectionClientProxy@@XZ @ 0x180059300
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputInjectionClientProxy *__fastcall BamoInputSiteElementProxy::GetInputInjectionClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoInputInjectionClientProxy *)*((_QWORD *)this + 28);
}
