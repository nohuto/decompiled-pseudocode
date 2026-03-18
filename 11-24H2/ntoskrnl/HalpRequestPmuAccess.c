/*
 * XREFs of HalpRequestPmuAccess @ 0x1406FE420
 * Callers:
 *     HalpAllocatePmcCounterSetEx @ 0x140545110 (HalpAllocatePmcCounterSetEx.c)
 *     HalAllocateHardwareCounters @ 0x1406FD670 (HalAllocateHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FE1B0 (HalpPmuArbiterPeriodicWorkItem.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentThreadId @ 0x1404330A0 (PsGetCurrentThreadId.c)
 *     HalpAcquirePmuAccessRequest @ 0x1405450B0 (HalpAcquirePmuAccessRequest.c)
 *     HalpPmuArbiterNotifyActor @ 0x1406FE174 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406FE3D4 (HalpPmuArbiterUpdateActiveActorTime.c)
 */

__int64 HalpRequestPmuAccess()
{
  char v0; // r15
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rbp
  struct _EX_RUNDOWN_REF *v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  struct _EX_RUNDOWN_REF **v12; // rcx

  v0 = 0;
  v1 = 0;
  if ( ((dword_140FC1D90 - 1) & 0xFFFFFFFD) == 0 )
    return (unsigned int)HalpAcquirePmuAccessRequest();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, (__int64)v3, (__int64)&HalpPmuArbiter);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( dword_140FC1D90 == 2 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)xmmword_140FC1DF0;
    dword_140FC1D90 = 4;
    dword_140FC1DE8 = *(_DWORD *)(xmmword_140FC1DF0 + 32);
    qword_140FC1DE0 = (__int64)PsGetCurrentThreadId();
    ExAcquireRundownProtection(v6 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    HalpPmuArbiterNotifyActor((__int64)v6, 1, v7, v8);
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
    v11 = v10;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, (__int64)v10, (__int64)&HalpPmuArbiter);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    if ( dword_140FC1D90 == 4 )
    {
      v1 = -2147483631;
      if ( !*(_BYTE *)(xmmword_140FC1DF0 + 56) )
      {
        dword_140FC1D90 = 2;
        goto LABEL_26;
      }
    }
    else
    {
      if ( dword_140FC1D90 != 5 )
      {
LABEL_26:
        dword_140FC1DE8 = 0;
        qword_140FC1DE0 = 0LL;
        ExReleaseRundownProtection_0(v6 + 6);
        goto LABEL_27;
      }
      HalpPmuArbiterUpdateActiveActorTime();
      if ( *(_BYTE *)(xmmword_140FC1DF0 + 56) )
      {
LABEL_23:
        xmmword_140FC1DF0 = 0LL;
        dword_140FC1D90 = 3;
        goto LABEL_26;
      }
    }
    v12 = (struct _EX_RUNDOWN_REF **)qword_140FC1DA0;
    if ( *(PVOID **)qword_140FC1DA0 != &qword_140FC1D98 )
      __fastfail(3u);
    v6->Count = (unsigned __int64)&qword_140FC1D98;
    v6[1].Count = (unsigned __int64)v12;
    *v12 = v6;
    qword_140FC1DA0 = (__int64)v6;
    goto LABEL_23;
  }
  if ( dword_140FC1D90 != 4 )
  {
    if ( dword_140FC1D90 != 5 )
      goto LABEL_27;
    goto LABEL_9;
  }
  if ( (HANDLE)qword_140FC1DE0 != PsGetCurrentThreadId() )
  {
LABEL_9:
    v1 = -2147483631;
    goto LABEL_27;
  }
  dword_140FC1D90 = 5;
  v0 = 1;
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
  KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  if ( v1 >= 0 && !v0 )
    return (unsigned int)HalpAcquirePmuAccessRequest();
  return (unsigned int)v1;
}
