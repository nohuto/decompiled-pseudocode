/*
 * XREFs of ViDeadlockExAcquireFastMutex_Exit @ 0x140B9B410
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExAcquireFastMutex_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
