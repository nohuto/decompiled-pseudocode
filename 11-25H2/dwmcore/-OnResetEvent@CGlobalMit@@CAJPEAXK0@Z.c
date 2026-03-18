/*
 * XREFs of ?OnResetEvent@CGlobalMit@@CAJPEAXK0@Z @ 0x18022F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ExitRunLoop@CGlobalMit@@AEAAXXZ @ 0x18022F6D8 (-ExitRunLoop@CGlobalMit@@AEAAXXZ.c)
 */

__int64 __fastcall CGlobalMit::OnResetEvent(CGlobalMit *a1, __int64 a2, void *a3)
{
  CGlobalMit::ExitRunLoop(a1);
  return 0LL;
}
