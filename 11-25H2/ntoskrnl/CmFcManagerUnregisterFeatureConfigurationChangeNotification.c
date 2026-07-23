/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407D4D7C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x140772B50 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemRundown @ 0x1406EBF28 (CmpWorkItemRundown.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rsi
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&stru_140EF6DD8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6DD8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6DD8, v4, (__int64)&stru_140EF6DD8);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v8 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v8 != a2) )
    __fastfail(3u);
  *v8 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6DD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6DD8);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6DD8);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 2);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140EF6DF0 || a2 >= (struct _EX_RUNDOWN_REF *)qword_140EF6F10 )
    ExFreePoolWithTag(a2, 0);
}
