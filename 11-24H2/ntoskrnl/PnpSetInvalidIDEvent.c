/*
 * XREFs of PnpSetInvalidIDEvent @ 0x14072DFFC
 * Callers:
 *     PnpQueryDeviceID @ 0x140A33FB0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A34100 (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1408B3920 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1408B3950 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetInvalidIDEvent(const void **a1)
{
  int v3; // ebx
  __int64 DeviceEventEntry; // rax
  __int64 v5; // rdi

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v3 = *(unsigned __int16 *)a1 + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)a1 + 202);
  v5 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_DWORD *)(DeviceEventEntry + 136) = 8;
  *(_DWORD *)(DeviceEventEntry + 156) = v3;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DEVICE_INVALID_ID;
  memmove((void *)(DeviceEventEntry + 168), a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 168) = 0;
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 170) = 0;
  return PnpInsertEventInQueue(v5);
}
