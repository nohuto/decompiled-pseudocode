/*
 * XREFs of ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x1802B4130
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetIsTrailEnabled(CCursorState *this, char a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((_BYTE *)this + 19) )
  {
    *((_BYTE *)this + 19) = a2;
    if ( a2 )
    {
      if ( *((int *)this + 6) > 0 )
        CCursorState::ScheduleCompositionPass(this);
    }
  }
  LeaveCriticalSection(&g_CursorManager);
}
