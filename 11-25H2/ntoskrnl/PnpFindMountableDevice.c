/*
 * XREFs of PnpFindMountableDevice @ 0x1404A6B84
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140727B9C (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140728F9C (PnpQueryStopDeviceNode.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall PnpFindMountableDevice(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}
