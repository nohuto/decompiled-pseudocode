/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x1408CCF68
 * Callers:
 *     PiDmListRemoveObject @ 0x1406EF29C (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x14071B094 (PiDmListRemoveList.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408368AC (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD1D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1408CFB88 (PiDmObjectIsEnumerable.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x14096AA08 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x140A81AD0 (PiDmListAddList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PiDmObjectAcquireSharedLock(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v3, (unsigned __int64)a1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
