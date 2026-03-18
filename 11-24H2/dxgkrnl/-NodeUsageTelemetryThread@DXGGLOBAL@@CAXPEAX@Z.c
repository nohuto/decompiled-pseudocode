/*
 * XREFs of ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401D5D80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ @ 0x1401D69E0 (-SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGGLOBAL::NodeUsageTelemetryThread(_QWORD *P)
{
  DXGGLOBAL *v1; // rsi
  int v3; // eax
  __int64 v4; // rbx

  v1 = (DXGGLOBAL *)P[4];
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(v1, DXGGLOBAL::NodeUsageTelemetryCallback, 0LL, 2LL);
  if ( v3 < 0 )
  {
    v4 = v3;
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 1359;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to iterate adapters: 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGGLOBAL::SetNodeUsageTelemetryTimer(v1);
  ExFreePoolWithTag(P, 0x4B677844u);
}
