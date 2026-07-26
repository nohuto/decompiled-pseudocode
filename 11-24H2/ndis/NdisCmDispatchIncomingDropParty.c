/*
 * XREFs of NdisCmDispatchIncomingDropParty @ 0x1400CF570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmDispatchIncomingDropParty(
        NDIS_STATUS DropStatus,
        NDIS_HANDLE NdisPartyHandle,
        PVOID Buffer,
        UINT Size)
{
  (*((void (__fastcall **)(NDIS_STATUS, _QWORD, PVOID, UINT))NdisPartyHandle + 3))(
    DropStatus,
    *((_QWORD *)NdisPartyHandle + 2),
    Buffer,
    Size);
}
