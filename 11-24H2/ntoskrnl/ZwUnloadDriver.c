/*
 * XREFs of ZwUnloadDriver @ 0x1406A9F30
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x1406498F0 (DifZwUnloadDriverWrapper.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1408E9078 (EtwpUpdateFileInfoDriverState.c)
 *     EtwpDisableKernelTrace @ 0x1408E9BB0 (EtwpDisableKernelTrace.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
