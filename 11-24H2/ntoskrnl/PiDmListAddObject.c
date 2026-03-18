/*
 * XREFs of PiDmListAddObject @ 0x1408B33F4
 * Callers:
 *     PiDmListInitEnumCallback @ 0x140726E80 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmListAddObjectWorker @ 0x1408B4124 (PiDmListAddObjectWorker.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B5260 (PiDmGetObjectManagerForObjectType.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408D0A7C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408D12E4 (PiDmObjectReleaseLock.c)
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
