/*
 * XREFs of ZwMapUserPhysicalPages @ 0x1406A9750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VirtualAddress);
}
