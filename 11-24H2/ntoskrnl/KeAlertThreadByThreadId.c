/*
 * XREFs of KeAlertThreadByThreadId @ 0x1404B8BB0
 * Callers:
 *     VslCallEnclave @ 0x140A07B64 (VslCallEnclave.c)
 *     RtlRunOnceComplete @ 0x140A561F0 (RtlRunOnceComplete.c)
 * Callees:
 *     KeAlertThreadByThreadIdEx @ 0x140338518 (KeAlertThreadByThreadIdEx.c)
 */

char __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  return KeAlertThreadByThreadIdEx(a1, 0LL);
}
