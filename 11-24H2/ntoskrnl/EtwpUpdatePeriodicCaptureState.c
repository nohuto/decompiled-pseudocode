/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocateTimer @ 0x1403ADEA0 (ExAllocateTimer.c)
 *     ExCancelTimer @ 0x1403AF1B0 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1403B0B80 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpCheckNotificationAccess @ 0x14083638C (EtwpCheckNotificationAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(__int64 a1, unsigned int a2, unsigned __int16 a3, char *a4)
{
  __int64 v4; // r15
  int v5; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  int i; // ebx
  char *v12; // rax
  char *v13; // rdi
  __int64 v14; // rdi
  __int64 Pool2; // rax
  ULONG_PTR *v16; // r14
  void *v17; // rax
  __int64 Timer; // rax
  ULONG_PTR v19; // rcx
  signed __int64 v20; // rdx
  __int128 v23; // [rsp+28h] [rbp-50h] BYREF

  v4 = a3;
  v23 = 0LL;
  v5 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v9 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[52].Flink, v8, 0LL);
  v10 = v9;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 816) & 0x40) != 0 )
    {
      v5 = -1073741162;
LABEL_32:
      EtwpReleaseLoggerContext(v10, 0LL);
      return (unsigned int)v5;
    }
    for ( i = 0; i < (int)v4; ++i )
    {
      v5 = EtwpCheckNotificationAccess(&a4[16 * i], v10 + 276);
      if ( v5 < 0 )
      {
        v5 = -1073741790;
        goto LABEL_32;
      }
    }
    v12 = (char *)KeAbPreAcquire(v10 + 688, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 688), v12, v10 + 688);
    if ( v13 )
      v13[10] = 1;
    v14 = *(_QWORD *)(v10 + 1344);
    if ( v14 )
      goto LABEL_36;
    if ( !(_WORD)v4 )
    {
LABEL_29:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 688));
      KeAbPostRelease(v10 + 688);
      goto LABEL_32;
    }
    Pool2 = ExAllocatePool2(0x40uLL, 0x48uLL, 0x55777445u);
    *(_QWORD *)(v10 + 1344) = Pool2;
    v14 = Pool2;
    if ( Pool2 )
    {
LABEL_36:
      v16 = (ULONG_PTR *)(v14 + 8);
      if ( *(_QWORD *)(v14 + 24) )
      {
        if ( *v16 )
        {
          ExCancelTimer(*v16, 0LL);
          *(_DWORD *)(v14 + 64) = 0;
        }
        ExFreePoolWithTag(*(PVOID *)(v14 + 24), 0);
        *(_QWORD *)(v14 + 24) = 0LL;
        *(_WORD *)(v14 + 16) = 0;
      }
      if ( !(_WORD)v4 )
        goto LABEL_29;
      v17 = (void *)ExAllocatePool2(0x100uLL, 16 * v4, 0x55777445u);
      *(_QWORD *)(v14 + 24) = v17;
      if ( v17 )
      {
        *(_WORD *)(v14 + 16) = v4;
        memmove(v17, a4, 16 * v4);
        if ( !*v16 )
        {
          Timer = ExAllocateTimer((__int64)PeriodicCaptureStateTimerCallback, v10, 8u);
          *v16 = Timer;
          if ( !Timer )
          {
            ExFreePoolWithTag(*(PVOID *)(v14 + 24), 0);
            *(_QWORD *)(v14 + 24) = 0LL;
            *(_WORD *)(v14 + 16) = 0;
            goto LABEL_17;
          }
          *(_QWORD *)(v14 + 56) = v10;
          *(_QWORD *)(v14 + 48) = SendCaptureStateNotificationsWorker;
          *(_QWORD *)(v14 + 32) = 0LL;
        }
        *((_QWORD *)&v23 + 1) = -1LL;
        v19 = *v16;
        v20 = -10000000LL * a2;
        *(_QWORD *)v14 = v20;
        ExSetTimer(v19, v20, 0LL, (ULONG_PTR)&v23);
        *(_DWORD *)(v14 + 64) = 1;
        goto LABEL_29;
      }
    }
LABEL_17:
    v5 = -1073741801;
    goto LABEL_29;
  }
  return (unsigned int)-1073741811;
}
