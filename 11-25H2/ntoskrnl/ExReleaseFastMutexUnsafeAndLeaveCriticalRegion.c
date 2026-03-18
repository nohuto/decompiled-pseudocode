/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140457B30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(struct _FAST_MUTEX *a1)
{
  ExReleaseFastMutexUnsafe(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
