/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x14030F03C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x14030D570 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x14030F2A0 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1403DC5B4 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int8 IsUsingSimulatedMonitor; // si
  int v5; // edi
  int v6; // ebp
  unsigned int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  MONITOR_MGR *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF

  IsUsingSimulatedMonitor = 0;
  v5 = 0;
  v6 = 0;
  *a3 = 0;
  v19 = 0;
  v8 = a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  WdLogGlobalForLineNumber = 433;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 453;
    }
    v14 = *((_QWORD *)a1 + 390);
    if ( v14 )
    {
      v15 = *(MONITOR_MGR **)(v14 + 112);
      if ( v15 )
      {
        IsUsingSimulatedMonitor = MONITOR_MGR::_IsUsingSimulatedMonitor(v15);
      }
      else
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 470;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 457;
    }
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = a1;
  WdLogGlobalForLineNumber = 504;
  if ( a1 )
  {
    v16 = *((_QWORD *)a1 + 390);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 112);
      if ( v17 )
      {
        v6 = *(_DWORD *)(v17 + 32);
      }
      else
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 539;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 526;
    }
  }
  if ( IsUsingSimulatedMonitor )
  {
    if ( v6 == 1 )
    {
      v5 = DmmEnumClientVidPnPathTargetsFromSource(a1, v8, 0LL, &v19);
      if ( v5 >= 0 )
        return (unsigned int)IsTargetEmergencySimulatedMonitor(a1, v19, a3);
    }
  }
  return (unsigned int)v5;
}
