/*
 * XREFs of NtLoadDriver @ 0x140A92430
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
