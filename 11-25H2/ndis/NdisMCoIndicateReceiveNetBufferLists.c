/*
 * XREFs of NdisMCoIndicateReceiveNetBufferLists @ 0x140072520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMCoIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisVcHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG NumberOfNetBufferLists,
        ULONG CoReceiveFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG, ULONG))NdisVcHandle + 36))(
    NdisVcHandle,
    NetBufferLists,
    NumberOfNetBufferLists,
    CoReceiveFlags);
}
