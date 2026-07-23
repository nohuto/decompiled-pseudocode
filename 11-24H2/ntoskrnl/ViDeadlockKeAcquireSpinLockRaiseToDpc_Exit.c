/*
 * XREFs of ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit @ 0x140BAA390
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
