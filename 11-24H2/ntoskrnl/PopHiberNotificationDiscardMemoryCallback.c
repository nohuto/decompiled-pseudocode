/*
 * XREFs of PopHiberNotificationDiscardMemoryCallback @ 0x140B5F2B0
 * Callers:
 *     <none>
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

void __fastcall PopHiberNotificationDiscardMemoryCallback(void *a1, void *a2, ULONG_PTR a3, ULONG Tag)
{
  PoSetHiberRange(a1, 0x8000u, a2, a3, Tag);
}
