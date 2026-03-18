/*
 * XREFs of HalpRequestPmuAccess @ 0x1406F2630
 * Callers:
 *     HalpAllocatePmcCounterSetEx @ 0x140542820 (HalpAllocatePmcCounterSetEx.c)
 *     HalAllocateHardwareCounters @ 0x1406F1880 (HalAllocateHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406F23C0 (HalpPmuArbiterPeriodicWorkItem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadId @ 0x140436710 (PsGetCurrentThreadId.c)
 *     HalpAcquirePmuAccessRequest @ 0x1405427C0 (HalpAcquirePmuAccessRequest.c)
 *     HalpPmuArbiterNotifyActor @ 0x1406F2384 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406F25E4 (HalpPmuArbiterUpdateActiveActorTime.c)
 */

__int64 HalpRequestPmuAccess()
{
  char v0; // r15
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rbp
  struct _EX_RUNDOWN_REF *v6; // r14
  struct _KTHREAD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbp
  struct _EX_RUNDOWN_REF **v10; // rcx

  v0 = 0;
  v1 = 0;
  if ( ((dword_140FC15F0 - 1) & 0xFFFFFFFD) == 0 )
    return (unsigned int)HalpAcquirePmuAccessRequest();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v3, (__int64)&HalpPmuArbiter);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( dword_140FC15F0 == 2 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)xmmword_140FC1650;
    dword_140FC15F0 = 4;
    dword_140FC1648 = *(_DWORD *)(xmmword_140FC1650 + 32);
    qword_140FC1640 = (__int64)PsGetCurrentThreadId();
    ExAcquireRundownProtection_0(v6 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    HalpPmuArbiterNotifyActor((__int64)v6);
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    v8 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
    v9 = v8;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v8, (__int64)&HalpPmuArbiter);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( dword_140FC15F0 == 4 )
    {
      v1 = -2147483631;
      if ( !*(_BYTE *)(xmmword_140FC1650 + 56) )
      {
        dword_140FC15F0 = 2;
        goto LABEL_26;
      }
    }
    else
    {
      if ( dword_140FC15F0 != 5 )
      {
LABEL_26:
        dword_140FC1648 = 0;
        qword_140FC1640 = 0LL;
        ExReleaseRundownProtection_0(v6 + 6);
        goto LABEL_27;
      }
      HalpPmuArbiterUpdateActiveActorTime();
      if ( *(_BYTE *)(xmmword_140FC1650 + 56) )
      {
LABEL_23:
        xmmword_140FC1650 = 0LL;
        dword_140FC15F0 = 3;
        goto LABEL_26;
      }
    }
    v10 = (struct _EX_RUNDOWN_REF **)qword_140FC1600;
    if ( *(PVOID **)qword_140FC1600 != &qword_140FC15F8 )
      __fastfail(3u);
    v6->Count = (unsigned __int64)&qword_140FC15F8;
    v6[1].Count = (unsigned __int64)v10;
    *v10 = v6;
    qword_140FC1600 = (__int64)v6;
    goto LABEL_23;
  }
  if ( dword_140FC15F0 != 4 )
  {
    if ( dword_140FC15F0 != 5 )
      goto LABEL_27;
    goto LABEL_9;
  }
  if ( (HANDLE)qword_140FC1640 != PsGetCurrentThreadId() )
  {
LABEL_9:
    v1 = -2147483631;
    goto LABEL_27;
  }
  dword_140FC15F0 = 5;
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
