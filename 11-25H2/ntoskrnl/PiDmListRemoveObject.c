/*
 * XREFs of PiDmListRemoveObject @ 0x1406EF29C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140968CF0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6F6E8 (PiDmListRemoveObjectWorker.c)
 */

__int64 __fastcall PiDmListRemoveObject(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  int ObjectManagerForObjectType; // ebx
  __int64 v9; // rdx

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(unsigned int *)(a2 + 28));
  KsepCacheLock(v9);
  PiDmObjectAcquireSharedLock(a3);
  PiDmListRemoveObjectWorker(a1, ObjectManagerForObjectType, a2, a3, a4);
  PiDmObjectReleaseLock(a3);
  return PiDmObjectReleaseLock(a2);
}
