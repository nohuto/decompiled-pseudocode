/*
 * XREFs of NdisFCancelSendNetBufferLists @ 0x14009ABD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFCancelSendNetBufferLists(NDIS_HANDLE NdisFilterHandle, PVOID CancelId)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PVOID))NdisFilterHandle + 80))(NdisFilterHandle, CancelId);
}
