/*
 * XREFs of HalpUnregisterPmuNotification @ 0x140AADA0C
 * Callers:
 *     HalpSetSystemInformation @ 0x140A95A10 (HalpSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExDeleteTimer @ 0x1403AE2F0 (ExDeleteTimer.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpUnregisterPmuNotification(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rsi
  char v2; // r15
  char v4; // bp
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  signed __int8 v8; // cf
  char *v9; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  int v11; // eax
  struct _EX_RUNDOWN_REF *v12; // rcx
  struct _KTHREAD *v13; // rcx
  char *v14; // rax
  char *v15; // rdi
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v17; // rax

  v1 = 0LL;
  v2 = 0;
  v4 = 1;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741735;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v7, (__int64)&HalpPmuArbiter);
  if ( v9 )
    v9[10] = 1;
  if ( !dword_140FC2008 || dword_140FC1FF0 == 1 )
  {
LABEL_38:
    v5 = -1073741275;
  }
  else
  {
    for ( i = (struct _EX_RUNDOWN_REF *)qword_140FC1FF8; ; i = (struct _EX_RUNDOWN_REF *)i->Count )
    {
      v11 = *(_DWORD *)(a1 + 4);
      if ( i == (struct _EX_RUNDOWN_REF *)&qword_140FC1FF8 )
        break;
      v1 = i;
      if ( LODWORD(i[4].Count) == v11 )
      {
        LOBYTE(i[7].Count) = 1;
        goto LABEL_17;
      }
    }
    v12 = (struct _EX_RUNDOWN_REF *)xmmword_140FC2050;
    if ( *(_DWORD *)(xmmword_140FC2050 + 32) != v11 )
      goto LABEL_38;
    *(_BYTE *)(xmmword_140FC2050 + 56) = 1;
    v1 = v12;
    v2 = 1;
    if ( dword_140FC1FF0 == 2 )
    {
      xmmword_140FC2050 = 0LL;
      dword_140FC1FF0 = 3;
    }
LABEL_17:
    if ( (dword_140FC1FF0 == 4 || dword_140FC1FF0 == 5) && dword_140FC2048 == *(_DWORD *)(a1 + 4) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
      KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease(v1 + 6);
      _InterlockedExchange64((volatile __int64 *)&v1[6], 1LL);
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      v14 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
      v8 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
      v15 = v14;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v14, (__int64)&HalpPmuArbiter);
      if ( v15 )
        v15[10] = 1;
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
    if ( --dword_140FC2008 )
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
      ExDeleteTimer(qword_140FC2010, 1, 0, 0LL);
      qword_140FC2010 = 0LL;
      dword_140FC1FF0 = 1;
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
