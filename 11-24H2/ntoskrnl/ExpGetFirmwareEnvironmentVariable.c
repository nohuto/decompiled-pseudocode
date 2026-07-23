/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x14094F700
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x14094F150 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x14094FA00 (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(
        int a1,
        int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        KPROCESSOR_MODE a6)
{
  int v7; // ebx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v13 = 0LL;
  v7 = (int)a4;
  if ( !*a4 || (result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v13, (struct _MDL **)&P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v13, v7, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    return EnvironmentVariable;
  }
  return result;
}
