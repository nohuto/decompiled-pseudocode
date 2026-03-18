/*
 * XREFs of PopUpdateWakeSource @ 0x1404A0ACC
 * Callers:
 *     PopRequestCompletion @ 0x140376130 (PopRequestCompletion.c)
 *     PoSetSystemWakeDevice @ 0x1404A0A90 (PoSetSystemWakeDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopUpdateWakeSource(PVOID Object)
{
  unsigned int v2; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( PopCurrentWakeInfo && (unsigned int)PopWakeSourceWorkState <= 1 )
    {
      ObfReferenceObjectWithTag(Object, 0x67446F50u);
      Pool2[2] = Object;
      v5 = (_QWORD *)qword_140F0D058;
      if ( *(PVOID **)qword_140F0D058 != &PopWakeSourceWorkList )
        __fastfail(3u);
      *Pool2 = &PopWakeSourceWorkList;
      Pool2[1] = v5;
      *v5 = Pool2;
      qword_140F0D058 = (__int64)Pool2;
      Pool2 = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x206D654Du);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
