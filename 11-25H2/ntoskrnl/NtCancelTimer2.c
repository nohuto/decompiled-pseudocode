/*
 * XREFs of NtCancelTimer2 @ 0x14036EF30
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140370A80 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  return ExpSetTimer2(TimerHandle);
}
