/*
 * XREFs of NdisCoSendNetBufferLists @ 0x1400599F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCoSendNetBufferLists(NDIS_HANDLE NdisVcHandle, PNET_BUFFER_LIST NetBufferLists, ULONG SendFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))NdisVcHandle + 31))(
    NdisVcHandle,
    NetBufferLists,
    SendFlags);
}
