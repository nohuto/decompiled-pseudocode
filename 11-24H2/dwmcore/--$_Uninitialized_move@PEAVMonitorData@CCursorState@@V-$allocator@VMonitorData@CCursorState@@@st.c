/*
 * XREFs of ??$_Uninitialized_move@PEAVMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAPEAVMonitorData@CCursorState@@QEAV12@0PEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B1524
 * Callers:
 *     ??$_Emplace_reallocate@VMonitorData@CCursorState@@@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAPEAVMonitorData@CCursorState@@QEAV23@$$QEAV23@@Z @ 0x1802B0AA0 (--$_Emplace_reallocate@VMonitorData@CCursorState@@@-$vector@VMonitorData@CCursorState@@V-$alloca.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursorState@@QEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B0958 (--$_Destroy_range@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursor.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z @ 0x1802B1814 (--0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move<CCursorState::MonitorData *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      CCursorState::MonitorData::MonitorData(a3, v5);
      a3 += v6;
      v5 = v6 + v7;
    }
    while ( v5 != v8 );
  }
  std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(a3, a3);
  return a3;
}
