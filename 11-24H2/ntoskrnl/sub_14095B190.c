/*
 * XREFs of sub_14095B190 @ 0x14095B190
 * Callers:
 *     sub_14065402C @ 0x14065402C (sub_14065402C.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     ClipInitHandles @ 0x140653D60 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExGetExpirationDate @ 0x1407B8318 (ExGetExpirationDate.c)
 *     ntoskrnl_24 @ 0x1407B89D0 (ntoskrnl_24.c)
 *     sub_1407B9AF8 @ 0x1407B9AF8 (sub_1407B9AF8.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     ntoskrnl_20 @ 0x14095B5C0 (ntoskrnl_20.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     sub_140C5E95C @ 0x140C5E95C (sub_140C5E95C.c)
 */

void sub_14095B190()
{
  struct _LIST_ENTRY *Blink; // rdi
  char Flink; // r12
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_Blink; // rsi
  char *v5; // rax
  char *v6; // r14
  struct _KTHREAD *v7; // rax
  char *v8; // rax
  char *v9; // r14
  struct _KTHREAD *v10; // rax
  char *v11; // rax
  char *v12; // r14
  int v13; // r15d
  char v14; // r14
  __int64 Flink_low; // rdx
  struct _LIST_ENTRY *v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  struct _KTHREAD *v19; // rax
  char *v20; // rax
  char *v21; // r14
  struct _KTHREAD *v22; // rax
  char *v23; // rax
  char *v24; // rsi
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  int ExpirationDate; // eax
  LARGE_INTEGER v28; // rcx
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v30[5]; // [rsp+28h] [rbp-48h] BYREF
  char v31; // [rsp+50h] [rbp-20h]
  int v32; // [rsp+51h] [rbp-1Fh]
  __int16 v33; // [rsp+55h] [rbp-1Bh]
  char v34; // [rsp+57h] [rbp-19h]
  struct _LIST_ENTRY v35; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  Flink = (char)Blink[2937].Flink;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140C5E95C();
  }
  CurrentThread = KeGetCurrentThread();
  p_Blink = (volatile signed __int64 *)&Blink[2927].Blink;
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v5, (__int64)&Blink[2927].Blink);
  if ( v6 )
    v6[10] = 1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  memset(v30, 0, 32);
  v30[4] = 10800LL;
  v31 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v31 = 0;
  ntoskrnl_20(Blink, v30, 0xFFFFFFFFLL, 1LL);
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v8, (__int64)&Blink[2927].Blink);
  if ( v9 )
    v9[10] = 1;
  LODWORD(Blink->Blink) = 0;
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  if ( Blink->Flink )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = (char *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v11, (__int64)&Blink[2927].Blink);
    if ( v12 )
      v12[10] = 1;
    v13 = sub_1407B9AF8((unsigned int **)Blink);
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
      Flink_low = LODWORD(Blink->Flink[5120].Flink);
      if ( qword_140FD84B0 )
        guard_dispatch_icall_no_overrides(Blink, Flink_low);
      else
        SLUpdateLicenseDataInternal((__int64)Blink, Flink_low, (unsigned int *)Blink->Flink);
    }
    v16 = &v35;
    v17 = 16LL;
    do
    {
      v18 = __rdtsc();
      LOBYTE(v16->Flink) = v18;
      v16 = (struct _LIST_ENTRY *)((char *)v16 + 1);
      --v17;
    }
    while ( v17 );
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (char *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v20, (__int64)&Blink[2927].Blink);
    if ( v21 )
      v21[10] = 1;
    *(struct _LIST_ENTRY *)((char *)Blink + 46993) = v35;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v23 = (char *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v23, (__int64)&Blink[2927].Blink);
    if ( v24 )
      v24[10] = 1;
    v25 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v25) && Blink->Flink )
      ExFreePoolWithTag(Blink->Flink, 0x69534C53u);
    Blink->Flink = 0LL;
    if ( !Blink[2927].Flink )
    {
      v26 = (unsigned int)Blink[2926].Blink;
      if ( v26 )
      {
        memset_0(&Blink[1].Blink, 0, 16LL * v26);
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
    v28 = Time;
    if ( ExpirationDate < 0 )
      v28.QuadPart = 0LL;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = v28;
  }
}
