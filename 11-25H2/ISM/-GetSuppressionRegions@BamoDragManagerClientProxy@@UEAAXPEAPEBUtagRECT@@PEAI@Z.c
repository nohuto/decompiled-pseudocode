/*
 * XREFs of ?GetSuppressionRegions@BamoDragManagerClientProxy@@UEAAXPEAPEBUtagRECT@@PEAI@Z @ 0x1801155E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800595E0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

void __fastcall BamoDragManagerClientProxy::GetSuppressionRegions(
        BamoDragManagerClientProxy *this,
        const struct tagRECT **a2,
        unsigned int *a3)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  *a2 = (const struct tagRECT *)*((_QWORD *)this + 7);
  *a3 = *((_DWORD *)this + 16);
}
