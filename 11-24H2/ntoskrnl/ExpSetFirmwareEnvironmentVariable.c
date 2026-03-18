/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x1407BCFA8
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BB470 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BEF90 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     IoSetEnvironmentVariableEx @ 0x1409664F0 (IoSetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(int a1, int a2, __int64 a3, unsigned int a4, int a5, char a6)
{
  __int64 v7; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-10h] BYREF

  P[0] = 0LL;
  v13 = 0LL;
  v7 = a3;
  if ( !a4 || (LOBYTE(a3) = a6, result = ExLockUserBuffer(v7, a4, a3, 0LL, &v13, P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v12 = IoSetEnvironmentVariableEx(a1, a2, v13, a4, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    return v12;
  }
  return result;
}
