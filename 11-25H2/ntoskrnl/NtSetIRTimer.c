/*
 * XREFs of NtSetIRTimer @ 0x14036EC50
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140370A80 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle);
}
