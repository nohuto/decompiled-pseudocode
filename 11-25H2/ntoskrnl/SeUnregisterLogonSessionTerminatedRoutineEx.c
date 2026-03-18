/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1407840D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeUnregisterLogonSessionTerminatedRoutineEx(PVOID a1, PVOID a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v7; // rbx
  PVOID *v8; // rdx

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v7 = (PVOID *)SeFileSystemNotifyRoutinesExHead;
  v8 = &SeFileSystemNotifyRoutinesExHead;
  if ( !SeFileSystemNotifyRoutinesExHead )
    goto LABEL_9;
  do
  {
    if ( v7[1] == a1 && v7[2] == a2 )
      break;
    v8 = v7;
    v7 = (PVOID *)*v7;
  }
  while ( v7 );
  if ( v7 )
  {
    *v8 = *v7;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
LABEL_9:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741275;
  }
  return v2;
}
