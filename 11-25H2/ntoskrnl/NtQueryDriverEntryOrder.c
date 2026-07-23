/*
 * XREFs of NtQueryDriverEntryOrder @ 0x1407AEB10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     HalGetEnvironmentVariableEx @ 0x140442810 (HalGetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v6; // rcx
  ULONG v7; // ebx
  ULONG v8; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v10; // rax
  __int64 v11; // rbx
  NTSTATUS EnvironmentVariable; // edi
  ULONG v13; // r8d
  unsigned __int16 *v14; // rcx
  _DWORD *i; // r9
  unsigned int v16; // ebx
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  PVOID P[3]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  ULONG v20; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0LL;
  v20 = 0;
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
    v20 = v7;
    v8 = v7;
    if ( !Ids )
    {
      v7 = 0;
      v20 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Ids, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v7 = Ids != 0LL ? 4 * *Count : 0;
    v20 = v7;
  }
  if ( !v7 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Ids, v7, v4, 1LL, &v17, P), result >= 0) )
  {
    v20 = v7 >> 1;
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v11 = v17;
    EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", (__int64)&EfiDriverVariablesGuid, v17, &v20, 0LL);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v20 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v13 = v20 >> 1;
      v14 = (unsigned __int16 *)(v11 + 2LL * ((v20 >> 1) - 1));
      for ( i = (_DWORD *)(v11 + 4LL * ((v20 >> 1) - 1)); v13; --v13 )
        *i-- = *v14--;
    }
    v16 = 2 * v20;
    v20 *= 2;
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    *Count = v16 >> 2;
    return EnvironmentVariable;
  }
  return result;
}
