/*
 * XREFs of HalpUnregisterPmuNotification @ 0x140AAD9FC
 * Callers:
 *     HalpSetSystemInformation @ 0x140A94780 (HalpSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExDeleteTimer @ 0x14036F520 (ExDeleteTimer.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpUnregisterPmuNotification(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rsi
  char v2; // r15
  char v4; // bp
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rax
  signed __int8 v8; // cf
  __int64 *v9; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  int v11; // eax
  struct _EX_RUNDOWN_REF *v12; // rcx
  struct _KTHREAD *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rdi
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v17; // rax

  v1 = 0LL;
  v2 = 0;
  v4 = 1;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741735;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v7, (__int64)&HalpPmuArbiter);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( !dword_140FC1608 || dword_140FC15F0 == 1 )
  {
LABEL_38:
    v5 = -1073741275;
  }
  else
  {
    for ( i = (struct _EX_RUNDOWN_REF *)qword_140FC15F8; ; i = (struct _EX_RUNDOWN_REF *)i->Count )
    {
      v11 = *(_DWORD *)(a1 + 4);
      if ( i == (struct _EX_RUNDOWN_REF *)&qword_140FC15F8 )
        break;
      v1 = i;
      if ( LODWORD(i[4].Count) == v11 )
      {
        LOBYTE(i[7].Count) = 1;
        goto LABEL_17;
      }
    }
    v12 = (struct _EX_RUNDOWN_REF *)xmmword_140FC1650;
    if ( *(_DWORD *)(xmmword_140FC1650 + 32) != v11 )
      goto LABEL_38;
    *(_BYTE *)(xmmword_140FC1650 + 56) = 1;
    v1 = v12;
    v2 = 1;
    if ( dword_140FC15F0 == 2 )
    {
      xmmword_140FC1650 = 0LL;
      dword_140FC15F0 = 3;
    }
LABEL_17:
    if ( (dword_140FC15F0 == 4 || dword_140FC15F0 == 5) && dword_140FC1648 == *(_DWORD *)(a1 + 4) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
      KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease(v1 + 6);
      _InterlockedExchange64((volatile __int64 *)&v1[6], 1LL);
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      v14 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
      v8 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
      v15 = v14;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v14, (__int64)&HalpPmuArbiter);
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
    }
    if ( !v2 )
    {
      Count = v1->Count;
      v17 = (struct _EX_RUNDOWN_REF **)v1[1].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v1->Count + 8) != v1 || *v17 != v1 )
        __fastfail(3u);
      *v17 = (struct _EX_RUNDOWN_REF *)Count;
      *(_QWORD *)(Count + 8) = v17;
    }
    if ( --dword_140FC1608 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
      KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
      KeLeaveCriticalRegion();
      v4 = 0;
      HalpNotifyActorIfPmuAvailable(0LL, 0);
    }
    else
    {
      ExDeleteTimer(qword_140FC1610, 1, 0, 0LL);
      qword_140FC1610 = 0LL;
      dword_140FC15F0 = 1;
    }
    v5 = 0;
    if ( !v4 )
      goto LABEL_42;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
  KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
LABEL_42:
    ExWaitForRundownProtectionRelease(v1 + 6);
    ExFreePoolWithTag(v1, 0);
  }
  return (unsigned int)v5;
}
