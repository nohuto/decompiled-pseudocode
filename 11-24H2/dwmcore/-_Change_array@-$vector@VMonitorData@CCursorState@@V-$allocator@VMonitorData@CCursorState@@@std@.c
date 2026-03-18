/*
 * XREFs of ?_Change_array@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAXQEAVMonitorData@CCursorState@@_K1@Z @ 0x1802B4B3C
 * Callers:
 *     ??$_Emplace_reallocate@VMonitorData@CCursorState@@@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAPEAVMonitorData@CCursorState@@QEAV23@$$QEAV23@@Z @ 0x1802B0AA0 (--$_Emplace_reallocate@VMonitorData@CCursorState@@@-$vector@VMonitorData@CCursorState@@V-$alloca.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursorState@@QEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B0958 (--$_Destroy_range@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursor.c)
 */

__int64 __fastcall std::vector<CCursorState::MonitorData>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(v6, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, 32 * ((a1[2] - *a1) >> 5));
  }
  *a1 = a2;
  a1[1] = a2 + 160 * a3;
  result = a2 + 160 * a4;
  a1[2] = result;
  return result;
}
