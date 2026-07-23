/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140821D28 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  __int64 v6; // r8
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  ULONG v9; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v11; // rax
  NTSTATUS v12; // ebx
  ULONG v13; // [rsp+34h] [rbp-34h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  PVOID P[3]; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]

  v14 = 0LL;
  v13 = 0;
  P[0] = 0LL;
  if ( dword_140EFE810 != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v8 = (__int64)BufferLength;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = *BufferLength;
    v13 = *BufferLength;
    if ( !Buffer )
    {
      v13 = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v13 = *BufferLength;
    if ( !Buffer )
      v13 = 0;
  }
  if ( !v13 || (LOBYTE(v6) = PreviousMode, result = ExLockUserBuffer(Buffer, v13, v6, 1LL, &v14, P), result >= 0) )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v12 = IoEnumerateEnvironmentVariablesEx(InformationClass, 0LL, v14, &v13);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    *BufferLength = v13;
    return v12;
  }
  return result;
}
