/*
 * XREFs of ZwEnumerateSystemEnvironmentValuesEx @ 0x1406A90D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationClass);
}
