/*
 * XREFs of PiDmObjectReleaseLock @ 0x1408D12E4
 * Callers:
 *     PiDmListRemoveObject @ 0x1406FB0DC (PiDmListRemoveObject.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407264C8 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x140727014 (PiDmListRemoveList.c)
 *     PiDmListAddObject @ 0x1408B33F4 (PiDmListAddObject.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B96C8 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408BA158 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408BB2BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CF680 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1408D21B8 (PiDmObjectIsEnumerable.c)
 *     PiDmListAddList @ 0x140A86260 (PiDmListAddList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
  return KeLeaveCriticalRegionThread();
}
