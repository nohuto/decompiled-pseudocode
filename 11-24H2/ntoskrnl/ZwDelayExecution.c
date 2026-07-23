/*
 * XREFs of ZwDelayExecution @ 0x1406A7A30
 * Callers:
 *     IovUnloadDrivers @ 0x140B8478C (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}
