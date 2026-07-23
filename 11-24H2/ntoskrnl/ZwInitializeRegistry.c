/*
 * XREFs of ZwInitializeRegistry @ 0x1406A94D0
 * Callers:
 *     NtInitializeRegistry @ 0x1407D01A0 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwInitializeRegistry(USHORT BootCondition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootCondition);
}
