/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x140B9C2E4
 * Callers:
 *     VfDeadlockReleaseResource @ 0x140BA95AC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     ViLowerIrql @ 0x140612828 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140612860 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140B9B1D4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B9B20C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140B9C1BC (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
