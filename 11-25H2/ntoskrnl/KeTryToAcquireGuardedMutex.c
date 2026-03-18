/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x140447D20
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140447D40 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
