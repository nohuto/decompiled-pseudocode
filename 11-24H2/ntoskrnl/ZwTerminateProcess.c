/*
 * XREFs of ZwTerminateProcess @ 0x1406A6990
 * Callers:
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus);
}
