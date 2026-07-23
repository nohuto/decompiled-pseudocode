/*
 * XREFs of NtCancelTimer2 @ 0x1404859B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1403B07F0 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  return ExpSetTimer2(TimerHandle, 0LL, 0LL, 0LL);
}
