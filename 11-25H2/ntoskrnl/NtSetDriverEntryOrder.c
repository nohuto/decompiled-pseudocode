/*
 * XREFs of NtSetDriverEntryOrder @ 0x1407AF2C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     IoSetEnvironmentVariableEx @ 0x140821C20 (IoSetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 i; // rcx
  struct _KTHREAD *v9; // rax
  NTSTATUS v10; // ebx
  NTSTATUS v11; // esi

  Pool2 = 0LL;
  if ( dword_140EFE810 != 2 )
    return -1073741822;
  if ( Count > 0x3FFFFFFF )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( Count )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return -1073741670;
    if ( PreviousMode && 4 * Count && ((unsigned __int8)Ids & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    for ( i = 0LL; (unsigned int)i < Count; i = (unsigned int)(i + 1) )
    {
      if ( Ids[i] > 0xFFFF )
      {
        ExFreePoolWithTag(Pool2, 0);
        return -1073741811;
      }
      *((_WORD *)Pool2 + i) = Ids[i];
    }
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v10 = IoSetEnvironmentVariableEx(
          (unsigned int)L"DriverOrder",
          (unsigned int)&EfiDriverVariablesGuid,
          (_DWORD)Pool2,
          2 * Count,
          1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegion();
  v11 = 0;
  if ( v10 != -1073741568 )
    v11 = v10;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
