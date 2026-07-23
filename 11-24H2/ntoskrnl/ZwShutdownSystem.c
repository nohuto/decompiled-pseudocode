/*
 * XREFs of ZwShutdownSystem @ 0x1406AAC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwShutdownSystem(SHUTDOWN_ACTION Action)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Action);
}
