/*
 * XREFs of NtSetBootEntryOrder @ 0x140820520
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

NTSTATUS __cdecl NtSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  struct _KTHREAD *v7; // rax
  NTSTATUS v8; // ebx
  NTSTATUS v9; // esi
  __int64 i; // rcx

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
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v8 = IoSetEnvironmentVariableEx(
         (unsigned int)L"BootOrder",
         (unsigned int)&EfiBootVariablesGuid,
         (_DWORD)Pool2,
         2 * Count,
         1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegion();
  v9 = 0;
  if ( v8 != -1073741568 )
    v9 = v8;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v9;
}
