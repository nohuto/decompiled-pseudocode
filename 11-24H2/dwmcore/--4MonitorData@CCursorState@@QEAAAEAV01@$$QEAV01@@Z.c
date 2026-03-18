/*
 * XREFs of ??4MonitorData@CCursorState@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026880C
 * Callers:
 *     ?erase@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x18026D5C0 (-erase@-$vector@VMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@Q.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall CCursorState::MonitorData::operator=(__int64 a1, __int64 a2)
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
  std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 112), (__int64 *)(a2 + 112));
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 132) = *(_QWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_BYTE *)(a1 + 156) = *(_BYTE *)(a2 + 156);
  return a1;
}
