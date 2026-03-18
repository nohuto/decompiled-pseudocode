/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402C86F0
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 * Callees:
 *     IncCompositedVisWindows @ 0x14002FE18 (IncCompositedVisWindows.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  IncCompositedVisWindows((__int64)a1);
}
