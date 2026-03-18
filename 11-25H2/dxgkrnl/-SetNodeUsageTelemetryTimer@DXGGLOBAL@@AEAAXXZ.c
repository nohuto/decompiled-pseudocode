/*
 * XREFs of ?SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ @ 0x1401D16B0
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401CF3EC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401D0A40 (-NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetNodeUsageTelemetryTimer(DXGGLOBAL *this)
{
  KeSetTimer(
    (PKTIMER)((char *)this + 305696),
    (LARGE_INTEGER)(-10000000LL * *((int *)this + 76462)),
    (PKDPC)((char *)this + 305760));
}
