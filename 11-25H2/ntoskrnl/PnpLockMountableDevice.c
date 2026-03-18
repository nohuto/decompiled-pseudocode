/*
 * XREFs of PnpLockMountableDevice @ 0x1404C5784
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140727B9C (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140728F9C (PnpQueryStopDeviceNode.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PnpLockMountableDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( v1[7] )
        KeWaitForSingleObject(v1 + 35, Executive, 0, 0, 0LL);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = (_QWORD *)v1[3];
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
