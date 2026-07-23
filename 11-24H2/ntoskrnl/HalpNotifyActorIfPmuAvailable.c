/*
 * XREFs of HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0
 * Callers:
 *     HalpFreePmcCounterSet @ 0x1405434A0 (HalpFreePmcCounterSet.c)
 *     HalFreeHardwareCounters @ 0x1406FB440 (HalFreeHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FBDF0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpRegisterPmuNotification @ 0x14070084C (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140AADA0C (HalpUnregisterPmuNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PsGetCurrentThreadId @ 0x1404251E0 (PsGetCurrentThreadId.c)
 *     HalpAcquirePmuAccessRequest @ 0x140542970 (HalpAcquirePmuAccessRequest.c)
 *     HalpReleasePmuAccessRequest @ 0x140543930 (HalpReleasePmuAccessRequest.c)
 *     HalpPmuArbiterNotifyActor @ 0x1406FBDB4 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406FC014 (HalpPmuArbiterUpdateActiveActorTime.c)
 */

void __fastcall HalpNotifyActorIfPmuAvailable(PVOID *i, char a2)
{
  char v2; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rbp
  struct _KTHREAD *v9; // rax
  char *v10; // rax
  char *v11; // rbp
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx

  v2 = 0;
  if ( !a2 && (dword_140FC1FEC || (unsigned int)(dword_140FC1FF0 - 3) > 1) )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v6, (__int64)&HalpPmuArbiter);
  if ( v8 )
    v8[10] = 1;
  if ( dword_140FC1FF0 == 2 )
  {
    if ( !a2 )
      goto LABEL_41;
    v14 = (_QWORD *)xmmword_140FC2050;
    HalpPmuArbiterUpdateActiveActorTime((unsigned int)(dword_140FC1FF0 - 2));
    v15 = (_QWORD *)qword_140FC2000;
    if ( *(PVOID **)qword_140FC2000 == &qword_140FC1FF8 )
    {
      *v14 = &qword_140FC1FF8;
      v14[1] = v15;
      *v15 = v14;
      qword_140FC2000 = (__int64)v14;
      xmmword_140FC2050 = 0LL;
      dword_140FC1FF0 = 3;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
  if ( dword_140FC1FF0 != 3 )
  {
    if ( dword_140FC1FF0 == 4 && (HANDLE)qword_140FC2040 == PsGetCurrentThreadId() )
      dword_140FC1FF0 = 5;
    goto LABEL_41;
  }
  if ( (int)HalpAcquirePmuAccessRequest() >= 0 && !dword_140FC1FEC )
  {
    v2 = 1;
    if ( !i )
    {
      for ( i = (PVOID *)qword_140FC1FF8; i != &qword_140FC1FF8; i = (PVOID *)*i )
      {
        if ( !*((_BYTE *)i + 56) )
          goto LABEL_21;
      }
      goto LABEL_41;
    }
LABEL_21:
    dword_140FC1FF0 = 4;
    qword_140FC2040 = (__int64)PsGetCurrentThreadId();
    dword_140FC2048 = *((_DWORD *)i + 8);
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)i + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    HalpPmuArbiterNotifyActor(i, 0LL);
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
    v11 = v10;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v10, (__int64)&HalpPmuArbiter);
    if ( v11 )
      v11[10] = 1;
    if ( dword_140FC1FF0 == 4 )
    {
      dword_140FC1FF0 = 3;
      goto LABEL_36;
    }
    if ( dword_140FC1FF0 != 5 )
    {
LABEL_36:
      dword_140FC2048 = 0;
      qword_140FC2040 = 0LL;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)i + 6);
      goto LABEL_41;
    }
    if ( *((_BYTE *)i + 56) )
    {
      dword_140FC1FF0 = 3;
LABEL_34:
      v2 = 0;
      goto LABEL_36;
    }
    v12 = *i;
    if ( *((PVOID **)*i + 1) == i )
    {
      v13 = (PVOID *)i[1];
      if ( *v13 == i )
      {
        *v13 = v12;
        v12[1] = v13;
        *(_QWORD *)&xmmword_140FC2050 = i;
        *((LARGE_INTEGER *)&xmmword_140FC2050 + 1) = KeQueryPerformanceCounter(0LL);
        dword_140FC1FF0 = 2;
        goto LABEL_34;
      }
    }
LABEL_39:
    __fastfail(3u);
  }
LABEL_41:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
  KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  if ( v2 )
    HalpReleasePmuAccessRequest();
}
