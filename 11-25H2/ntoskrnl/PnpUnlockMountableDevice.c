/*
 * XREFs of PnpUnlockMountableDevice @ 0x1404C3480
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140727B9C (PiIrpQueryRemoveDevice.c)
 *     PnpCancelStopDeviceNode @ 0x140728B68 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14072A30C (PipProcessRestartPhase1.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PnpUnlockMountableDevice(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( *(_QWORD *)(v1 + 56) )
        KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = *(_QWORD *)(v1 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
