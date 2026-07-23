/*
 * XREFs of PiDmObjectManagerReleaseLock @ 0x1408B2B2C
 * Callers:
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiDmListAddObjectWorker @ 0x1408B1A14 (PiDmListAddObjectWorker.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B1AD4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B26E0 (PiDqQueryAppendActionEntry.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6AAE8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PiDmObjectManagerReleaseLock(struct _ERESOURCE *a1)
{
  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread();
}
