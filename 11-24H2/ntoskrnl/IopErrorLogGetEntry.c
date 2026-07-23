/*
 * XREFs of IopErrorLogGetEntry @ 0x1404A2F18
 * Callers:
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopErrorLogGetEntry()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // dl
  __int64 v3; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v1 = IopErrorLogListHead;
  v2 = v0;
  if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
  {
    v1 = 0LL;
    IopErrorLogSessionPending = 0;
  }
  else
  {
    v3 = *(_QWORD *)IopErrorLogListHead;
    if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead || *(_QWORD *)(v3 + 8) != IopErrorLogListHead )
      __fastfail(3u);
    IopErrorLogListHead = *(_QWORD *)IopErrorLogListHead;
    *(_QWORD *)(v3 + 8) = &IopErrorLogListHead;
  }
  KeReleaseSpinLock(&IopErrorLogLock, v2);
  return v1;
}
