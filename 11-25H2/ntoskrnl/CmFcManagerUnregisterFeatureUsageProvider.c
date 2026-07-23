/*
 * XREFs of CmFcManagerUnregisterFeatureUsageProvider @ 0x1406EBE28
 * Callers:
 *     RtlUnregisterFeatureUsageProvider @ 0x140772B70 (RtlUnregisterFeatureUsageProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemRundown @ 0x1406EBF28 (CmpWorkItemRundown.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA3C78 (CmFcManagerFlushFeatureUsage.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureUsageProvider(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rsi
  __int64 v7; // rdx
  int **v8; // rax

  CmFcManagerFlushFeatureUsage(a1, 1LL, a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&stru_140EF6F28, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6F28, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6F28, v4, (__int64)&stru_140EF6F28);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD *)a2;
  if ( *(int **)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = (int **)*((_QWORD *)a2 + 1), *v8 != a2) )
    __fastfail(3u);
  *v8 = (int *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6F28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6F28);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6F28);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 4);
  if ( a2 < dword_140EF6F30 || a2 >= &dword_140EF7080 )
    ExFreePoolWithTag(a2, 0);
}
