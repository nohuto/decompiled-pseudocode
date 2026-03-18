/*
 * XREFs of AMLIGetNextSibling @ 0x140040F18
 * Callers:
 *     AMLIIterateSiblingsNext @ 0x140040EE4 (AMLIIterateSiblingsNext.c)
 * Callees:
 *     AMLIGetNextSiblingNoLock @ 0x140040F68 (AMLIGetNextSiblingNoLock.c)
 */

__int64 __fastcall AMLIGetNextSibling(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 SiblingNoLock; // rbx
  KIRQL v5; // r8

  LOBYTE(v2) = ExAcquireSpinLockShared(&ACPINamespaceLock);
  SiblingNoLock = AMLIGetNextSiblingNoLock(a1, v3, v2);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v5);
  return SiblingNoLock;
}
