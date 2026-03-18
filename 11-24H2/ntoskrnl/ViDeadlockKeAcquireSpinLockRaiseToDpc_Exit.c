/*
 * XREFs of ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit @ 0x140BA8390
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140BA83C4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
