/*
 * XREFs of NtLoadDriver @ 0x140A92EB0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1404DD018 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
