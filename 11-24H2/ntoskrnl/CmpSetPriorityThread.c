/*
 * XREFs of CmpSetPriorityThread @ 0x1404B2578
 * Callers:
 *     CmpDoFileWrite @ 0x140A4F8F0 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall CmpSetPriorityThread(ULONG_PTR a1, int a2, __int64 a3)
{
  return KeSetActualBasePriorityThread(a1, a2, a3);
}
