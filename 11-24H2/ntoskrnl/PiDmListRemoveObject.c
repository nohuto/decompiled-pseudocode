/*
 * XREFs of PiDmListRemoveObject @ 0x1406F8D1C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmGetObjectManagerForObjectType @ 0x1408B2B50 (PiDmGetObjectManagerForObjectType.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6AAE8 (PiDmListRemoveObjectWorker.c)
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
