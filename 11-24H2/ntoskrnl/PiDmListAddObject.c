/*
 * XREFs of PiDmListAddObject @ 0x1408B0CE4
 * Callers:
 *     PiDmListInitEnumCallback @ 0x140724A10 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmListAddObjectWorker @ 0x1408B1A14 (PiDmListAddObjectWorker.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B2B50 (PiDmGetObjectManagerForObjectType.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 */

__int64 __fastcall PiDmListAddObject(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  int ObjectManagerForObjectType; // ebx
  __int64 v9; // rdx

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(unsigned int *)(a2 + 28));
  KsepCacheLock(v9);
  PiDmObjectAcquireSharedLock(a3);
  PiDmListAddObjectWorker(a1, ObjectManagerForObjectType, a2, a3, a4);
  PiDmObjectReleaseLock(a3);
  return PiDmObjectReleaseLock(a2);
}
