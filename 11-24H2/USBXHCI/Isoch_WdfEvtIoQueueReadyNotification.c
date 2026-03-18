/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x14000DE40
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     Isoch_MapTransfers @ 0x14000DF10 (Isoch_MapTransfers.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 */

void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  char v3; // di

  v3 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a2 + 40));
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1368LL) == 2 )
  {
    Debug_FreAssertMsg(
      "IO Received on an endpoint that has been offloaded",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      2975LL);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2
         || (_InterlockedExchange((volatile __int32 *)(a2 + 352), 1),
             _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2) )
  {
    Isoch_MapTransfers(a2);
  }
  if ( v3 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a2 + 40));
  }
}
