/*
 * XREFs of ?SetCrosshairProperties@CCursorState@@UEAAXK@Z @ 0x1802B3C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetCrosshairProperties(CCursorState *this, int a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((_DWORD *)this + 9) )
  {
    *((_DWORD *)this + 9) = a2;
    *((_BYTE *)this + 16) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
