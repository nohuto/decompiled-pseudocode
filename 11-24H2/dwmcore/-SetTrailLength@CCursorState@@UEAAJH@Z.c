/*
 * XREFs of ?SetTrailLength@CCursorState@@UEAAJH@Z @ 0x1802B4700
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

__int64 __fastcall CCursorState::SetTrailLength(CCursorState *this, int a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  EnterCriticalSection(&g_CursorManager);
  if ( a2 <= 10 )
  {
    v4 = 0;
    v5 = 0;
    if ( a2 >= 0 )
      v5 = a2;
    if ( v5 != *((_DWORD *)this + 6) )
    {
      *((_DWORD *)this + 6) = v5;
      CCursorState::ScheduleCompositionPass(this);
    }
  }
  else
  {
    v4 = -2147024809;
  }
  LeaveCriticalSection(&g_CursorManager);
  return v4;
}
