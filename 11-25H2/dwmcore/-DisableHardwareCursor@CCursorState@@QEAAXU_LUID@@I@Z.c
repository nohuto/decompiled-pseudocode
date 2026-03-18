/*
 * XREFs of ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x1802BC0DC
 * Callers:
 *     ?DisableHardwareCursor@COverlayContext@@AEAAXXZ @ 0x18020F5D0 (-DisableHardwareCursor@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Move_unchecked@PEAUMonitorData@CCursorState@@PEAU12@@std@@YAPEAUMonitorData@CCursorState@@PEAU12@00@Z @ 0x1802BAA8C (--$_Move_unchecked@PEAUMonitorData@CCursorState@@PEAU12@@std@@YAPEAUMonitorData@CCursorState@@PE.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x1802BC558 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x1802BC5C8 (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UMonito.c)
 */

void __fastcall CCursorState::DisableHardwareCursor(CCursorState *this, struct _LUID a2, unsigned int a3)
{
  struct CCursorState::MonitorData *v4; // rbx
  CCursorState *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  struct CCursorState::MonitorData *v7; // [rsp+30h] [rbp+8h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorState::FindMonitorData)(this, &v7, a2, a3);
  v4 = v7;
  if ( v7 != *((struct CCursorState::MonitorData **)this + 12) )
  {
    EnterCriticalSection(&g_CursorManager);
    CCursorState::EnsureHardwareOverlayCleared(v5, v4);
    std::_Move_unchecked<CCursorState::MonitorData *,CCursorState::MonitorData *>(
      (__int64)v4 + 128,
      *((_QWORD *)this + 12),
      v4);
    v6 = *(std::_Ref_count_base **)(*((_QWORD *)this + 12) - 24LL);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    *((_QWORD *)this + 12) -= 128LL;
    LeaveCriticalSection(&g_CursorManager);
  }
}
