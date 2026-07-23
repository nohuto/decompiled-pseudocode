/*
 * XREFs of CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F568C
 * Callers:
 *     RtlUnregisterFeatureUsageProvider @ 0x140781CF0 (RtlUnregisterFeatureUsageProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpWorkItemRundown @ 0x1406F578C (CmpWorkItemRundown.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA3DAC (CmFcManagerFlushFeatureUsage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureUsageProvider(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rsi
  __int64 v7; // rdx
  int **v8; // rax

  CmFcManagerFlushFeatureUsage(a1, 1LL, a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&stru_140EF7508, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF7508, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF7508, v4, (__int64)&stru_140EF7508);
  if ( v6 )
    v6[10] = 1;
  v7 = *(_QWORD *)a2;
  if ( *(int **)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = (int **)*((_QWORD *)a2 + 1), *v8 != a2) )
    __fastfail(3u);
  *v8 = (int *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7508, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7508);
  KeAbPostRelease((ULONG_PTR)&stru_140EF7508);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 4);
  if ( a2 < dword_140EF7510 || a2 >= &dword_140EF76A8 )
    ExFreePoolWithTag(a2, 0);
}
