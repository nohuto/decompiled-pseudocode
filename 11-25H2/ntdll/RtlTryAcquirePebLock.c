/*
 * XREFs of RtlTryAcquirePebLock @ 0x1800F9640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlTryAcquirePebLock()
{
  return RtlTryEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
