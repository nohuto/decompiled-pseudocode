/*
 * XREFs of PnpSetDeviceRemovalSafe @ 0x14072BE64
 * Callers:
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1408B1210 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceRemovalSafe(_QWORD *Object)
{
  __int64 v3; // rdi
  int v4; // ebp
  __int64 DeviceEventEntry; // rbx
  const void *v6; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v3 = *(_QWORD *)(Object[39] + 40LL);
  else
    v3 = 0LL;
  v4 = *(unsigned __int16 *)(v3 + 40) + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(v3 + 40) + 202);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 16) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 136) = 1;
  *(_QWORD *)(DeviceEventEntry + 144) = 0LL;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DEVICE_SAFE_REMOVAL;
  *(_DWORD *)(DeviceEventEntry + 152) = 0;
  *(_DWORD *)(DeviceEventEntry + 156) = v4;
  *(_QWORD *)(DeviceEventEntry + 160) = Object;
  v6 = *(const void **)(v3 + 48);
  if ( v6 )
    memmove((void *)(DeviceEventEntry + 168), v6, *(unsigned __int16 *)(v3 + 40));
  *(_WORD *)(DeviceEventEntry + 2 * ((unsigned __int64)*(unsigned __int16 *)(v3 + 40) >> 1) + 168) = 0;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
