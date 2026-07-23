/*
 * XREFs of ZwMakeTemporaryObject @ 0x1406A96D0
 * Callers:
 *     PiDrvDbUnregisterNode @ 0x140737BD8 (PiDrvDbUnregisterNode.c)
 *     NtCreateCpuPartition @ 0x140775A00 (NtCreateCpuPartition.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140A8C640 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
