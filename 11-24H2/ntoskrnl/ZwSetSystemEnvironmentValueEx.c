/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1406AAB10
 * Callers:
 *     BiDeleteEfiVariable @ 0x1409A7A20 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}
