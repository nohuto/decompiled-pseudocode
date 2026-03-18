/*
 * XREFs of ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x1802BA5E0
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x1802BD8E8 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1801EC758 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x1802BA428 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 *     ??$_Uninitialized_move@PEAUMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAPEAUMonitorData@CCursorState@@QEAU12@0PEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x1802BB0C8 (--$_Uninitialized_move@PEAUMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@st.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z @ 0x1802BB410 (--0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z.c)
 */

unsigned __int64 __fastcall std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 result; // rax

  v3 = 0x1FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 7;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 7;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<128>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFF80uLL);
  v15 = v13;
  CCursorState::MonitorData::MonitorData(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CCursorState::MonitorData *>(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 128;
    v18 = a2;
  }
  std::_Uninitialized_move<CCursorState::MonitorData *>(v18, v16, v17);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(*a1, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFF80uLL);
  }
  *a1 = v15;
  result = v14;
  a1[1] = v15 + (v9 << 7);
  a1[2] = v15 + (v3 << 7);
  return result;
}
