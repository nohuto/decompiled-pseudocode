/*
 * XREFs of NdisCoSendNetBufferLists @ 0x140074670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCoSendNetBufferLists(NDIS_HANDLE NdisVcHandle, PNET_BUFFER_LIST NetBufferLists, ULONG SendFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))NdisVcHandle + 31))(
    NdisVcHandle,
    NetBufferLists,
    SendFlags);
}
