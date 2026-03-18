/*
 * XREFs of NtQueryDriverEntryOrder @ 0x1407BE2E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     HalGetEnvironmentVariableEx @ 0x140443D90 (HalGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 */

__int64 __fastcall NtQueryDriverEntryOrder(volatile void *Address, unsigned int *a2)
{
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 result; // rax
  struct _KTHREAD *v10; // rax
  __int64 v11; // rbx
  int EnvironmentVariable; // edi
  unsigned int v13; // r8d
  unsigned __int16 *v14; // rcx
  _DWORD *i; // r9
  unsigned int v16; // ebx
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  PVOID P[3]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0LL;
  v20 = 0;
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
    v20 = v7;
    v8 = v7;
    if ( !Address )
    {
      v7 = 0;
      v20 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Address, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v7 = Address != 0LL ? 4 * *a2 : 0;
    v20 = v7;
  }
  if ( !v7 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Address, v7, v4, 1LL, &v17, P), (int)result >= 0) )
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
    *a2 = v16 >> 2;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}
