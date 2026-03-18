/*
 * XREFs of ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1402C86D0
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 * Callees:
 *     DecrementCompositedCount @ 0x14028559C (DecrementCompositedCount.c)
 */

void __fastcall DecComposited(struct tagWND *a1, __int64 a2)
{
  DecrementCompositedCount((__int64)a1, a2);
}
