/*
 * XREFs of ?NodeUsageTelemetryCallback@DXGGLOBAL@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401D0A20
 * Callers:
 *     <none>
 * Callees:
 *     ?NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z @ 0x140190F24 (-NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::NodeUsageTelemetryCallback(struct DXGADAPTER *a1, void *a2)
{
  DXGADAPTER::NodeUsageTelemetry(a1);
  return 0LL;
}
