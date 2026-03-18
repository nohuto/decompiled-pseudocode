/*
 * XREFs of HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0
 * Callers:
 *     HalpFreePmcCounterSet @ 0x140545BE0 (HalpFreePmcCounterSet.c)
 *     HalFreeHardwareCounters @ 0x1406FD800 (HalFreeHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FE1B0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpRegisterPmuNotification @ 0x140702C0C (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140AB2A9C (HalpUnregisterPmuNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PsGetCurrentThreadId @ 0x1404330A0 (PsGetCurrentThreadId.c)
 *     HalpAcquirePmuAccessRequest @ 0x1405450B0 (HalpAcquirePmuAccessRequest.c)
 *     HalpReleasePmuAccessRequest @ 0x140546070 (HalpReleasePmuAccessRequest.c)
 *     HalpPmuArbiterNotifyActor @ 0x1406FE174 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406FE3D4 (HalpPmuArbiterUpdateActiveActorTime.c)
 */

void __fastcall HalpNotifyActorIfPmuAvailable(PVOID *i, char a2)
{
  char v2; // r15
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rbp
  struct _KTHREAD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx

  v2 = 0;
  if ( !a2 && (dword_140FC1D8C || (unsigned int)(dword_140FC1D90 - 3) > 1) )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, (__int64)v6, (__int64)&HalpPmuArbiter);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( dword_140FC1D90 == 2 )
  {
    if ( !a2 )
      goto LABEL_41;
    v14 = (_QWORD *)xmmword_140FC1DF0;
    HalpPmuArbiterUpdateActiveActorTime((unsigned int)(dword_140FC1D90 - 2));
    v15 = (_QWORD *)qword_140FC1DA0;
    if ( *(PVOID **)qword_140FC1DA0 == &qword_140FC1D98 )
    {
      *v14 = &qword_140FC1D98;
      v14[1] = v15;
      *v15 = v14;
      qword_140FC1DA0 = (__int64)v14;
      xmmword_140FC1DF0 = 0LL;
      dword_140FC1D90 = 3;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
  if ( dword_140FC1D90 != 3 )
  {
    if ( dword_140FC1D90 == 4 && (HANDLE)qword_140FC1DE0 == PsGetCurrentThreadId() )
      dword_140FC1D90 = 5;
    goto LABEL_41;
  }
  if ( (int)HalpAcquirePmuAccessRequest() >= 0 && !dword_140FC1D8C )
  {
    v2 = 1;
    if ( !i )
    {
      for ( i = (PVOID *)qword_140FC1D98; i != &qword_140FC1D98; i = (PVOID *)*i )
      {
        if ( !*((_BYTE *)i + 56) )
          goto LABEL_21;
      }
      goto LABEL_41;
    }
LABEL_21:
    dword_140FC1D90 = 4;
    qword_140FC1DE0 = (__int64)PsGetCurrentThreadId();
    dword_140FC1DE8 = *((_DWORD *)i + 8);
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)i + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    HalpPmuArbiterNotifyActor(i, 0LL);
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
    v11 = v10;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, (__int64)v10, (__int64)&HalpPmuArbiter);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    if ( dword_140FC1D90 == 4 )
    {
      dword_140FC1D90 = 3;
      goto LABEL_36;
    }
    if ( dword_140FC1D90 != 5 )
    {
LABEL_36:
      dword_140FC1DE8 = 0;
      qword_140FC1DE0 = 0LL;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)i + 6);
      goto LABEL_41;
    }
    if ( *((_BYTE *)i + 56) )
    {
      dword_140FC1D90 = 3;
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
        *(_QWORD *)&xmmword_140FC1DF0 = i;
        *((LARGE_INTEGER *)&xmmword_140FC1DF0 + 1) = KeQueryPerformanceCounter(0LL);
        dword_140FC1D90 = 2;
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
