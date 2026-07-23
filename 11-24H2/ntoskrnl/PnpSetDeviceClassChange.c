/*
 * XREFs of PnpSetDeviceClassChange @ 0x1408B0E78
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1408B1210 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceClassChange(_OWORD *a1, _OWORD *a2, const void **a3)
{
  int v6; // edi
  __int64 DeviceEventEntry; // rax
  __int64 v8; // rbx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v6 = *(unsigned __int16 *)a3 + 80;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)a3 + 200);
  v8 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225495LL;
  *(_OWORD *)(DeviceEventEntry + 120) = *a1;
  *(_DWORD *)(DeviceEventEntry + 136) = 2;
  *(_DWORD *)(DeviceEventEntry + 156) = v6;
  *(_OWORD *)(DeviceEventEntry + 168) = *a2;
  memmove((void *)(DeviceEventEntry + 184), a3[1], *(unsigned __int16 *)a3);
  *(_WORD *)(v8 + 2 * ((unsigned __int64)*(unsigned __int16 *)a3 >> 1) + 184) = 0;
  return PnpInsertEventInQueue(v8);
}
