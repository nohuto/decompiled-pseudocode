/*
 * XREFs of PnpUnlockMountableDevice @ 0x1404C1E7C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140733E34 (PiIrpQueryRemoveDevice.c)
 *     PnpCancelStopDeviceNode @ 0x140734DF8 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14073659C (PipProcessRestartPhase1.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
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
