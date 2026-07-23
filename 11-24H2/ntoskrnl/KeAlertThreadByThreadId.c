/*
 * XREFs of KeAlertThreadByThreadId @ 0x1404B3500
 * Callers:
 *     VslCallEnclave @ 0x140A04094 (VslCallEnclave.c)
 *     RtlRunOnceComplete @ 0x140A4E140 (RtlRunOnceComplete.c)
 * Callees:
 *     KeAlertThreadByThreadIdEx @ 0x1402DE598 (KeAlertThreadByThreadIdEx.c)
 */

char __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  return KeAlertThreadByThreadIdEx(a1, 0LL);
}
