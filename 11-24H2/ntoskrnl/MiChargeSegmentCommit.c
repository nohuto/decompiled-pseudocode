/*
 * XREFs of MiChargeSegmentCommit @ 0x140974EF8
 * Callers:
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x140974B70 (MmCommitSessionMappedView.c)
 *     MiCommitPagefileBackedSection @ 0x140974DD4 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026B17C (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14026B258 (MiGetSubsectionCrossPartitionReferences.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x140975220 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r8
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbp
  char *v10; // rax
  char *v11; // rsi
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
  bool v24; // zf
  __int64 ControlAreaPartition; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  unsigned int *v28; // [rsp+30h] [rbp-68h]
  _QWORD *v29; // [rsp+38h] [rbp-60h]
  _QWORD *v30; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+8h]
  __int64 *v32; // [rsp+A8h] [rbp+10h]

  v3 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v30 = (_QWORD *)*a1;
  v27 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v6 = (unsigned __int64 *)(v5 + 40);
  v7 = *(unsigned int *)(v3 + 44);
  v29 = (_QWORD *)(v3 + 8);
  v8 = *(_QWORD *)(v3 + 8);
  v9 = a2;
  --CurrentThread->SpecialApcDisable;
  v28 = (unsigned int *)(v3 + 44);
  v32 = (__int64 *)(v8 + 8 * v7);
  v10 = (char *)KeAbPreAcquire(v5 + 40, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v10, (__int64)v6);
  if ( v11 )
    v11[10] = 1;
  v12 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v3);
  v15 = v32;
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
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v24 )
      return 1LL;
    v24 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
    goto LABEL_21;
  }
  if ( (unsigned int)MiChargeCommit(ControlAreaPartition, v18, 0) )
  {
    if ( v17 && (int)MiGetSubsectionCharges(v3, v12) < 0 )
    {
      MiReturnCommit(ControlAreaPartition, v12, 0);
      goto LABEL_28;
    }
    DemandZeroPte = MiMakeDemandZeroPte(*(_BYTE *)(v27 + 14) & 0x1F);
    v21 = *v29 + 8LL * *v28;
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
    MiUpdateProcessSharedCommit(v30, v12, v21);
    updated = MiUpdateControlAreaCommitCount((__int64)v30, v12);
    if ( v17 && !updated )
      MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 0, v12);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v24 )
      return 1LL;
    v24 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
LABEL_21:
    if ( !v24 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
LABEL_28:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
