/*
 * XREFs of MiInsertSharedCommitNode @ 0x1408E2BF0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiSectionOpen @ 0x1408E2BC0 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1408E4628 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiAllocateSplitVads @ 0x140A245C0 (MiAllocateSplitVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
 *     MmGetCurrentProcessorColor @ 0x140417C80 (MmGetCurrentProcessorColor.c)
 *     MiIncludeSharedCommit @ 0x14041FB70 (MiIncludeSharedCommit.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(__int64 a1, unsigned __int64 a2, int a3)
{
  int inserted; // ebp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 *v9; // r12
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r13
  unsigned __int64 *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // r13
  _QWORD *v17; // rbx
  bool v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  _QWORD *v24; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned __int64 CommittedPages; // r8
  _QWORD *v28; // r9
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-48h]
  ULONG_PTR v34; // [rsp+28h] [rbp-40h]
  unsigned __int64 v35; // [rsp+30h] [rbp-38h]
  unsigned __int64 *v36; // [rsp+38h] [rbp-30h]
  unsigned __int64 v37; // [rsp+88h] [rbp+20h]

  if ( !(unsigned int)MiIncludeSharedCommit(a1) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  v7 = a2;
  if ( (a2 & 1) == 0 )
  {
    v37 = a2;
    if ( (*(_DWORD *)(a2 + 1532) & 0x10) == 0 )
    {
      v35 = 0LL;
      v34 = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v34 = 40LL;
  v35 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = 0LL;
  v37 = 0LL;
LABEL_6:
  v8 = *(_QWORD *)a1;
  v9 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  CurrentThread = KeGetCurrentThread();
  v36 = v9;
  v33 = *(_QWORD *)a1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v7 + 1712);
    v12 = KeAbPreAcquire(v7 + 1712, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, (__int64)v12, (__int64)v11);
    v8 = v33;
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = (unsigned __int64 *)(v8 + 40);
    v15 = KeAbPreAcquire(v8 + 40, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, (__int64)v15, (__int64)v14);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
  }
  v17 = (_QWORD *)*v9;
  v18 = 0;
  if ( !v17 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( a2 < v17[3] )
    {
      v24 = (_QWORD *)*v17;
      if ( !*v17 )
        goto LABEL_29;
      goto LABEL_35;
    }
    if ( a2 <= v17[3] )
    {
      ++v17[4];
      v19 = v37;
      goto LABEL_20;
    }
    v24 = (_QWORD *)v17[1];
    if ( !v24 )
      break;
LABEL_35:
    v17 = v24;
  }
  v18 = 1;
LABEL_29:
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(0x100uLL, v34, 1850960205, CurrentProcessorColor | 0x80000000);
  if ( PoolMm )
  {
    *(_QWORD *)(PoolMm + 32) = 1LL;
    *(_QWORD *)(PoolMm + 24) = a2;
    v19 = v37;
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    if ( v37 )
    {
      v28[7] = a1;
      v29 = *(_QWORD **)(v37 + 1728);
      v30 = v28 + 5;
      if ( *v29 != v37 + 1720 )
        __fastfail(3u);
      *v30 = v37 + 1720;
      v28[6] = v29;
      *v29 = v30;
      *(_QWORD *)(v37 + 1728) = v30;
      _InterlockedAdd64((volatile signed __int64 *)(v37 + 1704), CommittedPages);
      RtlAvlInsertNodeEx(v36, (unsigned __int64)v17, v18, v28);
      if ( (*(_DWORD *)(v37 + 1532) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v37 + 672) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v37, a3 | 7u);
      }
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(v35 + 1568), CommittedPages);
      RtlAvlInsertNodeEx(v36, (unsigned __int64)v17, v18, v28);
    }
  }
  else
  {
    v19 = v37;
    inserted = -1073741670;
  }
LABEL_20:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v33 + 40));
    KeAbPostRelease(v33 + 40);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v32, v31);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 1712));
    KeAbPostRelease(v19 + 1712);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v20);
  }
  return (unsigned int)inserted;
}
