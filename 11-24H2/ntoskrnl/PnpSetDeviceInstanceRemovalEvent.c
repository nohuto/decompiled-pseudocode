/*
 * XREFs of PnpSetDeviceInstanceRemovalEvent @ 0x1404A22A8
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1408B1210 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceInstanceRemovalEvent(__int64 a1)
{
  int v3; // esi
  __int64 DeviceEventEntry; // rax
  __int64 v5; // rbx
  const void *v6; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v3 = *(unsigned __int16 *)(a1 + 40) + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(a1 + 40) + 202);
  v5 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 16) = 0;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DEVINST_REMOVE_COMPLETE;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 136) = 10;
  *(_QWORD *)(DeviceEventEntry + 144) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 152) = 0;
  *(_DWORD *)(DeviceEventEntry + 156) = v3;
  *(_QWORD *)(DeviceEventEntry + 160) = 0LL;
  v6 = *(const void **)(a1 + 48);
  if ( v6 )
    memmove((void *)(DeviceEventEntry + 168), v6, *(unsigned __int16 *)(a1 + 40));
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)(a1 + 40) >> 1) + 168) = 0;
  return PnpInsertEventInQueue(v5);
}
