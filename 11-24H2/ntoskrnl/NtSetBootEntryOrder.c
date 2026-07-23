/*
 * XREFs of NtSetBootEntryOrder @ 0x14094D880
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x14094EF80 (IoSetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  __int64 v2; // rbx
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  struct _KTHREAD *v7; // rax
  NTSTATUS v8; // ebx
  NTSTATUS v9; // esi
  __int64 i; // rcx

  v2 = Count;
  Pool2 = 0LL;
  if ( dword_140EFEE10 != 2 )
    return -1073741822;
  if ( Count > 0x3FFFFFFF )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( (_DWORD)v2 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL, 2 * v2, 0x72766E45u);
    if ( !Pool2 )
      return -1073741670;
    if ( PreviousMode && 4 * (_DWORD)v2 && ((unsigned __int8)Ids & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    for ( i = 0LL; (unsigned int)i < (unsigned int)v2; i = (unsigned int)(i + 1) )
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
         2 * (int)v2,
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
