/*
 * XREFs of HmgFree @ 0x140173F70
 * Callers:
 *     <none>
 * Callees:
 *     HmgFreeFast @ 0x1401C2310 (HmgFreeFast.c)
 */

__int64 __fastcall HmgFree(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return HmgFreeFast(*(_QWORD *)(SessionState + 88), a1);
}
