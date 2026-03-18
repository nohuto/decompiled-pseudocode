/*
 * XREFs of PipMergeDependencyTypes @ 0x1405A0F5C
 * Callers:
 *     PipAddRequestToEdge @ 0x140712318 (PipAddRequestToEdge.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall PipMergeDependencyTypes(__int64 a1, int a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  *(_DWORD *)(a1 + 48) |= a2;
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v4);
}
