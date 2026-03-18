/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407E465C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x140781DA0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpWorkItemRundown @ 0x1406F778C (CmpWorkItemRundown.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rsi
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&stru_140EF7178, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF7178, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&stru_140EF7178, (__int64)v4, (__int64)&stru_140EF7178);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v8 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v8 != a2) )
    __fastfail(3u);
  *v8 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7178);
  KeAbPostRelease((ULONG_PTR)&stru_140EF7178);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 2);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140EF7190 || a2 >= (struct _EX_RUNDOWN_REF *)qword_140EF72B0 )
    ExFreePoolWithTag(a2, 0);
}
