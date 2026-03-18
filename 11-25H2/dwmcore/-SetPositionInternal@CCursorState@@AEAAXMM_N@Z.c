/*
 * XREFs of ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x1802BD3BC
 * Callers:
 *     ?SetPosition@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJUtagPOINT@@@Z @ 0x1802841A0 (-SetPosition@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJUtagPOINT@@@Z.c)
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x1802BD350 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802BD18C (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x1802BDDAC (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 */

void __fastcall CCursorState::SetPositionInternal(CCursorState *this, float a2, float a3, char a4)
{
  char v6; // si
  __int64 v7; // rbp
  __int64 i; // rdi

  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((float *)this + 14) || a3 != *((float *)this + 15) )
  {
    v6 = *((_BYTE *)this + 82)
      || *((_BYTE *)this + 19) && *((int *)this + 6) > 0 && !*((_QWORD *)this + 33)
      || *((_BYTE *)this + 112);
    *((float *)this + 14) = a2;
    *((float *)this + 15) = a3;
    *((_BYTE *)this + 21) = 1;
    v7 = *((_QWORD *)this + 12);
    for ( i = *((_QWORD *)this + 11); i != v7; i += 128LL )
    {
      if ( *(_QWORD *)(i + 96) )
      {
        CCursorState::UpdateHardwareCursorOverlay(this, (struct CCursorState::MonitorData *)i, 0);
        if ( *(_QWORD *)(i + 96) )
          v6 |= g_disableHardwareCursors;
        else
          v6 = 1;
      }
    }
    if ( a4 && v6 )
      CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
