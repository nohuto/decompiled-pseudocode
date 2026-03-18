/*
 * XREFs of ?erase@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x18026D5C0
 * Callers:
 *     ?RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z @ 0x18026C7A4 (-RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4MonitorData@CCursorState@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026880C (--4MonitorData@CCursorState@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::vector<CCursorState::MonitorData>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  std::_Ref_count_base *v8; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 160; i != v3; i += 160LL )
    CCursorState::MonitorData::operator=(i - 160, i);
  v8 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 8) - 40LL);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  *(_QWORD *)(a1 + 8) -= 160LL;
  result = a2;
  *a2 = a3;
  return result;
}
