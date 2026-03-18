/*
 * XREFs of KsepCacheLock @ 0x14082C0D4
 * Callers:
 *     PiDmListRemoveObject @ 0x1406EF29C (PiDmListRemoveObject.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14071A548 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x14071B094 (PiDmListRemoveList.c)
 *     KsepDbCacheInsertDevice @ 0x140732364 (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x140733D2C (KseLookupHardwareId.c)
 *     CmInitServerSiloState @ 0x1407C63E4 (CmInitServerSiloState.c)
 *     KseQueryDeviceDataList @ 0x140829150 (KseQueryDeviceDataList.c)
 *     KsepDbCacheQueryDevice @ 0x14082BEF0 (KsepDbCacheQueryDevice.c)
 *     KseResetDeviceCache @ 0x14082C130 (KseResetDeviceCache.c)
 *     KseAddHardwareId @ 0x14082C174 (KseAddHardwareId.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140837338 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD1D0 (PiDmListEnumObjectsWithCallback.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PiDmListAddObject @ 0x14096AA08 (PiDmListAddObject.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14096AA90 (PiDmObjectUpdateCachedObjectProperty.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     PiDmListAddList @ 0x140A81AD0 (PiDmListAddList.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A82CB8 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall KsepCacheLock(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
