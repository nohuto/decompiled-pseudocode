/*
 * XREFs of ?GetSuppressionRegions@BamoShellGesturesClientProxy@@UEAAXPEAPEBUtagRECT@@PEAI@Z @ 0x180157DB0
 * Callers:
 *     _lambda_a58c424b3d4133bc3d123157d89f0971_::operator() @ 0x180157098 (_lambda_a58c424b3d4133bc3d123157d89f0971_--operator().c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800595E0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

void __fastcall BamoShellGesturesClientProxy::GetSuppressionRegions(
        BamoShellGesturesClientProxy *this,
        const struct tagRECT **a2,
        unsigned int *a3)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  *a2 = (const struct tagRECT *)*((_QWORD *)this + 12);
  *a3 = *((_DWORD *)this + 26);
}
