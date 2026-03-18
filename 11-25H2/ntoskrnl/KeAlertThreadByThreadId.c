/*
 * XREFs of KeAlertThreadByThreadId @ 0x1404B9534
 * Callers:
 *     VslCallEnclave @ 0x140A059FC (VslCallEnclave.c)
 *     RtlRunOnceComplete @ 0x140A518B0 (RtlRunOnceComplete.c)
 * Callees:
 *     KeAlertThreadByThreadIdEx @ 0x1402807E0 (KeAlertThreadByThreadIdEx.c)
 */

char __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  return KeAlertThreadByThreadIdEx(a1, 0LL);
}
