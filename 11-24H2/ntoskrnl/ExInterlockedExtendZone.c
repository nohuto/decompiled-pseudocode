/*
 * XREFs of ExInterlockedExtendZone @ 0x140655F50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExExtendZone @ 0x140655E60 (ExExtendZone.c)
 */

NTSTATUS __stdcall ExInterlockedExtendZone(PZONE_HEADER Zone, PVOID Segment, ULONG SegmentSize, PKSPIN_LOCK Lock)
{
  KIRQL v8; // di
  NTSTATUS v9; // ebx

  v8 = KeAcquireSpinLockRaiseToDpc(Lock);
  v9 = ExExtendZone(Zone, Segment, SegmentSize);
  KeReleaseSpinLock(Lock, v8);
  return v9;
}
