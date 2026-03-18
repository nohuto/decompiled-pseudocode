/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x140966C70
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x1409666C0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140966F70 (IoGetEnvironmentVariableEx.c)
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
