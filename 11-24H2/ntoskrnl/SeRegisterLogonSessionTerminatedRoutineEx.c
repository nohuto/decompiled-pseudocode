/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407933D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x53466553u);
  if ( !Pool2 )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *Pool2 = SeFileSystemNotifyRoutinesExHead;
  Pool2[1] = a1;
  Pool2[2] = a2;
  SeFileSystemNotifyRoutinesExHead = Pool2;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegion();
  return 0LL;
}
