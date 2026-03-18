/*
 * XREFs of PiDmObjectManagerReleaseLock @ 0x1408B523C
 * Callers:
 *     PiUEventHandleRegistration @ 0x14085BCBC (PiUEventHandleRegistration.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     PiDmListAddObjectWorker @ 0x1408B4124 (PiDmListAddObjectWorker.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B41E4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B4894 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B4924 (PiDmAddCacheReferenceForObject.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B4DF0 (PiDqQueryAppendActionEntry.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListRemoveObjectWorker @ 0x140A71708 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PiDmObjectManagerReleaseLock(struct _ERESOURCE *a1)
{
  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread();
}
