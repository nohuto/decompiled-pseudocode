/*
 * XREFs of PipMergeDependencyTypes @ 0x1405A46CC
 * Callers:
 *     PipAddRequestToEdge @ 0x14071E418 (PipAddRequestToEdge.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PipMergeDependencyTypes(__int64 a1, int a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  *(_DWORD *)(a1 + 48) |= a2;
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v4);
}
