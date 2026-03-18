/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x1408D0A7C
 * Callers:
 *     PiDmListRemoveObject @ 0x1406FB0DC (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140727014 (PiDmListRemoveList.c)
 *     PiDmListAddObject @ 0x1408B33F4 (PiDmListAddObject.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B96C8 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CF680 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408D0350 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1408D21B8 (PiDmObjectIsEnumerable.c)
 *     PiDmListAddList @ 0x140A86260 (PiDmListAddList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PiDmObjectAcquireSharedLock(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v3, (__int64)a1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
