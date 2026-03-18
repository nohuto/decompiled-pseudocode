/*
 * XREFs of CmpSetPriorityThread @ 0x1404B1590
 * Callers:
 *     CmpDoFileWrite @ 0x14091083C (CmpDoFileWrite.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall CmpSetPriorityThread(ULONG_PTR a1, int a2)
{
  return KeSetActualBasePriorityThread(a1, a2);
}
