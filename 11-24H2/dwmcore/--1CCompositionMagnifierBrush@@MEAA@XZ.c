/*
 * XREFs of ??1CCompositionMagnifierBrush@@MEAA@XZ @ 0x180295AD8
 * Callers:
 *     ??_GCCompositionMagnifierBrush@@MEAAPEAXI@Z @ 0x180275730 (--_GCCompositionMagnifierBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ @ 0x180297380 (-UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ.c)
 */

void __fastcall CCompositionMagnifierBrush::~CCompositionMagnifierBrush(CCompositionMagnifierBrush *this)
{
  *(_QWORD *)this = &CCompositionMagnifierBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCompositionMagnifierBrush::`vftable'{for `IBrushChangeNotification'};
  CCompositionMagnifierBrush::UnregisterCursorListener(this);
  CBrush::~CBrush(this);
}
