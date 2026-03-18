/*
 * XREFs of HalpRegisterPmuNotification @ 0x1406F6E1C
 * Callers:
 *     HalpSetSystemInformation @ 0x140A94780 (HalpSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExAllocateTimer @ 0x14036F160 (ExAllocateTimer.c)
 *     ExSetTimer @ 0x140370E10 (ExSetTimer.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpRegisterPmuNotification(__int64 a1)
{
  unsigned int v2; // edi
  __int64 Pool2; // rax
  _QWORD *v4; // rsi
  int v5; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rax
  signed __int8 v8; // cf
  __int64 *v9; // rbp
  PVOID *i; // rcx
  _QWORD *v11; // rax

  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741735;
  Pool2 = ExAllocatePool2(0x100uLL);
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 4);
  v4[6] = 0LL;
  *((_DWORD *)v4 + 8) = v5;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v7, (__int64)&HalpPmuArbiter);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  for ( i = (PVOID *)qword_140FC15F8; i != &qword_140FC15F8; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 8) == *(_DWORD *)(a1 + 4) )
      goto LABEL_15;
  }
  if ( (_QWORD)xmmword_140FC1650 && *(_DWORD *)(xmmword_140FC1650 + 32) == *(_DWORD *)(a1 + 4) )
  {
LABEL_15:
    v2 = -1073741811;
LABEL_19:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v4, 0);
    return v2;
  }
  if ( dword_140FC15F0 == 1 )
  {
    stru_140FC1618.Parameter = 0LL;
    stru_140FC1618.List.Flink = 0LL;
    stru_140FC1618.WorkerRoutine = (void (__fastcall *)(void *))HalpPmuArbiterPeriodicWorkItem;
    dword_140FC15F0 = 3;
    qword_140FC1610 = ExAllocateTimer((__int64)HalpPmuArbiterPeriodicTimerCallback, 0LL, 0x80000000);
    if ( !qword_140FC1610 )
    {
      v2 = -1073741670;
      goto LABEL_19;
    }
    ExSetTimer(
      qword_140FC1610,
      -(__int64)(unsigned int)(10000 * dword_140FC1660),
      (unsigned int)(10000 * dword_140FC1660),
      0LL);
  }
  v11 = (_QWORD *)qword_140FC1600;
  if ( *(PVOID **)qword_140FC1600 != &qword_140FC15F8 )
    __fastfail(3u);
  *v4 = &qword_140FC15F8;
  v4[1] = v11;
  *v11 = v4;
  ++dword_140FC1608;
  qword_140FC1600 = (__int64)v4;
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v4 + 6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
  KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  HalpNotifyActorIfPmuAvailable((PVOID *)v4, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4 + 6);
  return 0;
}
