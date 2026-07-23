/*
 * XREFs of MiInsertSharedCommitNode @ 0x1409197A0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiSectionOpen @ 0x140919770 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MiAllocateSplitVads @ 0x140919FC8 (MiAllocateSplitVads.c)
 *     MmLinkJobProcess @ 0x14091A3E0 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MmGetCurrentProcessorColor @ 0x140407A30 (MmGetCurrentProcessorColor.c)
 *     MiIncludeSharedCommit @ 0x1404152F0 (MiIncludeSharedCommit.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  int inserted; // ebp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 *v9; // r12
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v11; // rbx
  char *v12; // rax
  char *v13; // r13
  unsigned __int64 *v14; // rbx
  char *v15; // rax
  char *v16; // r13
  _QWORD *v17; // rbx
  bool v18; // r12
  unsigned __int64 v19; // r13
  bool v20; // zf
  _QWORD *v22; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned __int64 CommittedPages; // r8
  _QWORD *v26; // r9
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-48h]
  ULONG_PTR v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 v31; // [rsp+30h] [rbp-38h]
  unsigned __int64 *v32; // [rsp+38h] [rbp-30h]
  unsigned __int64 v33; // [rsp+88h] [rbp+20h]

  if ( !(unsigned int)MiIncludeSharedCommit(a1) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  v7 = a2;
  if ( (a2 & 1) == 0 )
  {
    v33 = a2;
    if ( (*(_DWORD *)(a2 + 1532) & 0x10) == 0 )
    {
      v31 = 0LL;
      v30 = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v30 = 40LL;
  v31 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = 0LL;
  v33 = 0LL;
LABEL_6:
  v8 = *(_QWORD *)a1;
  v9 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  CurrentThread = KeGetCurrentThread();
  v32 = v9;
  v29 = *(_QWORD *)a1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v7 + 1712);
    v12 = (char *)KeAbPreAcquire(v7 + 1712, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
    v8 = v29;
    if ( v13 )
      v13[10] = 1;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = (unsigned __int64 *)(v8 + 40);
    v15 = (char *)KeAbPreAcquire(v8 + 40, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
    if ( v16 )
      v16[10] = 1;
  }
  v17 = (_QWORD *)*v9;
  v18 = 0;
  if ( !v17 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( a2 < v17[3] )
    {
      v22 = (_QWORD *)*v17;
      if ( !*v17 )
        goto LABEL_29;
      goto LABEL_35;
    }
    if ( a2 <= v17[3] )
    {
      ++v17[4];
      v19 = v33;
      goto LABEL_20;
    }
    v22 = (_QWORD *)v17[1];
    if ( !v22 )
      break;
LABEL_35:
    v17 = v22;
  }
  v18 = 1;
LABEL_29:
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(0x100uLL, v30, 1850960205, CurrentProcessorColor | 0x80000000);
  if ( PoolMm )
  {
    *(_QWORD *)(PoolMm + 32) = 1LL;
    *(_QWORD *)(PoolMm + 24) = a2;
    v19 = v33;
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    if ( v33 )
    {
      v26[7] = a1;
      v27 = *(_QWORD **)(v33 + 1728);
      v28 = v26 + 5;
      if ( *v27 != v33 + 1720 )
        __fastfail(3u);
      *v28 = v33 + 1720;
      v26[6] = v27;
      *v27 = v28;
      *(_QWORD *)(v33 + 1728) = v28;
      _InterlockedAdd64((volatile signed __int64 *)(v33 + 1704), CommittedPages);
      RtlAvlInsertNodeEx(v32, (unsigned __int64)v17, v18, v26);
      if ( (*(_DWORD *)(v33 + 1532) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v33 + 672) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v33, a3 | 7);
      }
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(v31 + 1568), CommittedPages);
      RtlAvlInsertNodeEx(v32, (unsigned __int64)v17, v18, v26);
    }
  }
  else
  {
    v19 = v33;
    inserted = -1073741670;
  }
LABEL_20:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 40));
    KeAbPostRelease(v29 + 40);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 1712));
    KeAbPostRelease(v19 + 1712);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)inserted;
}
