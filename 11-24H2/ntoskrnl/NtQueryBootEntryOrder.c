/*
 * XREFs of NtQueryBootEntryOrder @ 0x140965B30
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140966F70 (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtQueryBootEntryOrder(volatile void *Address, unsigned int *a2)
{
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 result; // rax
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdi
  int EnvironmentVariable; // ebx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned __int16 *v14; // rcx
  _DWORD *i; // r9
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  PVOID P[3]; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  unsigned int v19; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v19 = 0;
  P[0] = 0LL;
  if ( dword_140EFEAF0 != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *a2;
    v19 = v7;
    if ( !Address )
    {
      v19 = 0;
      v7 = 0;
    }
    if ( v7 )
      ProbeForWrite(Address, v7, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v19 = 4 * *a2;
    if ( !Address )
      v19 = 0;
  }
  if ( !v19 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Address, v19, v4, 1LL, &v16, P), (int)result >= 0) )
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
    *a2 = v12 >> 2;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}
