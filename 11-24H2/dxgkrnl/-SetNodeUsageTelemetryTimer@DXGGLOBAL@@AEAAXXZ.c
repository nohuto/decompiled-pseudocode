/*
 * XREFs of ?SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ @ 0x1401D69E0
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401D5D80 (-NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetNodeUsageTelemetryTimer(DXGGLOBAL *this)
{
  KeSetTimer(
    (PKTIMER)((char *)this + 305776),
    (LARGE_INTEGER)(-10000000LL * *((int *)this + 76482)),
    (PKDPC)((char *)this + 305840));
}
