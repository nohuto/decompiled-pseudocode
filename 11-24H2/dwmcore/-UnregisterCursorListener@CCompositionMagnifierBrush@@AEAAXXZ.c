/*
 * XREFs of ?UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ @ 0x180297380
 * Callers:
 *     ??1CCompositionMagnifierBrush@@MEAA@XZ @ 0x180295AD8 (--1CCompositionMagnifierBrush@@MEAA@XZ.c)
 *     ?UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ @ 0x1802973A8 (-UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022FFC4 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CCompositionMagnifierBrush::UnregisterCursorListener(CCompositionMagnifierBrush *this)
{
  if ( *((_BYTE *)this + 206) )
  {
    *((_BYTE *)this + 206) = 0;
    CComposition::RemoveCursorVisualListener(this, this);
  }
}
