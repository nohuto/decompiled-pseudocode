/*
 * XREFs of MiRemoveSharedCommitNode @ 0x1408E5960
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF044 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1408E4628 (MmLinkJobProcess.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiSectionClose @ 0x1408E5930 (MiSectionClose.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
 *     MiIncludeSharedCommit @ 0x14041FB70 (MiIncludeSharedCommit.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  int v10; // r15d
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  int v13; // ebp
  _QWORD *v14; // rdi
  bool v15; // zf
  struct _KTHREAD *v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 *v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KTHREAD *v27; // [rsp+68h] [rbp+10h]
  __int64 v29; // [rsp+78h] [rbp+20h]

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
  v27 = CurrentThread;
  v29 = *(_QWORD *)a1;
  v10 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire(v6 + 1712, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 1712), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 1712), (__int64)v11, v6 + 1712);
    CurrentThread = v27;
    v9 = v29;
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = a3 & 2;
  if ( !v13 )
  {
    --CurrentThread->SpecialApcDisable;
    v20 = (unsigned __int64 *)(v9 + 40);
    v21 = KeAbPreAcquire(v9 + 40, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx(v20, (__int64)v21, (__int64)v20);
    if ( v22 )
      *((_BYTE *)v22 + 10) = 1;
  }
  v14 = *(_QWORD **)(v29 + 72);
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
    RtlAvlRemoveNode((unsigned __int64 *)(v29 + 72), (__int64)v14);
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
    v16 = v27;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 40));
    KeAbPostRelease(v29 + 40);
    v16 = v27;
    v15 = v27->SpecialApcDisable++ == -1;
    if ( v15 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery(v26, v25);
  }
  if ( !v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1712));
    KeAbPostRelease(v6 + 1712);
    v15 = v16->SpecialApcDisable++ == -1;
    if ( v15 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v24, v23);
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
