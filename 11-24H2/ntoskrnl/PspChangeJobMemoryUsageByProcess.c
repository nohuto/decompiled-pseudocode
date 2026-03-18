/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1408E84D0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140430F60 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MmAssignProcessToJob @ 0x1408E8398 (MmAssignProcessToJob.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspSendJobNotification @ 0x140493C70 (PspSendJobNotification.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1408E8E50 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x1408E93F0 (PspLockJobMemoryLimitsExclusive.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  char v8; // si
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rdi
  unsigned __int64 v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // r13
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  BOOL v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r13
  $81B80DCEA5A02D890AB7B2872B48AC01 *v26; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  unsigned __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+A8h] [rbp+20h]

  v42 = a4;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 672) )
    return 1;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v37 = *(_QWORD *)(*(_QWORD *)(a3 + 632) + 1312LL);
  v36 = 0LL;
  v35 = 0;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v37 )
  {
    v9 = KeAbPreAcquire(v37 + 1264, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 1264), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 1264), (__int64)v9, v37 + 1264);
    a4 = v42;
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = v37;
  if ( (a1 & 4) != 0 )
  {
    v12 = a4;
    v39 = a4;
    a4 = 0LL;
    v42 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 632);
    v39 = v12;
  }
  v13 = v12;
  if ( v12 != a4 )
  {
    while ( 1 )
    {
      v14 = 0LL;
      if ( v13 != v11 )
      {
        v15 = KeAbPreAcquire(v13 + 1264, 0LL);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 1264), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 + 1264), (__int64)v15, v13 + 1264);
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        v14 = 0LL;
      }
      v17 = a2;
      v18 = *(_QWORD *)(v13 + 1208);
      v19 = v18 + a2;
      if ( a2 <= 0 )
      {
        if ( v19 > v18 )
        {
          PspUnlockJobMemoryLimitsExclusive(v13, v11, 0LL);
          v30 = v13;
          if ( !v8 )
            v30 = v36;
          v8 = 0;
          v6 = v30;
          v36 = v30;
          goto LABEL_38;
        }
      }
      else if ( v19 < v18 )
      {
        if ( v8 )
        {
          v36 = v13;
          v8 = 0;
        }
        PspUnlockJobMemoryLimitsExclusive(v13, v11, 0LL);
        goto LABEL_37;
      }
      v20 = 0;
      v21 = *(_DWORD *)(v13 + 256);
      v22 = v19 + *(_QWORD *)(v13 + 1568);
      v38 = v22;
      if ( (v21 & 0x200000) != 0 && v22 > *(_QWORD *)(v13 + 704) )
        v20 = a2 > 0;
      if ( (v21 & 0x200) != 0 && v19 > *(_QWORD *)(v13 + 696) && a2 > 0 || v20 )
        break;
      if ( v8 )
      {
        *(_QWORD *)(v13 + 1208) = v19;
LABEL_26:
        v23 = *(_QWORD *)(v13 + 1216);
        if ( v23 )
        {
          v31 = *(_QWORD *)(v23 + 40);
          if ( (*(_DWORD *)v23 & 0x200000) == 0 )
            v22 = v19;
          v32 = 0;
          if ( v31 && v17 > 0 && v22 > v31 )
            v32 = 512;
          v33 = *(_QWORD *)(v23 + 32);
          if ( v33 && v17 <= 0 && v22 < v33 )
            v32 |= 0x8000u;
          v35 |= v32;
        }
      }
LABEL_27:
      if ( v17 > 0 )
      {
        if ( v19 > *(_QWORD *)(v13 + 720) )
          *(_QWORD *)(v13 + 720) = v19;
        v14 = *(_QWORD *)(a3 + 984);
      }
      if ( v13 != v11 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 1264));
        KeAbPostRelease(v13 + 1264);
      }
      if ( v14 && v14 > *(_QWORD *)(v13 + 712) )
      {
        _m_prefetchw((const void *)(v13 + 712));
        v28 = *(_QWORD *)(v13 + 712);
        do
        {
          if ( v14 <= v28 )
            break;
          v29 = v28;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 712), v14, v28);
        }
        while ( v28 != v29 );
      }
LABEL_37:
      v6 = v36;
LABEL_38:
      v13 = *(_QWORD *)(v13 + 1304);
      if ( v13 == v42 )
      {
        if ( v8 )
        {
          if ( v35 )
          {
            _InterlockedOr((volatile signed __int32 *)(v11 + 1552), 0x100000u);
            _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
            if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
              ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
          }
        }
        else
        {
          v24 = v39;
          if ( v39 != v6 )
          {
            do
            {
              PspLockJobMemoryLimitsExclusive(v24, v11, 0LL);
              *(_QWORD *)(v24 + 1208) -= a2;
              PspUnlockJobMemoryLimitsExclusive(v24, v11, 0LL);
              v24 = *(_QWORD *)(v24 + 1304);
            }
            while ( v24 != v36 );
          }
        }
        goto LABEL_41;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v13 + 1208) = v19;
    }
    else if ( v8 )
    {
      v34 = v13;
      v8 = 0;
LABEL_77:
      v36 = v34;
      if ( *(_QWORD *)(v13 + 552) && (*(_DWORD *)(v13 + 1104) & 0x200) != 0 && (*(_DWORD *)(a3 + 496) & 0x24) == 4 )
      {
        _InterlockedOr((volatile signed __int32 *)(a3 + 496), 0x20u);
        PspSendJobNotification(v13, 10LL, *(_QWORD *)(a3 + 464), 1);
        v22 = v38;
        v17 = a2;
      }
      if ( !v8 )
        goto LABEL_27;
      goto LABEL_26;
    }
    v34 = v36;
    goto LABEL_77;
  }
LABEL_41:
  if ( v11 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 1264));
    KeAbPostRelease(v11 + 1264);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v26 = &CurrentThread->152;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v26->ApcState.ApcListHead[0].Flink != v26 )
        KiCheckForKernelApcDelivery((__int64)v26, v6);
    }
  }
  return v8;
}
