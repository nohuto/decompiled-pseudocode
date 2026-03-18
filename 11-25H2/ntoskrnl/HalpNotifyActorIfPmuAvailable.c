/*
 * XREFs of HalpNotifyActorIfPmuAvailable @ 0x1406F20B0
 * Callers:
 *     HalpFreePmcCounterSet @ 0x1405432F0 (HalpFreePmcCounterSet.c)
 *     HalFreeHardwareCounters @ 0x1406F1A10 (HalFreeHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406F23C0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpRegisterPmuNotification @ 0x1406F6E1C (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140AAD9FC (HalpUnregisterPmuNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadId @ 0x140436710 (PsGetCurrentThreadId.c)
 *     HalpAcquirePmuAccessRequest @ 0x1405427C0 (HalpAcquirePmuAccessRequest.c)
 *     HalpReleasePmuAccessRequest @ 0x140543780 (HalpReleasePmuAccessRequest.c)
 *     HalpPmuArbiterNotifyActor @ 0x1406F2384 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406F25E4 (HalpPmuArbiterUpdateActiveActorTime.c)
 */

void __fastcall HalpNotifyActorIfPmuAvailable(PVOID *i, char a2)
{
  char v2; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rbp
  struct _KTHREAD *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rbp
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx

  v2 = 0;
  if ( !a2 && (dword_140FC15EC || (unsigned int)(dword_140FC15F0 - 3) > 1) )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v6, (__int64)&HalpPmuArbiter);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( dword_140FC15F0 == 2 )
  {
    if ( !a2 )
      goto LABEL_41;
    v14 = (_QWORD *)xmmword_140FC1650;
    HalpPmuArbiterUpdateActiveActorTime((unsigned int)(dword_140FC15F0 - 2));
    v15 = (_QWORD *)qword_140FC1600;
    if ( *(PVOID **)qword_140FC1600 == &qword_140FC15F8 )
    {
      *v14 = &qword_140FC15F8;
      v14[1] = v15;
      *v15 = v14;
      qword_140FC1600 = (__int64)v14;
      xmmword_140FC1650 = 0LL;
      dword_140FC15F0 = 3;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
  if ( dword_140FC15F0 != 3 )
  {
    if ( dword_140FC15F0 == 4 && (HANDLE)qword_140FC1640 == PsGetCurrentThreadId() )
      dword_140FC15F0 = 5;
    goto LABEL_41;
  }
  if ( (int)HalpAcquirePmuAccessRequest() >= 0 && !dword_140FC15EC )
  {
    v2 = 1;
    if ( !i )
    {
      for ( i = (PVOID *)qword_140FC15F8; i != &qword_140FC15F8; i = (PVOID *)*i )
      {
        if ( !*((_BYTE *)i + 56) )
          goto LABEL_21;
      }
      goto LABEL_41;
    }
LABEL_21:
    dword_140FC15F0 = 4;
    qword_140FC1640 = (__int64)PsGetCurrentThreadId();
    dword_140FC1648 = *((_DWORD *)i + 8);
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)i + 6);
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
      ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v10, (__int64)&HalpPmuArbiter);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    if ( dword_140FC15F0 == 4 )
    {
      dword_140FC15F0 = 3;
      goto LABEL_36;
    }
    if ( dword_140FC15F0 != 5 )
    {
LABEL_36:
      dword_140FC1648 = 0;
      qword_140FC1640 = 0LL;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)i + 6);
      goto LABEL_41;
    }
    if ( *((_BYTE *)i + 56) )
    {
      dword_140FC15F0 = 3;
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
        *(_QWORD *)&xmmword_140FC1650 = i;
        *((LARGE_INTEGER *)&xmmword_140FC1650 + 1) = KeQueryPerformanceCounter(0LL);
        dword_140FC15F0 = 2;
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
