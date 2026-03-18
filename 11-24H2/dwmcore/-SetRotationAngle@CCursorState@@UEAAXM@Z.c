/*
 * XREFs of ?SetRotationAngle@CCursorState@@UEAAXM@Z @ 0x1802B4300
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetRotationAngle(CCursorState *this, float a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - *((float *)this + 48)) & _xmm) > 0.0000011920929 )
  {
    *((float *)this + 7) = a2;
    *((_BYTE *)this + 22) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
