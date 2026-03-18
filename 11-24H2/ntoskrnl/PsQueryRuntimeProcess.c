/*
 * XREFs of PsQueryRuntimeProcess @ 0x1409C4240
 * Callers:
 *     PspSetJobTimeLimitCallback @ 0x1407781E0 (PspSetJobTimeLimitCallback.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(_QWORD *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v3; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 i; // rdi
  __int64 v10; // rdx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 188;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)(a1 + 188), 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (__int64)v3);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
