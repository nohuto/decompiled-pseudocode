/*
 * XREFs of PopHiberNotificationMarkBootPhaseCallback @ 0x140B5F310
 * Callers:
 *     <none>
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

void __fastcall PopHiberNotificationMarkBootPhaseCallback(__int64 a1, void *a2, ULONG_PTR a3, ULONG Tag)
{
  PoSetHiberRange(0LL, 0x10000u, a2, a3, Tag);
}
