/*
 * XREFs of ??$_Emplace_reallocate@VMonitorData@CCursorState@@@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAPEAVMonitorData@CCursorState@@QEAV23@$$QEAV23@@Z @ 0x1802B0AA0
 * Callers:
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ??$_Uninitialized_move@PEAVMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAPEAVMonitorData@CCursorState@@QEAV12@0PEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B1524 (--$_Uninitialized_move@PEAVMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@st.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z @ 0x1802B1814 (--0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z.c)
 *     ?_Change_array@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAXQEAVMonitorData@CCursorState@@_K1@Z @ 0x1802B4B3C (-_Change_array@-$vector@VMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@std@.c)
 */

__int64 __fastcall std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx

  v6 = (a2 - *a1) / 160;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 5);
  if ( v7 == 0x199999999999999LL )
    std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
  v8 = v7 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 5);
  v10 = v9 >> 1;
  if ( v9 <= 0x199999999999999LL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x199999999999999LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x199999999999999LL;
  }
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(160 * v11);
  CCursorState::MonitorData::MonitorData(v12 + 160 * v6, a3);
  v13 = a1[1];
  v14 = v12;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<CCursorState::MonitorData *>(v15, a2, v12);
    v13 = a1[1];
    v14 = v12 + 160 * v6 + 160;
    v15 = a2;
  }
  std::_Uninitialized_move<CCursorState::MonitorData *>(v15, v13, v14);
  std::vector<CCursorState::MonitorData>::_Change_array(a1, v12, v8, v11);
  return v12 + 160 * v6;
}
