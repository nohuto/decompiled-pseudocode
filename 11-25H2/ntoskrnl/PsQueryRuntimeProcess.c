/*
 * XREFs of PsQueryRuntimeProcess @ 0x1409CE740
 * Callers:
 *     PspSetJobTimeLimitCallback @ 0x140768700 (PspSetJobTimeLimitCallback.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(_QWORD *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v3; // rbp
  __int64 *v6; // rbx
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
    ExfAcquirePushLockSharedEx(v3, 0, v6, (unsigned __int64)v3);
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = v7;
  *a2 = i;
  return result;
}
