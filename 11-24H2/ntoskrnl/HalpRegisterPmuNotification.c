/*
 * XREFs of HalpRegisterPmuNotification @ 0x14070084C
 * Callers:
 *     HalpSetSystemInformation @ 0x140A95A10 (HalpSetSystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocateTimer @ 0x1403ADEA0 (ExAllocateTimer.c)
 *     ExSetTimer @ 0x1403B0B80 (ExSetTimer.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpRegisterPmuNotification(__int64 a1)
{
  unsigned int v2; // edi
  __int64 Pool2; // rax
  _QWORD *v4; // rsi
  int v5; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  signed __int8 v8; // cf
  char *v9; // rbp
  PVOID *i; // rcx
  _QWORD *v11; // rax

  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741735;
  Pool2 = ExAllocatePool2(0x100uLL, 0x40uLL, 0x666F7250u);
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
  v7 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v7, (__int64)&HalpPmuArbiter);
  if ( v9 )
    v9[10] = 1;
  for ( i = (PVOID *)qword_140FC1FF8; i != &qword_140FC1FF8; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 8) == *(_DWORD *)(a1 + 4) )
      goto LABEL_15;
  }
  if ( (_QWORD)xmmword_140FC2050 && *(_DWORD *)(xmmword_140FC2050 + 32) == *(_DWORD *)(a1 + 4) )
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
  if ( dword_140FC1FF0 == 1 )
  {
    stru_140FC2018.Parameter = 0LL;
    stru_140FC2018.List.Flink = 0LL;
    stru_140FC2018.WorkerRoutine = (void (__fastcall *)(void *))HalpPmuArbiterPeriodicWorkItem;
    dword_140FC1FF0 = 3;
    qword_140FC2010 = ExAllocateTimer((__int64)HalpPmuArbiterPeriodicTimerCallback, 0LL, 0x80000000);
    if ( !qword_140FC2010 )
    {
      v2 = -1073741670;
      goto LABEL_19;
    }
    ExSetTimer(
      qword_140FC2010,
      -(__int64)(unsigned int)(10000 * dword_140FC2060),
      (unsigned int)(10000 * dword_140FC2060),
      0LL);
  }
  v11 = (_QWORD *)qword_140FC2000;
  if ( *(PVOID **)qword_140FC2000 != &qword_140FC1FF8 )
    __fastfail(3u);
  *v4 = &qword_140FC1FF8;
  v4[1] = v11;
  *v11 = v4;
  ++dword_140FC2008;
  qword_140FC2000 = (__int64)v4;
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v4 + 6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
  KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  HalpNotifyActorIfPmuAvailable((PVOID *)v4, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4 + 6);
  return 0;
}
