/*
 * XREFs of ??1?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA@XZ @ 0x1802B1978
 * Callers:
 *     ??1CCursorState@@UEAA@XZ @ 0x1802B19D8 (--1CCursorState@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursorState@@QEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B0958 (--$_Destroy_range@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursor.c)
 */

void __fastcall std::vector<CCursorState::MonitorData>::~vector<CCursorState::MonitorData>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(v2, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, 32 * ((a1[2] - *a1) >> 5));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
