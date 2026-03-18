/*
 * XREFs of PnpFindMountableDevice @ 0x1404A752C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140733E34 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14073522C (PnpQueryStopDeviceNode.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
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
