/*
 * XREFs of MiChargeSegmentCommit @ 0x1408F7C78
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x1408F78F0 (MmCommitSessionMappedView.c)
 *     MiCommitPagefileBackedSection @ 0x1408F7B54 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiUpdateControlAreaCommitCount @ 0x14036F1FC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14036F2D8 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1408F7FA0 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r8
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rsi
  int SubsectionCrossPartitionReferences; // eax
  __int64 v14; // r8
  __int64 *v15; // rdi
  __int64 v16; // r13
  int v17; // r12d
  unsigned __int64 v18; // rdx
  __int64 *v19; // r13
  __int64 DemandZeroPte; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 updated; // rax
  __int64 v24; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v25; // rcx
  bool v26; // zf
  __int64 v28; // rdx
  __int64 ControlAreaPartition; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+28h] [rbp-70h]
  unsigned int *v31; // [rsp+30h] [rbp-68h]
  _QWORD *v32; // [rsp+38h] [rbp-60h]
  _QWORD *v33; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+8h]
  __int64 *v35; // [rsp+A8h] [rbp+10h]

  v3 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v33 = (_QWORD *)*a1;
  v30 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v6 = (unsigned __int64 *)(v5 + 40);
  v7 = *(unsigned int *)(v3 + 44);
  v32 = (_QWORD *)(v3 + 8);
  v8 = *(_QWORD *)(v3 + 8);
  v9 = a2;
  --CurrentThread->SpecialApcDisable;
  v31 = (unsigned int *)(v3 + 44);
  v35 = (__int64 *)(v8 + 8 * v7);
  v10 = KeAbPreAcquire(v5 + 40, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, (__int64)v10, (__int64)v6);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v3);
  v15 = v35;
  v16 = (unsigned int)(v14 + 1);
  v17 = SubsectionCrossPartitionReferences;
  while ( 1 )
  {
    v18 = v12 + 1;
    if ( *v9 )
      v18 = v12;
    v14 += v16;
    ++v9;
    v12 = v18;
    if ( v14 == a3 )
      break;
    if ( v9 == v15 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      v9 = *(__int64 **)(v3 + 8);
      v15 = &v9[*(unsigned int *)(v3 + 44)];
    }
  }
  v19 = a1;
  if ( !v18 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v26 )
      return 1LL;
    v26 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
    goto LABEL_21;
  }
  if ( (unsigned int)MiChargeCommit(ControlAreaPartition, v18, 0) )
  {
    if ( v17 && (int)MiGetSubsectionCharges(v3, v12) < 0 )
    {
      MiReturnCommit(ControlAreaPartition, v12, 0);
      goto LABEL_28;
    }
    DemandZeroPte = MiMakeDemandZeroPte(*(_BYTE *)(v30 + 14) & 0x1F);
    v21 = *v32 + 8LL * *v31;
    v22 = 0LL;
    while ( 1 )
    {
      if ( !*a2 )
        *a2 = DemandZeroPte;
      ++v22;
      ++a2;
      if ( v22 == a3 )
        break;
      if ( a2 == (__int64 *)v21 )
      {
        v19 = (__int64 *)v19[2];
        a2 = (__int64 *)v19[1];
        v21 = (__int64)&a2[*((unsigned int *)v19 + 11)];
      }
    }
    MiUpdateProcessSharedCommit(v33, v12, v21);
    updated = MiUpdateControlAreaCommitCount((__int64)v33, v12);
    if ( v17 && !updated )
      MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 0, v12);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v26 )
      return 1LL;
    v25 = &CurrentThread->152;
    v26 = v25->ApcState.ApcListHead[0].Flink == (struct _LIST_ENTRY *)v25;
LABEL_21:
    if ( !v26 )
      KiCheckForKernelApcDelivery((__int64)v25, v24);
    return 1LL;
  }
LABEL_28:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v26 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v26 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL, v28);
  return 0LL;
}
