/*
 * XREFs of NtDelayExecution @ 0x1408A3820
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  KPROCESSOR_MODE PreviousMode; // cl
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)DelayInterval & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Interval = *DelayInterval;
  }
  else
  {
    Interval = *DelayInterval;
  }
  return KeDelayExecutionThread(PreviousMode, Alertable, &Interval);
}
