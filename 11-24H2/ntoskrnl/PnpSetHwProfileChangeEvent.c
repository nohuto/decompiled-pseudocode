/*
 * XREFs of PnpSetHwProfileChangeEvent @ 0x14072BF70
 * Callers:
 *     PnpRequestHwProfileChangeNotification @ 0x14071E588 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x1408B1210 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetHwProfileChangeEvent(__int128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 DeviceEventEntry; // rax
  __int128 v11; // xmm0

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  DeviceEventEntry = PnpCreateDeviceEventEntry(200LL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_DWORD *)(DeviceEventEntry + 136) = 0;
  *(_QWORD *)(DeviceEventEntry + 24) = a2;
  *(_QWORD *)(DeviceEventEntry + 48) = a4;
  *(_QWORD *)(DeviceEventEntry + 56) = a5;
  v11 = *a1;
  *(_DWORD *)(DeviceEventEntry + 156) = 80;
  *(_QWORD *)(DeviceEventEntry + 144) = a3;
  *(_OWORD *)(DeviceEventEntry + 120) = v11;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
