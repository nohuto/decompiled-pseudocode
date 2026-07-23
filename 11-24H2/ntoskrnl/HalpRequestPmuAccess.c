/*
 * XREFs of HalpRequestPmuAccess @ 0x1406FC060
 * Callers:
 *     HalpAllocatePmcCounterSetEx @ 0x1405429D0 (HalpAllocatePmcCounterSetEx.c)
 *     HalAllocateHardwareCounters @ 0x1406FB2B0 (HalAllocateHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FBDF0 (HalpPmuArbiterPeriodicWorkItem.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentThreadId @ 0x1404251E0 (PsGetCurrentThreadId.c)
 *     HalpAcquirePmuAccessRequest @ 0x140542970 (HalpAcquirePmuAccessRequest.c)
 *     HalpPmuArbiterNotifyActor @ 0x1406FBDB4 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406FC014 (HalpPmuArbiterUpdateActiveActorTime.c)
 */

__int64 HalpRequestPmuAccess()
{
  char v0; // r15
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rbp
  struct _EX_RUNDOWN_REF *v6; // r14
  struct _KTHREAD *v7; // rax
  char *v8; // rax
  char *v9; // rbp
  struct _EX_RUNDOWN_REF **v10; // rcx

  v0 = 0;
  v1 = 0;
  if ( ((dword_140FC1FF0 - 1) & 0xFFFFFFFD) == 0 )
    return (unsigned int)HalpAcquirePmuAccessRequest();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v3, (__int64)&HalpPmuArbiter);
  if ( v5 )
    v5[10] = 1;
  if ( dword_140FC1FF0 == 2 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)xmmword_140FC2050;
    dword_140FC1FF0 = 4;
    dword_140FC2048 = *(_DWORD *)(xmmword_140FC2050 + 32);
    qword_140FC2040 = (__int64)PsGetCurrentThreadId();
    ExAcquireRundownProtection_0(v6 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    HalpPmuArbiterNotifyActor((__int64)v6, 1);
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    v8 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
    v9 = v8;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v8, (__int64)&HalpPmuArbiter);
    if ( v9 )
      v9[10] = 1;
    if ( dword_140FC1FF0 == 4 )
    {
      v1 = -2147483631;
      if ( !*(_BYTE *)(xmmword_140FC2050 + 56) )
      {
        dword_140FC1FF0 = 2;
        goto LABEL_26;
      }
    }
    else
    {
      if ( dword_140FC1FF0 != 5 )
      {
LABEL_26:
        dword_140FC2048 = 0;
        qword_140FC2040 = 0LL;
        ExReleaseRundownProtection_0(v6 + 6);
        goto LABEL_27;
      }
      HalpPmuArbiterUpdateActiveActorTime();
      if ( *(_BYTE *)(xmmword_140FC2050 + 56) )
      {
LABEL_23:
        xmmword_140FC2050 = 0LL;
        dword_140FC1FF0 = 3;
        goto LABEL_26;
      }
    }
    v10 = (struct _EX_RUNDOWN_REF **)qword_140FC2000;
    if ( *(PVOID **)qword_140FC2000 != &qword_140FC1FF8 )
      __fastfail(3u);
    v6->Count = (unsigned __int64)&qword_140FC1FF8;
    v6[1].Count = (unsigned __int64)v10;
    *v10 = v6;
    qword_140FC2000 = (__int64)v6;
    goto LABEL_23;
  }
  if ( dword_140FC1FF0 != 4 )
  {
    if ( dword_140FC1FF0 != 5 )
      goto LABEL_27;
    goto LABEL_9;
  }
  if ( (HANDLE)qword_140FC2040 != PsGetCurrentThreadId() )
  {
LABEL_9:
    v1 = -2147483631;
    goto LABEL_27;
  }
  dword_140FC1FF0 = 5;
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
