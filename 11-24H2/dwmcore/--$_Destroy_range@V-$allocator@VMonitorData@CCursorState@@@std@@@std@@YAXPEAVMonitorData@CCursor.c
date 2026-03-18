/*
 * XREFs of ??$_Destroy_range@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursorState@@QEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B0958
 * Callers:
 *     ??$_Uninitialized_move@PEAVMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAPEAVMonitorData@CCursorState@@QEAV12@0PEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B1524 (--$_Uninitialized_move@PEAVMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@st.c)
 *     ??1?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA@XZ @ 0x1802B1978 (--1-$vector@VMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA@.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802B2398 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAXQEAVMonitorData@CCursorState@@_K1@Z @ 0x1802B4B3C (-_Change_array@-$vector@VMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 120);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 160LL;
    }
    while ( v3 != a2 );
  }
}
