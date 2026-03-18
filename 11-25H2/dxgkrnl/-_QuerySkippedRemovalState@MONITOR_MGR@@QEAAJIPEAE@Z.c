/*
 * XREFs of ?_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z @ 0x14026E00C
 * Callers:
 *     ?MonitorQuerySkippedRemovalState@@YAJPEAXIPEAE@Z @ 0x140267E7C (-MonitorQuerySkippedRemovalState@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_QuerySkippedRemovalState(MONITOR_MGR *this, unsigned int a2, bool *a3)
{
  __int64 v3; // rbx
  int MonitorInstance; // edi
  __int64 v7; // rcx
  char v8; // al
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v3 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1013;
  }
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v10, 0LL);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, (struct MONITOR_REF_ACCESSOR *)v10);
  if ( MonitorInstance >= 0 )
  {
    v7 = *(_QWORD *)(v11 + 264);
    if ( *(_BYTE *)(v7 + 8) )
      v8 = *(_BYTE *)(v7 + 57);
    else
      v8 = 0;
    *a3 = v8 != 0;
  }
  else
  {
    WdLogSingleEntry2(2LL, v3, this);
    WdLogGlobalForLineNumber = 1019;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v10);
  return (unsigned int)MonitorInstance;
}
