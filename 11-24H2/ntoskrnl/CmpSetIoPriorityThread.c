/*
 * XREFs of CmpSetIoPriorityThread @ 0x1404ADF88
 * Callers:
 *     CmpDoFileWrite @ 0x140A4F8F0 (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14020973C (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
