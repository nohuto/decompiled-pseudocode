/*
 * XREFs of KeAcquireGuardedMutexUnsafe @ 0x1403EE7E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 */

void __stdcall KeAcquireGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExAcquireFastMutexUnsafe(FastMutex);
}
