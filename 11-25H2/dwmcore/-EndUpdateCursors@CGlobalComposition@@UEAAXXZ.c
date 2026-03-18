/*
 * XREFs of ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x180031980
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x18025B494 (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CGlobalComposition::EndUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rdi
  CCursorVisual **i; // rbx

  v1 = (CCursorVisual **)*((_QWORD *)this + 820);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 819); i != v1; ++i )
    CCursorVisual::SetNotificationMode(*i);
}
