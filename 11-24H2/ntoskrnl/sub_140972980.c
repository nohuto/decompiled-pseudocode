/*
 * XREFs of sub_140972980 @ 0x140972980
 * Callers:
 *     sub_14065592C @ 0x14065592C (sub_14065592C.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     ClipInitHandles @ 0x140655660 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExGetExpirationDate @ 0x1407B7EC8 (ExGetExpirationDate.c)
 *     ntoskrnl_24 @ 0x1407B8580 (ntoskrnl_24.c)
 *     sub_1407B96A8 @ 0x1407B96A8 (sub_1407B96A8.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     ntoskrnl_20 @ 0x140972DB0 (ntoskrnl_20.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     sub_140C5C7CC @ 0x140C5C7CC (sub_140C5C7CC.c)
 */

void sub_140972980()
{
  struct _LIST_ENTRY *Blink; // rdi
  char Flink; // r12
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_Blink; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  struct _KTHREAD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  struct _KTHREAD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  int v13; // r15d
  char v14; // r14
  __int64 v15; // r9
  unsigned int *v16; // r8
  __int64 Flink_low; // rdx
  struct _LIST_ENTRY *v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  struct _KTHREAD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  struct _KTHREAD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  int ExpirationDate; // eax
  LARGE_INTEGER v30; // rcx
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v32[5]; // [rsp+28h] [rbp-48h] BYREF
  char v33; // [rsp+50h] [rbp-20h]
  int v34; // [rsp+51h] [rbp-1Fh]
  __int16 v35; // [rsp+55h] [rbp-1Bh]
  char v36; // [rsp+57h] [rbp-19h]
  struct _LIST_ENTRY v37; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  Flink = (char)Blink[2937].Flink;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140C5C7CC();
  }
  CurrentThread = KeGetCurrentThread();
  p_Blink = (volatile signed __int64 *)&Blink[2927].Blink;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, (__int64)v5, (__int64)&Blink[2927].Blink);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  memset(v32, 0, 32);
  v32[4] = 10800LL;
  v33 = 1;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    v33 = 0;
  ntoskrnl_20(Blink, v32, 0xFFFFFFFFLL, 1LL);
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, (__int64)v8, (__int64)&Blink[2927].Blink);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  LODWORD(Blink->Blink) = 0;
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  if ( Blink->Flink )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, (__int64)v11, (__int64)&Blink[2927].Blink);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    v13 = sub_1407B96A8((unsigned int **)Blink);
    if ( v13 == -1073741762 )
      LOBYTE(Blink[2937].Flink) = 1;
    v14 = (char)Blink[2937].Flink;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    if ( !Flink && v14 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v13 >= 0 && !v14 )
    {
      v16 = (unsigned int *)Blink->Flink;
      Flink_low = LODWORD(Blink->Flink[5120].Flink);
      if ( qword_140FD74A0 )
        guard_dispatch_icall_no_overrides(Blink, Flink_low, v16, v15);
      else
        SLUpdateLicenseDataInternal((__int64)Blink, Flink_low, v16);
    }
    v18 = &v37;
    v19 = 16LL;
    do
    {
      v20 = __rdtsc();
      LOBYTE(v18->Flink) = v20;
      v18 = (struct _LIST_ENTRY *)((char *)v18 + 1);
      --v19;
    }
    while ( v19 );
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, (__int64)v22, (__int64)&Blink[2927].Blink);
    if ( v23 )
      *((_BYTE *)v23 + 10) = 1;
    *(struct _LIST_ENTRY *)((char *)Blink + 46993) = v37;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, (__int64)v25, (__int64)&Blink[2927].Blink);
    if ( v26 )
      *((_BYTE *)v26 + 10) = 1;
    v27 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v27) && Blink->Flink )
      ExFreePoolWithTag(Blink->Flink, 0x69534C53u);
    Blink->Flink = 0LL;
    if ( !Blink[2927].Flink )
    {
      v28 = (unsigned int)Blink[2926].Blink;
      if ( v28 )
      {
        memset_0(&Blink[1].Blink, 0, 16LL * v28);
        LODWORD(Blink[2926].Blink) = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v30 = Time;
    if ( ExpirationDate < 0 )
      v30.QuadPart = 0LL;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = v30;
  }
}
