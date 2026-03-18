/*
 * XREFs of ExpShutdownWorkerFactory @ 0x14036EF50
 * Callers:
 *     NtShutdownWorkerFactory @ 0x14036D940 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x140A4FC90 (ExpCloseWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140303BD0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403082D4 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     ExpPurgeThreadHistory @ 0x14036F060 (ExpPurgeThreadHistory.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(char *Object)
{
  KSPIN_LOCK *v2; // rcx
  char v3; // di
  __int64 v4; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)*((_QWORD *)Object + 2);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  ExpPurgeThreadHistory(Object);
  if ( (*((_DWORD *)Object + 102) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( *((char **)Object + 74) == Object + 424
    && KiDeregisterObjectWaitBlock((volatile signed __int32 *)Object + 106, (struct _KWAIT_BLOCK *)(Object + 560)) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  v3 = 1;
  *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) = 1;
  v4 = *((_QWORD *)Object + 2);
  *((_DWORD *)Object + 95) = 0;
  *((_DWORD *)Object + 94) = 0;
  if ( !*(_DWORD *)(v4 + 28) || *(_BYTE *)(v4 + 32) )
    v3 = 0;
  else
    *(_BYTE *)(v4 + 32) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = KeCancelTimer2(Object + 424, 0LL);
  if ( v3 )
    return IoSetIoCompletionEx3(
             *(_QWORD *)(*((_QWORD *)Object + 2) + 8LL),
             0LL,
             0LL,
             0,
             0LL,
             0,
             *(_QWORD *)(*((_QWORD *)Object + 2) + 16LL),
             0,
             0);
  return result;
}
