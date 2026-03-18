/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutine @ 0x140793290
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeRegisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !CallbackRoutine )
    return -1073741811;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return -1073741670;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *Pool2 = SeFileSystemNotifyRoutinesHead;
  Pool2[1] = CallbackRoutine;
  SeFileSystemNotifyRoutinesHead = Pool2;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegion();
  return 0;
}
