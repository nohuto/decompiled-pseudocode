/*
 * XREFs of ZwTerminateJobObject @ 0x1406AADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
