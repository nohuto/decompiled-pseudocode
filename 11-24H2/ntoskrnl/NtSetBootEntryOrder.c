/*
 * XREFs of NtSetBootEntryOrder @ 0x140964DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x1409664F0 (IoSetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetBootEntryOrder(__int64 a1, unsigned int a2)
{
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  struct _KTHREAD *v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  __int64 i; // rcx

  Pool2 = 0LL;
  if ( dword_140EFEAF0 != 2 )
    return 3221225474LL;
  if ( a2 > 0x3FFFFFFF )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return 3221225569LL;
  if ( a2 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( PreviousMode && 4 * a2 && (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(a1 + 4 * i) > 0xFFFFu )
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225485LL;
      }
      *((_WORD *)Pool2 + i) = *(_WORD *)(a1 + 4 * i);
    }
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v8 = IoSetEnvironmentVariableEx(
         (unsigned int)L"BootOrder",
         (unsigned int)&EfiBootVariablesGuid,
         (_DWORD)Pool2,
         2 * a2,
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
