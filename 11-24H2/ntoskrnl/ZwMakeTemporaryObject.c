/*
 * XREFs of ZwMakeTemporaryObject @ 0x1406A8730
 * Callers:
 *     PiDrvDbUnregisterNode @ 0x140739CA8 (PiDrvDbUnregisterNode.c)
 *     NtCreateCpuPartition @ 0x1407757E0 (NtCreateCpuPartition.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140A90000 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140AB1C90 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(Handle, v1);
}
