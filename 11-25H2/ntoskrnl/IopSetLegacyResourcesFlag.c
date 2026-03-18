/*
 * XREFs of IopSetLegacyResourcesFlag @ 0x1405A302C
 * Callers:
 *     IopLegacyResourceAllocation @ 0x140830B88 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopSetLegacyResourcesFlag(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(a1 + 16) |= 0x40u;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
