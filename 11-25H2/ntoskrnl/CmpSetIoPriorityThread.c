/*
 * XREFs of CmpSetIoPriorityThread @ 0x1404AC948
 * Callers:
 *     CmpDoFileWrite @ 0x14091083C (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14020DFEC (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
