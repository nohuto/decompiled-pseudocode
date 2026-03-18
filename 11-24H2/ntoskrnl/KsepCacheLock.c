/*
 * XREFs of KsepCacheLock @ 0x1408BB520
 * Callers:
 *     PiDmListRemoveObject @ 0x1406FB0DC (PiDmListRemoveObject.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407264C8 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x140727014 (PiDmListRemoveList.c)
 *     KsepDbCacheInsertDevice @ 0x14073E384 (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x14073FD4C (KseLookupHardwareId.c)
 *     CmInitServerSiloState @ 0x1407D5B34 (CmInitServerSiloState.c)
 *     PiDmListAddObject @ 0x1408B33F4 (PiDmListAddObject.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408BA158 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408BB2BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CF680 (PiDmListEnumObjectsWithCallback.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KseQueryDeviceDataList @ 0x14095A9E0 (KseQueryDeviceDataList.c)
 *     KseResetDeviceCache @ 0x14095B32C (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDevice @ 0x14095B370 (KsepDbCacheQueryDevice.c)
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 *     PiDmListAddList @ 0x140A86260 (PiDmListAddList.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A87210 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall KsepCacheLock(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
