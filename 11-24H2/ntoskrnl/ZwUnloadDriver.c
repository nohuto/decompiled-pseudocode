/*
 * XREFs of ZwUnloadDriver @ 0x1406AAED0
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x140647EB0 (DifZwUnloadDriverWrapper.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14085A8A0 (EtwpUpdateFileInfoDriverState.c)
 *     EtwpDisableKernelTrace @ 0x14085B3E0 (EtwpDisableKernelTrace.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
