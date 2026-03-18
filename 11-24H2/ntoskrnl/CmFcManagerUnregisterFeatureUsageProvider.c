/*
 * XREFs of CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F768C
 * Callers:
 *     RtlUnregisterFeatureUsageProvider @ 0x140781DC0 (RtlUnregisterFeatureUsageProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpWorkItemRundown @ 0x1406F778C (CmpWorkItemRundown.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA8D00 (CmFcManagerFlushFeatureUsage.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureUsageProvider(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  int **v8; // rax

  CmFcManagerFlushFeatureUsage(a1, 1LL, a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&stru_140EF72C8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF72C8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&stru_140EF72C8, (__int64)v4, (__int64)&stru_140EF72C8);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD *)a2;
  if ( *(int **)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = (int **)*((_QWORD *)a2 + 1), *v8 != a2) )
    __fastfail(3u);
  *v8 = (int *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF72C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF72C8);
  KeAbPostRelease((ULONG_PTR)&stru_140EF72C8);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 4);
  if ( a2 < dword_140EF72D0 || a2 >= &dword_140EF7420 )
    ExFreePoolWithTag(a2, 0);
}
