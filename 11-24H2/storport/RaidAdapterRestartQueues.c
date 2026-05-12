/*
 * XREFs of RaidAdapterRestartQueues @ 0x14000FD00
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaidAdapterCancelPauseTimer @ 0x14003C0D0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x14005E280 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x14006179C (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x140064FD0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x140065B60 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     RaidAdapterRestartGateway @ 0x1400290E0 (RaidAdapterRestartGateway.c)
 *     StorNextIoGatewayItem @ 0x140029150 (StorNextIoGatewayItem.c)
 *     StorSubmitIoGatewayItem @ 0x140051730 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1, char a2)
{
  char v2; // bp
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rbx
  __int64 IoGatewayItem; // rax
  __int64 v7; // rcx
  __int64 *v8; // r14
  KIRQL v9; // r12
  int v10; // r15d
  KIRQL v11; // al
  signed __int64 v12; // rsi
  KIRQL v13; // r13
  signed __int64 v14; // rax
  __int64 v15; // rax
  signed __int64 v16; // rdi
  char v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // r9
  __int64 v25; // rcx
  char v26; // dl
  bool v27; // zf
  __int64 v28; // rcx
  KIRQL v29; // al
  __int64 v30; // rdx
  int v31; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-98h] BYREF
  __int128 i; // [rsp+48h] [rbp-80h] BYREF
  __int64 v34; // [rsp+58h] [rbp-70h]
  int v35; // [rsp+60h] [rbp-68h]
  __int128 v36; // [rsp+68h] [rbp-60h] BYREF
  __int64 v37; // [rsp+78h] [rbp-50h]
  int v38; // [rsp+80h] [rbp-48h]
  __int64 *v39; // [rsp+D0h] [rbp+8h]

  v2 = a2;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 968) )
  {
    do
    {
      v5 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 960) + 320 * v4);
      v34 = 0LL;
      v35 = 0;
      for ( i = 0LL;
            ;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v7 + 712))(
              *(_QWORD *)(v7 + 704),
              IoGatewayItem - 120,
              &i,
              0LL) )
      {
        IoGatewayItem = StorNextIoGatewayItem(v5);
        if ( !IoGatewayItem )
          break;
        v7 = *(_QWORD *)(*(_QWORD *)(IoGatewayItem - 120 + 184) + 32LL);
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 968) );
  }
  if ( !v2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v8 = *(__int64 **)(a1 + 144);
  v39 = (__int64 *)(a1 + 144);
  if ( v8 != (__int64 *)(a1 + 144) )
  {
    while ( 1 )
    {
      v36 = 0LL;
      v37 = 0LL;
      v9 = 0;
      v38 = 0;
      if ( KeGetCurrentIrql() == 2 )
      {
        v10 = 1;
      }
      else
      {
        v10 = 0;
        v9 = KfRaiseIrql(2u);
      }
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v8 + 182);
      v12 = v8[93];
      v13 = v11;
      if ( (v12 & 1) == 0 )
      {
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v8 + 92);
        ExRundownCompleted((PEX_RUNDOWN_REF)v8 + 92);
        do
        {
          v14 = _InterlockedCompareExchange64(v8 + 93, v12 | 1, v12);
          v27 = v12 == v14;
          v12 = v14;
        }
        while ( !v27 && (v14 & 1) == 0 );
      }
      v15 = RiNormalizeDeviceQueue(v8 + 82, 0LL);
      v16 = v8[93];
      v17 = 0;
      v18 = v15;
      if ( (v16 & 3) != 0 )
      {
        while ( !*((_DWORD *)v8 + 171)
             && !*((_DWORD *)v8 + 168)
             && !*((_DWORD *)v8 + 172)
             && !*((_BYTE *)v8 + 693)
             && !*((_BYTE *)v8 + 695)
             && !*((_BYTE *)v8 + 692)
             && *((int *)v8 + 170) <= 0
             && !*((_BYTE *)v8 + 694) )
        {
          v19 = v16;
          if ( (v16 & 1) != 0 )
          {
            if ( !v17 )
            {
              ExReInitializeRundownProtection((PEX_RUNDOWN_REF)v8 + 92);
              v17 = 1;
            }
            v19 = v16 ^ 1;
          }
          v20 = v19 ^ 2;
          if ( (v16 & 2) == 0 )
            v20 = v19;
          v21 = _InterlockedCompareExchange64(v8 + 93, v20, v16);
          v27 = v16 == v21;
          v16 = v21;
          if ( v27 )
          {
            if ( *((_BYTE *)v8 + 693) || *((_BYTE *)v8 + 695) || *((_BYTE *)v8 + 692) || *((int *)v8 + 170) > 0 )
            {
              v22 = v8[93];
              if ( (v22 & 3) == 0 )
              {
                do
                {
                  v23 = v22;
                  v22 = _InterlockedCompareExchange64(v8 + 93, v22 | 2, v22);
                }
                while ( v23 != v22 && (v22 & 3) == 0 );
              }
            }
            break;
          }
          if ( (v21 & 3) == 0 )
            break;
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v8 + 182, v13);
      if ( !v18 )
        goto LABEL_55;
      if ( (unsigned __int8)StorSubmitIoGatewayItem(v8[83], v18, &v36) )
      {
        v25 = v8[83];
        v26 = *(_BYTE *)(*(_QWORD *)(v25 + 48) + 112LL);
        if ( FeatureFixKcsanRacyAccessV2 )
        {
          if ( (v26 & 4) != 0 && *(_DWORD *)(v25 + 40) == 1699901262 && *(_DWORD *)(v25 + 24) )
          {
            v27 = *(_DWORD *)(v25 + 192) == 0;
            goto LABEL_53;
          }
        }
        else if ( (v26 & 4) != 0 && *(_DWORD *)(v25 + 40) == 1699901262 && *(_DWORD *)(v25 + 24) )
        {
          v27 = *(_DWORD *)(v25 + 192) == 0;
LABEL_53:
          if ( v27 )
          {
            *(_DWORD *)(v25 + 40) = 0;
            RaidAdapterRestartGateway((PKSPIN_LOCK)v25);
          }
        }
      }
      else
      {
        LOBYTE(v24) = 1;
        ((void (__fastcall *)(__int64, __int64, __int128 *, __int64))v8[81])(v8[80], v18 - 120, &v36, v24);
      }
LABEL_55:
      if ( !v10 )
        KeLowerIrql(v9);
      if ( !*((_BYTE *)v8 + 695) )
      {
        v28 = *(v8 - 4);
        if ( v28 )
        {
          v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 24));
          v30 = *(v8 - 4);
          v31 = *(_DWORD *)(v30 + 80);
          if ( (v31 & 8) != 0 )
          {
            *(_DWORD *)(v30 + 80) = v31 & 0xFFFFFFF7;
            *(_DWORD *)(*(v8 - 4) + 80) |= 0x10u;
            KeReleaseSpinLock((PKSPIN_LOCK)(*(v8 - 4) + 24), v29);
            *(_QWORD *)(*(v8 - 4) + 72) = 0LL;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(*(v8 - 4) + 64),
              RaAcquirePowerRefWorkRoutine,
              CriticalWorkQueue,
              (PVOID)(*(v8 - 4) + 64));
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 24), v29);
          }
        }
      }
      v8 = (__int64 *)*v8;
      if ( v8 == v39 )
      {
        v2 = a2;
        break;
      }
    }
  }
  if ( !v2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
