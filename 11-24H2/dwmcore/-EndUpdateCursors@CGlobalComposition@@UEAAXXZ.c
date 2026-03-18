/*
 * XREFs of ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1800F34C0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180290BB8 (-UpdateNotificationMode@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CGlobalComposition::EndUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rdi
  CCursorVisual **i; // rbx

  v1 = (CCursorVisual **)*((_QWORD *)this + 817);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 816); i != v1; ++i )
    CCursorVisual::UpdateNotificationMode(*i);
}
