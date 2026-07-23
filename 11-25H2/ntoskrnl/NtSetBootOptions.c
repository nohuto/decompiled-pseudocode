/*
 * XREFs of NtSetBootOptions @ 0x1407AF0E0
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
 */

NTSTATUS __cdecl NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  char v2; // si
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 p_Length; // rax
  unsigned int v6; // eax
  ULONG NextBootEntryId; // eax
  struct _KTHREAD *v9; // rax
  NTSTATUS v10; // ebx
  ULONG Timeout; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF
  ULONG Version; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v2 = FieldsToChange;
  Timeout = 0;
  v12[0] = 0;
  if ( dword_140EFE810 != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  p_Length = (unsigned __int64)&BootOptions->Length;
  if ( PreviousMode )
  {
    if ( p_Length >= 0x7FFFFFFF0000LL )
      p_Length = 0x7FFFFFFF0000LL;
    v6 = *(_DWORD *)p_Length;
  }
  else
  {
    v6 = *(_DWORD *)p_Length;
  }
  v12[1] = v6;
  if ( v6 < 0x14 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)BootOptions & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  Version = BootOptions->Version;
  if ( Version != 1 )
    return -1073741811;
  Timeout = BootOptions->Timeout;
  NextBootEntryId = BootOptions->NextBootEntryId;
  v12[0] = NextBootEntryId;
  if ( (v2 & 2) != 0 && NextBootEntryId > 0xFFFF )
    return -1073741811;
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v10 = 0;
  if ( (v2 & 1) != 0 )
  {
    if ( Timeout == -1 )
    {
      Timeout = 0xFFFF;
    }
    else if ( Timeout > 0xFFFE )
    {
      Timeout = 65534;
    }
    v10 = IoSetEnvironmentVariableEx(
            (unsigned int)L"Timeout",
            (unsigned int)&EfiBootVariablesGuid,
            (unsigned int)&Timeout,
            2,
            1);
  }
  if ( v10 >= 0 && (v2 & 2) != 0 )
    v10 = IoSetEnvironmentVariableEx(
            (unsigned int)L"BootNext",
            (unsigned int)&EfiBootVariablesGuid,
            (unsigned int)v12,
            2,
            1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegion();
  return v10;
}
