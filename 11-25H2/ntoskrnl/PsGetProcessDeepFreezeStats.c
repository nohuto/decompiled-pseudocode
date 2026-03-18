/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x14091FE1C
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v3; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 456);
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire(a1 + 456, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (unsigned __int64)v3);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  a2[2] = *(_QWORD *)(a1 + 1680);
  a2[3] = *(_QWORD *)(a1 + 1584);
  do
  {
    v7 = MEMORY[0xFFFFF780000003B0];
    *a2 = MEMORY[0xFFFFF78000000008];
  }
  while ( v7 != MEMORY[0xFFFFF780000003B0] );
  PspUnlockProcessShared(a1, (__int64)CurrentThread);
  v8 = a2[3];
  result = *a2 - v7;
  a2[1] = result;
  if ( v8 )
  {
    result -= v8;
    a2[2] += result;
  }
  return result;
}
