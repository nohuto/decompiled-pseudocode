/*
 * XREFs of RaidUnitRestartQueue @ 0x140001B70
 * Callers:
 *     RaidUnitPauseTimerDpcRoutine @ 0x140001010 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidSetUnitPauseTimer @ 0x1400012E8 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x14000189C (RaidAdapterResumeUnit.c)
 *     RaUnitUnlockQueueSrb @ 0x140001EC8 (RaUnitUnlockQueueSrb.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterDeviceReady @ 0x140059CF8 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x140064FD0 (RaidCompletionDpcRoutine.c)
 *     RaUnitReleaseQueueSrb @ 0x140095AA4 (RaUnitReleaseQueueSrb.c)
 *     RaidResumeAndRestartUnitQueue @ 0x14009DA34 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1400A05A0 (RaidUnitRestartQueueDpcRoutine.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     RaidAdapterRestartGateway @ 0x1400290E0 (RaidAdapterRestartGateway.c)
 *     StorSubmitIoGatewayItem @ 0x140051730 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1, unsigned __int8 a2)
{
  KIRQL v3; // r15
  int v4; // r14d
  KIRQL v5; // al
  signed __int64 v6; // rsi
  KIRQL v7; // r13
  signed __int64 v8; // rax
  __int64 v9; // rax
  signed __int64 v10; // rdi
  char v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  signed __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  char v19; // dl
  bool v20; // zf
  __int64 v21; // rcx
  KIRQL v22; // al
  __int64 v23; // rdx
  int v24; // ecx
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]
  int v27; // [rsp+48h] [rbp-30h]

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v3 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = KfRaiseIrql(2u);
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792));
  v6 = *(_QWORD *)(a1 + 808);
  v7 = v5;
  if ( (v6 & 1) == 0 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
    ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v6 | 1, v6);
      v20 = v6 == v8;
      v6 = v8;
    }
    while ( !v20 && (v8 & 1) == 0 );
  }
  v9 = RiNormalizeDeviceQueue(a1 + 720, 0LL);
  v10 = *(_QWORD *)(a1 + 808);
  v11 = 0;
  v12 = v9;
  if ( (v10 & 3) != 0 )
  {
    while ( !*(_DWORD *)(a1 + 748)
         && !*(_DWORD *)(a1 + 736)
         && !*(_DWORD *)(a1 + 752)
         && !*(_BYTE *)(a1 + 757)
         && !*(_BYTE *)(a1 + 759)
         && !*(_BYTE *)(a1 + 756)
         && *(int *)(a1 + 744) <= 0
         && !*(_BYTE *)(a1 + 758) )
    {
      v13 = v10;
      if ( (v10 & 1) != 0 )
      {
        if ( !v11 )
        {
          ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
          v11 = 1;
        }
        v13 = v10 ^ 1;
      }
      v14 = v13 ^ 2;
      if ( (v10 & 2) == 0 )
        v14 = v13;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v14, v10);
      v20 = v10 == v15;
      v10 = v15;
      if ( v20 )
      {
        if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
        {
          v16 = *(_QWORD *)(a1 + 808);
          if ( (v16 & 3) == 0 )
          {
            do
            {
              v17 = v16;
              v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v16 | 2, v16);
            }
            while ( v17 != v16 && (v16 & 3) == 0 );
          }
        }
        break;
      }
      if ( (v15 & 3) == 0 )
        break;
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v7);
  if ( v12 )
  {
    if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), v12, &v25) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v12 - 120,
        &v25,
        a2);
      goto LABEL_47;
    }
    v18 = *(_QWORD *)(a1 + 728);
    v19 = *(_BYTE *)(*(_QWORD *)(v18 + 48) + 112LL);
    if ( FeatureFixKcsanRacyAccessV2 )
    {
      if ( (v19 & 4) == 0 || *(_DWORD *)(v18 + 40) != 1699901262 || !*(_DWORD *)(v18 + 24) )
        goto LABEL_47;
      v20 = *(_DWORD *)(v18 + 192) == 0;
    }
    else
    {
      if ( (v19 & 4) == 0 || *(_DWORD *)(v18 + 40) != 1699901262 || !*(_DWORD *)(v18 + 24) )
        goto LABEL_47;
      v20 = *(_DWORD *)(v18 + 192) == 0;
    }
    if ( v20 )
    {
      *(_DWORD *)(v18 + 40) = 0;
      RaidAdapterRestartGateway((PKSPIN_LOCK)v18);
    }
  }
LABEL_47:
  if ( !v4 )
    KeLowerIrql(v3);
  if ( !*(_BYTE *)(a1 + 759) )
  {
    v21 = *(_QWORD *)(a1 + 32);
    if ( v21 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 24));
      v23 = *(_QWORD *)(a1 + 32);
      v24 = *(_DWORD *)(v23 + 80);
      if ( (v24 & 8) != 0 )
      {
        *(_DWORD *)(v23 + 80) = v24 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x10u;
        KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v22);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL) = 0LL;
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
          RaAcquirePowerRefWorkRoutine,
          CriticalWorkQueue,
          (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 24), v22);
      }
    }
  }
}
