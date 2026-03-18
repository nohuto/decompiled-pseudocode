/*
 * XREFs of PnpSetInvalidIDEvent @ 0x14072207C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1408336D0 (PnpQueryID.c)
 *     PnpQueryDeviceID @ 0x140A2FC8C (PnpQueryDeviceID.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x14096A54C (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
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
