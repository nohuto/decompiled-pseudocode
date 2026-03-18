/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x140445710
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140445730 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
