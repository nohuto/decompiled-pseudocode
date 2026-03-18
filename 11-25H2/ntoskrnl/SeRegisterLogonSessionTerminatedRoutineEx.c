/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x140783F60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
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
