/*
 * XREFs of NtQueryBootEntryOrder @ 0x140821260
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224D8 (IoGetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v6; // rcx
  ULONG v7; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdi
  NTSTATUS EnvironmentVariable; // ebx
  unsigned int v12; // eax
  ULONG v13; // r8d
  unsigned __int16 *v14; // rcx
  _DWORD *i; // r9
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  PVOID P[3]; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  ULONG v19; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v19 = 0;
  P[0] = 0LL;
  if ( dword_140EFE810 != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Count < 0x7FFFFFFF0000LL )
      v6 = (__int64)Count;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *Count;
    v19 = v7;
    if ( !Ids )
    {
      v19 = 0;
      v7 = 0;
    }
    if ( v7 )
      ProbeForWrite(Ids, v7, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v19 = 4 * *Count;
    if ( !Ids )
      v19 = 0;
  }
  if ( !v19 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Ids, v19, v4, 1LL, &v16, P), result >= 0) )
  {
    v19 >>= 1;
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v10 = v16;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (unsigned int)L"BootOrder",
                            (unsigned int)&EfiBootVariablesGuid,
                            v16,
                            (unsigned int)&v19,
                            0LL);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( EnvironmentVariable >= 0 )
    {
      v13 = v19 >> 1;
      v14 = (unsigned __int16 *)(v10 + 2LL * ((v19 >> 1) - 1));
      for ( i = (_DWORD *)(v10 + 4LL * ((v19 >> 1) - 1)); v13; --v13 )
        *i-- = *v14--;
    }
    else if ( EnvironmentVariable == -1073741568 )
    {
      v19 = 0;
      EnvironmentVariable = 0;
    }
    v12 = 2 * v19;
    v19 *= 2;
    if ( P[0] )
    {
      ExUnlockUserBuffer((struct _MDL *)P[0]);
      v12 = v19;
    }
    *Count = v12 >> 2;
    return EnvironmentVariable;
  }
  return result;
}
