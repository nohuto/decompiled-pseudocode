/*
 * XREFs of MiRemoveSharedCommitNode @ 0x140895560
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF7B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiSectionClose @ 0x140895530 (MiSectionClose.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MmLinkJobProcess @ 0x14091A3E0 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiIncludeSharedCommit @ 0x1404152F0 (MiIncludeSharedCommit.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  int v10; // r15d
  char *v11; // rax
  char *v12; // rdi
  int v13; // ebp
  _QWORD *v14; // rdi
  bool v15; // zf
  struct _KTHREAD *v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 *v20; // rsi
  char *v21; // rax
  char *v22; // rdi
  struct _KTHREAD *v23; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+78h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v7 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
  }
  else
  {
    v6 = a2;
    if ( !(unsigned int)MiIncludeSharedCommit(a1)
      || (*(_DWORD *)(a1 + 56) & 0x20) != 0
      || (*(_DWORD *)(a2 + 1532) & 0x10) != 0 )
    {
      return;
    }
    v7 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)a1;
  v23 = CurrentThread;
  v25 = *(_QWORD *)a1;
  v10 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = (char *)KeAbPreAcquire(v6 + 1712, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 1712), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 1712), v11, v6 + 1712);
    CurrentThread = v23;
    v9 = v25;
    if ( v12 )
      v12[10] = 1;
  }
  v13 = a3 & 2;
  if ( !v13 )
  {
    --CurrentThread->SpecialApcDisable;
    v20 = (unsigned __int64 *)(v9 + 40);
    v21 = (char *)KeAbPreAcquire(v9 + 40, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
    if ( v22 )
      v22[10] = 1;
  }
  v14 = *(_QWORD **)(v25 + 72);
  while ( v14 )
  {
    if ( a2 > v14[3] )
    {
      v14 = (_QWORD *)v14[1];
    }
    else
    {
      if ( a2 >= v14[3] )
        break;
      v14 = (_QWORD *)*v14;
    }
  }
  v15 = v14[4]-- == 1LL;
  if ( v15 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(v25 + 72), (__int64)v14);
    v17 = -MiGetCommittedPages((_QWORD *)a1);
    if ( v6 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v6 + 1704), v17);
      v18 = v14[5];
      if ( *(_QWORD **)(v18 + 8) != v14 + 5 || (v19 = (_QWORD *)v14[6], (_QWORD *)*v19 != v14 + 5) )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v6 + 1532) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v6 + 672) | 1LL, 3LL);
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 1568), v17);
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( v13 )
  {
    v16 = v23;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 40));
    KeAbPostRelease(v25 + 40);
    v16 = v23;
    v15 = v23->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( !v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1712));
    KeAbPostRelease(v6 + 1712);
    v15 = v16->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
