/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403C6F88
 * Callers:
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1401C1AF0 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403C6A70 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1403C7080 (-DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  char v7; // bl
  bool v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v7 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2389;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAdapter->IsCoreResourceSharedOwner()",
      2389LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 412);
  *(_DWORD *)(a1 + 20) = a3;
  LOBYTE(v10) = 0;
  v9 = 0;
  if ( (int)DmmIsStaticAndLeafTarget((void *const)a2, a3, (bool *)&v10, &v9) < 0
    || !(_BYTE)v10
    || !v9
    || *(int *)(a2 + 2736) < 0x2000 )
  {
    v7 = 0;
  }
  *(_BYTE *)(a1 + 30) = v7;
  return 0LL;
}
