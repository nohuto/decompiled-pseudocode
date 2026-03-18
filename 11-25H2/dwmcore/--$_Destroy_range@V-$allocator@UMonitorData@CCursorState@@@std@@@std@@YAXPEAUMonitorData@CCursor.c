/*
 * XREFs of ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x1802BA428
 * Callers:
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x1802BA5E0 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 *     ??$_Uninitialized_move@PEAUMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAPEAUMonitorData@CCursorState@@QEAU12@0PEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x1802BB0C8 (--$_Uninitialized_move@PEAUMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@st.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x1802BB4EC (--1CCursorState@@UEAA@XZ.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802BBDD8 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
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
      v4 = *(std::_Ref_count_base **)(v3 + 104);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 128LL;
    }
    while ( v3 != a2 );
  }
}
