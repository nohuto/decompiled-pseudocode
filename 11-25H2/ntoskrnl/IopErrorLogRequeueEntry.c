/*
 * XREFs of IopErrorLogRequeueEntry @ 0x1404CEFEC
 * Callers:
 *     IopErrorLogThread @ 0x140A44600 (IopErrorLogThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall IopErrorLogRequeueEntry(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v3 = IopErrorLogListHead;
  if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead )
    __fastfail(3u);
  *a1 = IopErrorLogListHead;
  a1[1] = &IopErrorLogListHead;
  *(_QWORD *)(v3 + 8) = a1;
  IopErrorLogListHead = (__int64)a1;
  ErrorLogSessionOpened = 0;
  KeReleaseSpinLock(&IopErrorLogLock, v2);
}
