/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x1408CE46C
 * Callers:
 *     PiDmListRemoveObject @ 0x1406F8D1C (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140724BA4 (PiDmListRemoveList.c)
 *     PiDmListAddObject @ 0x1408B0CE4 (PiDmListAddObject.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B7070 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD070 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1408CFBA8 (PiDmObjectIsEnumerable.c)
 *     PiDmListAddList @ 0x140A80DA0 (PiDmListAddList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PiDmObjectAcquireSharedLock(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v3, (__int64)a1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
