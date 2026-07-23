/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x140793480
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PSE_LOGON_SESSION_TERMINATED_ROUTINE *v5; // rdi
  PVOID *v6; // rcx
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v7; // rax

  v1 = 0;
  if ( !CallbackRoutine )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v5 = (PSE_LOGON_SESSION_TERMINATED_ROUTINE *)SeFileSystemNotifyRoutinesHead;
  v6 = &SeFileSystemNotifyRoutinesHead;
  if ( SeFileSystemNotifyRoutinesHead )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( v5[1] == CallbackRoutine )
        break;
      v6 = (PVOID *)v5;
      v5 = (PSE_LOGON_SESSION_TERMINATED_ROUTINE *)*v5;
      if ( !v7 )
        goto LABEL_6;
    }
    *v6 = v7;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
LABEL_6:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    return -1073741275;
  }
  return v1;
}
