/*
 * XREFs of EditionIsAppForeground @ 0x140277930
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140252698 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsAppForeground(const struct tagWND *a1, __int64 a2)
{
  return CoreWindowProp::CompositeAppHasForeground(a1, a2);
}
