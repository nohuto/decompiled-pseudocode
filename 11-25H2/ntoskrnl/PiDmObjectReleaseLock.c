/*
 * XREFs of PiDmObjectReleaseLock @ 0x1408CE958
 * Callers:
 *     PiDmListRemoveObject @ 0x1406EF29C (PiDmListRemoveObject.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14071A548 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x14071B094 (PiDmListRemoveList.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408368AC (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140837338 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD1D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1408CFB88 (PiDmObjectIsEnumerable.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PiDmListAddObject @ 0x14096AA08 (PiDmListAddObject.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14096AA90 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmListAddList @ 0x140A81AD0 (PiDmListAddList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

__int64 __fastcall PiDmObjectReleaseLock(signed __int64 *BugCheckParameter2)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rcx

  _m_prefetchw(BugCheckParameter2);
  v2 = *BugCheckParameter2;
  v3 = *BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *BugCheckParameter2 - 16;
  if ( v3 <= 0x10 )
    v4 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(BugCheckParameter2, v4, v2) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
