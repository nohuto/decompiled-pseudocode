/*
 * XREFs of PsQueryRuntimeProcess @ 0x1409AF430
 * Callers:
 *     PspSetJobTimeLimitCallback @ 0x1407783A0 (PspSetJobTimeLimitCallback.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(_QWORD *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v3; // rbp
  char *v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 i; // rdi
  __int64 v10; // rdx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 188;
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)(a1 + 188), 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (__int64)v3);
  if ( v6 )
    v6[10] = 1;
  v7 = a1[39];
  v8 = (_QWORD *)a1[110];
  for ( i = a1[40]; v8 != a1 + 110; i += v10 )
  {
    v7 += *((unsigned int *)v8 - 187);
    v10 = *((unsigned int *)v8 - 167);
    v8 = (_QWORD *)*v8;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread();
  result = v7;
  *a2 = i;
  return result;
}
