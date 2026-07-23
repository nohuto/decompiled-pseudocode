/*
 * XREFs of CmpSetPriorityThread @ 0x1404ACE08
 * Callers:
 *     CmpDoFileWrite @ 0x140A466A0 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall CmpSetPriorityThread(ULONG_PTR a1, int a2)
{
  return KeSetActualBasePriorityThread(a1, a2);
}
