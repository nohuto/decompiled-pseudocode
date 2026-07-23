/*
 * XREFs of CmpSetIoPriorityThread @ 0x1404A8898
 * Callers:
 *     CmpDoFileWrite @ 0x140A466A0 (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140330D1C (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
