/*
 * XREFs of PiDmListAddObject @ 0x14096AA08
 * Callers:
 *     PiDmListInitEnumCallback @ 0x14071AF00 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 * Callees:
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140968CF0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x140969C78 (PiDmListAddObjectWorker.c)
 */

__int64 __fastcall PiDmListAddObject(int a1, __int64 a2, volatile signed __int64 *a3, char *a4)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rbx
  unsigned __int64 *v9; // rdx

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  KsepCacheLock(v9);
  PiDmObjectAcquireSharedLock(a3);
  PiDmListAddObjectWorker(a1, ObjectManagerForObjectType, a2, (__int64)a3, a4);
  PiDmObjectReleaseLock((signed __int64 *)a3);
  return PiDmObjectReleaseLock((signed __int64 *)a2);
}
