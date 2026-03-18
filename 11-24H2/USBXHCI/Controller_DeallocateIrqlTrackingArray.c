/*
 * XREFs of Controller_DeallocateIrqlTrackingArray @ 0x14003FB18
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1400437D0 (Controller_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Controller_DeallocateIrqlTrackingArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 1264);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(a1 + 1264) = 0LL;
    *(_DWORD *)(a1 + 1272) = 0;
  }
}
