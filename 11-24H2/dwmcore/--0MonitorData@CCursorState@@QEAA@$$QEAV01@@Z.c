/*
 * XREFs of ??0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z @ 0x1802B1814
 * Callers:
 *     ??$_Emplace_reallocate@VMonitorData@CCursorState@@@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAPEAVMonitorData@CCursorState@@QEAV23@$$QEAV23@@Z @ 0x1802B0AA0 (--$_Emplace_reallocate@VMonitorData@CCursorState@@@-$vector@VMonitorData@CCursorState@@V-$alloca.c)
 *     ??$_Uninitialized_move@PEAVMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAPEAVMonitorData@CCursorState@@QEAV12@0PEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B1524 (--$_Uninitialized_move@PEAVMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@st.c)
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorState::MonitorData::MonitorData(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 12) = *(_OWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 28) = *(_OWORD *)(a2 + 28);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)(a2 + 44);
  *(_OWORD *)(a1 + 60) = *(_OWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 132) = *(_QWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_BYTE *)(a1 + 156) = *(_BYTE *)(a2 + 156);
  return a1;
}
