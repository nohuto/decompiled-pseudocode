/*
 * XREFs of ?GetSuppressionRegions@BamoShellGesturesClientProxy@@UEAAXPEAPEBUtagRECT@@PEAI@Z @ 0x180159920
 * Callers:
 *     _lambda_c192c8e12fd8d97ede3f075e8e800885_::operator() @ 0x180159268 (_lambda_c192c8e12fd8d97ede3f075e8e800885_--operator().c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
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
