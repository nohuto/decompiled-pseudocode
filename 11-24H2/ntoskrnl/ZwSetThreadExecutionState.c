/*
 * XREFs of ZwSetThreadExecutionState @ 0x1406AAB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&NewFlags);
}
