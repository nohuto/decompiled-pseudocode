/*
 * XREFs of ExpShutdownWorkerFactory @ 0x1403ADC94
 * Callers:
 *     NtShutdownWorkerFactory @ 0x1402BB2B0 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x140A4C1F0 (ExpCloseWorkerFactory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402D381C (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx3 @ 0x1403ACAA0 (IoSetIoCompletionEx3.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1403AD690 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpPurgeThreadHistory @ 0x1403ADDA4 (ExpPurgeThreadHistory.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
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
