/*
 * XREFs of PnpLockMountableDevice @ 0x1404BF394
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140731D68 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14073315C (PnpQueryStopDeviceNode.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
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
