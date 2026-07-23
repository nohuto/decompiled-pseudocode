/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1408D8CB0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1404234A0 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x1408D8B78 (MmAssignProcessToJob.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x14048E6FC (PspSendJobNotification.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x14085AC20 (PspLockJobMemoryLimitsExclusive.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1408D7760 (PspUnlockJobMemoryLimitsExclusive.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v7; // si
  char *v8; // rax
  char *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rdi
  unsigned __int64 v13; // r13
  char *v14; // rax
  char *v15; // r13
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  BOOL v19; // ecx
  int v20; // eax
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r13
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  unsigned __int64 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 672) )
    return 1;
  CurrentThread = KeGetCurrentThread();
  v7 = 1;
  v36 = *(_QWORD *)(*(_QWORD *)(a3 + 632) + 1312LL);
  v35 = 0LL;
  v34 = 0;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v36 )
  {
    v8 = (char *)KeAbPreAcquire(v36 + 1264, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 1264), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v36 + 1264), v8, v36 + 1264);
    a4 = v41;
    if ( v9 )
      v9[10] = 1;
  }
  v10 = v36;
  if ( (a1 & 4) != 0 )
  {
    v11 = a4;
    v38 = a4;
    a4 = 0LL;
    v41 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(a3 + 632);
    v38 = v11;
  }
  v12 = v11;
  if ( v11 != a4 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      if ( v12 != v10 )
      {
        v14 = (char *)KeAbPreAcquire(v12 + 1264, 0LL);
        v15 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 1264), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 1264), v14, v12 + 1264);
        if ( v15 )
          v15[10] = 1;
        v13 = 0LL;
      }
      v16 = a2;
      v17 = *(_QWORD *)(v12 + 1208);
      v18 = v17 + a2;
      if ( a2 <= 0 )
      {
        if ( v18 > v17 )
        {
          PspUnlockJobMemoryLimitsExclusive(v12, v10, 0LL);
          v29 = v12;
          if ( !v7 )
            v29 = v35;
          v7 = 0;
          v23 = v29;
          v35 = v29;
          goto LABEL_38;
        }
      }
      else if ( v18 < v17 )
      {
        if ( v7 )
        {
          v35 = v12;
          v7 = 0;
        }
        PspUnlockJobMemoryLimitsExclusive(v12, v10, 0LL);
        goto LABEL_37;
      }
      v19 = 0;
      v20 = *(_DWORD *)(v12 + 256);
      v21 = v18 + *(_QWORD *)(v12 + 1568);
      v37 = v21;
      if ( (v20 & 0x200000) != 0 && v21 > *(_QWORD *)(v12 + 704) )
        v19 = a2 > 0;
      if ( (v20 & 0x200) != 0 && v18 > *(_QWORD *)(v12 + 696) && a2 > 0 || v19 )
        break;
      if ( v7 )
      {
        *(_QWORD *)(v12 + 1208) = v18;
LABEL_26:
        v22 = *(_QWORD *)(v12 + 1216);
        if ( v22 )
        {
          v30 = *(_QWORD *)(v22 + 40);
          if ( (*(_DWORD *)v22 & 0x200000) == 0 )
            v21 = v18;
          v31 = 0;
          if ( v30 && v16 > 0 && v21 > v30 )
            v31 = 512;
          v32 = *(_QWORD *)(v22 + 32);
          if ( v32 && v16 <= 0 && v21 < v32 )
            v31 |= 0x8000u;
          v34 |= v31;
        }
      }
LABEL_27:
      if ( v16 > 0 )
      {
        if ( v18 > *(_QWORD *)(v12 + 720) )
          *(_QWORD *)(v12 + 720) = v18;
        v13 = *(_QWORD *)(a3 + 984);
      }
      if ( v12 != v10 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1264));
        KeAbPostRelease(v12 + 1264);
      }
      if ( v13 && v13 > *(_QWORD *)(v12 + 712) )
      {
        _m_prefetchw((const void *)(v12 + 712));
        v27 = *(_QWORD *)(v12 + 712);
        do
        {
          if ( v13 <= v27 )
            break;
          v28 = v27;
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 712), v13, v27);
        }
        while ( v27 != v28 );
      }
LABEL_37:
      v23 = v35;
LABEL_38:
      v12 = *(_QWORD *)(v12 + 1304);
      if ( v12 == v41 )
      {
        if ( v7 )
        {
          if ( v34 )
          {
            _InterlockedOr((volatile signed __int32 *)(v10 + 1552), 0x100000u);
            _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
            if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
              ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
          }
        }
        else
        {
          v24 = v38;
          if ( v38 != v23 )
          {
            do
            {
              PspLockJobMemoryLimitsExclusive(v24, v10, 0LL);
              *(_QWORD *)(v24 + 1208) -= a2;
              PspUnlockJobMemoryLimitsExclusive(v24, v10, 0LL);
              v24 = *(_QWORD *)(v24 + 1304);
            }
            while ( v24 != v35 );
          }
        }
        goto LABEL_41;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v12 + 1208) = v18;
    }
    else if ( v7 )
    {
      v33 = v12;
      v7 = 0;
LABEL_77:
      v35 = v33;
      if ( *(_QWORD *)(v12 + 552) && (*(_DWORD *)(v12 + 1104) & 0x200) != 0 && (*(_DWORD *)(a3 + 496) & 0x24) == 4 )
      {
        _InterlockedOr((volatile signed __int32 *)(a3 + 496), 0x20u);
        PspSendJobNotification(v12, 10LL, *(_QWORD *)(a3 + 464), 1);
        v21 = v37;
        v16 = a2;
      }
      if ( !v7 )
        goto LABEL_27;
      goto LABEL_26;
    }
    v33 = v35;
    goto LABEL_77;
  }
LABEL_41:
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 1264));
    KeAbPostRelease(v10 + 1264);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v7;
}
