/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x140822258
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x140821DF0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224D8 (IoGetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(int a1, int a2, __int64 a3, unsigned int *a4, __int64 a5, char a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  P[0] = 0LL;
  v15 = 0LL;
  v7 = (int)a4;
  v8 = *a4;
  v9 = a3;
  if ( !(_DWORD)v8 || (LOBYTE(a3) = a6, result = ExLockUserBuffer(v9, v8, a3, 1LL, &v15, P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v15, v7, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    return EnvironmentVariable;
  }
  return result;
}
