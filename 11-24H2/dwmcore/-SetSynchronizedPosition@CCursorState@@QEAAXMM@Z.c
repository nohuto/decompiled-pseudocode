/*
 * XREFs of ?SetSynchronizedPosition@CCursorState@@QEAAXMM@Z @ 0x1802B4680
 * Callers:
 *     ?SetPosition@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJUtagPOINT@@@Z @ 0x180279580 (-SetPosition@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCursorState::SetSynchronizedPosition(CCursorState *this, float a2, float a3)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((float *)this + 14) || a3 != *((float *)this + 15) )
  {
    *((float *)this + 14) = a2;
    *((float *)this + 15) = a3;
    *((_BYTE *)this + 21) = 1;
  }
  LeaveCriticalSection(&g_CursorManager);
}
