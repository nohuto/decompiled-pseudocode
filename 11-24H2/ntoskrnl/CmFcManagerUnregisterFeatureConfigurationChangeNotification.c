/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407E4BAC
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x140781CD0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpWorkItemRundown @ 0x1406F578C (CmpWorkItemRundown.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rsi
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&stru_140EF73B8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF73B8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF73B8, v4, (__int64)&stru_140EF73B8);
  if ( v6 )
    v6[10] = 1;
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v8 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v8 != a2) )
    __fastfail(3u);
  *v8 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF73B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF73B8);
  KeAbPostRelease((ULONG_PTR)&stru_140EF73B8);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 2);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140EF73D0 || a2 >= (struct _EX_RUNDOWN_REF *)qword_140EF74F0 )
    ExFreePoolWithTag(a2, 0);
}
