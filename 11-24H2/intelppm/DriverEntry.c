/*
 * XREFs of DriverEntry @ 0x140008600
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008634 @ 0x140008634 (sub_140008634.c)
 *     sub_140049008 @ 0x140049008 (sub_140049008.c)
 */

NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_140049008();
  return sub_140008634((PDEVICE_OBJECT)DriverObject);
}
