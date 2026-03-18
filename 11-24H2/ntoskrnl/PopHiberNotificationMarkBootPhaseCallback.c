/*
 * XREFs of PopHiberNotificationMarkBootPhaseCallback @ 0x140B5D290
 * Callers:
 *     <none>
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 */

void __fastcall PopHiberNotificationMarkBootPhaseCallback(__int64 a1, void *a2, ULONG_PTR a3, ULONG Tag)
{
  PoSetHiberRange(0LL, 0x10000u, a2, a3, Tag);
}
