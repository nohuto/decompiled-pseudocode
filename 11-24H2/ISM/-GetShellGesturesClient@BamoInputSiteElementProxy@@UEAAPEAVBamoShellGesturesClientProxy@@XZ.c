/*
 * XREFs of ?GetShellGesturesClient@BamoInputSiteElementProxy@@UEAAPEAVBamoShellGesturesClientProxy@@XZ @ 0x1800593C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoShellGesturesClientProxy *__fastcall BamoInputSiteElementProxy::GetShellGesturesClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoShellGesturesClientProxy *)*((_QWORD *)this + 36);
}
