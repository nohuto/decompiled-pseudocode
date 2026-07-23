/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x1406A7410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VirtualAddresses);
}
