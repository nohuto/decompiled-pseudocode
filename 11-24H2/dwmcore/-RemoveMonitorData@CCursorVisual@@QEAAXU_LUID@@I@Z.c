/*
 * XREFs of ?RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z @ 0x18026C7A4
 * Callers:
 *     ?ClearHardwareCursor@COverlayContext@@AEAAXXZ @ 0x180269FC4 (-ClearHardwareCursor@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ?erase@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x18026D5C0 (-erase@-$vector@VMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@Q.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x1802B2E40 (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VMonito.c)
 *     ?HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z @ 0x1802B2FFC (-HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z.c)
 */

void __fastcall CCursorVisual::RemoveMonitorData(CCursorVisual *this, struct _LUID a2, unsigned int a3)
{
  __int64 v3; // rdi
  struct CCursorState::MonitorData *v4; // rbx
  CCursorState *v5; // rcx
  struct CCursorState::MonitorData *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 88);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorState::FindMonitorData)(v3, &v6, a2, a3);
  v4 = v6;
  if ( v6 != *(struct CCursorState::MonitorData **)(v3 + 96) )
  {
    EnterCriticalSection(&g_CursorManager);
    CCursorState::HideHardwareShape(v5, v4);
    std::vector<CCursorState::MonitorData>::erase(v3 + 88, &v6, v4);
    LeaveCriticalSection(&g_CursorManager);
  }
}
