/*
 * XREFs of MiChargeSegmentCommit @ 0x1409FC7C8
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x1409FC440 (MmCommitSessionMappedView.c)
 *     MiCommitPagefileBackedSection @ 0x1409FC6A4 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402A6504 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1402A65E0 (MiGetSubsectionCrossPartitionReferences.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MiGetSubsectionCharges @ 0x1404873D0 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1409FCAF0 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r8
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbp
  __int64 *v10; // rax
  __int64 *v11; // rsi
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
  v10 = KeAbPreAcquire(v5 + 40, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v10, (__int64)v6);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
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
