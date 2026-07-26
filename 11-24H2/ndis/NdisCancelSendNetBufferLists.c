/*
 * XREFs of NdisCancelSendNetBufferLists @ 0x1400B8690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCancelSendNetBufferLists(NDIS_HANDLE NdisBindingHandle, PVOID CancelId)
{
  (*(void (__fastcall **)(NDIS_HANDLE, PVOID))(*((_QWORD *)NdisBindingHandle + 2) + 184LL))(NdisBindingHandle, CancelId);
}
