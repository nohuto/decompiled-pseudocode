/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x1406A8390
 * Callers:
 *     DifZwAlpcCreateResourceReserveWrapper @ 0x14063A730 (DifZwAlpcCreateResourceReserveWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
