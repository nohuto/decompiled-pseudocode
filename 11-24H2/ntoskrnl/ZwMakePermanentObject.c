/*
 * XREFs of ZwMakePermanentObject @ 0x1406A96B0
 * Callers:
 *     NtCreateCpuPartition @ 0x140775A00 (NtCreateCpuPartition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMakePermanentObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
