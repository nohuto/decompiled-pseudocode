/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE030
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
 *     IoEnumerateEnvironmentVariablesEx @ 0x1409665F8 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 */

__int64 __fastcall NtEnumerateSystemEnvironmentValuesEx(unsigned int a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // r8
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // [rsp+34h] [rbp-34h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  PVOID P[3]; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]

  v14 = 0LL;
  v13 = 0;
  P[0] = 0LL;
  if ( dword_140EFEAF0 != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a3;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = *a3;
    v13 = *a3;
    if ( !a2 )
    {
      v13 = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(a2, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v13 = *a3;
    if ( !a2 )
      v13 = 0;
  }
  if ( !v13 || (LOBYTE(v6) = PreviousMode, result = ExLockUserBuffer(a2, v13, v6, 1LL, &v14, P), (int)result >= 0) )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v12 = IoEnumerateEnvironmentVariablesEx(a1, 0LL, v14, &v13);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    *a3 = v13;
    return v12;
  }
  return result;
}
