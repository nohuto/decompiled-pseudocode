/*
 * XREFs of ExpWorkerThread @ 0x140207CC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceThreadWorkItem @ 0x140207BD0 (EtwTraceThreadWorkItem.c)
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140208AA0 (KeQueryNodeActiveAffinityEx.c)
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KxReenterRetpolinedCode @ 0x140447024 (KxReenterRetpolinedCode.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpWnfWorkItemRoutine @ 0x1408AE260 (ExpWnfWorkItemRoutine.c)
 *     CmpDelayCloseWorker @ 0x1409D6A50 (CmpDelayCloseWorker.c)
 */

LONG __fastcall ExpWorkerThread(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int16 *v3; // rdi
  __int64 v4; // r14
  char v5; // r12
  int v6; // eax
  struct _KTHREAD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // r15
  int v13; // ecx
  __int64 (__fastcall *v14)(PIO_WORKITEM); // rdi
  const void *v15; // r14
  struct _IO_WORKITEM *v16; // rcx
  __int64 v17; // r10
  unsigned int Queue; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  _KAFFINITY_EX *UserAffinity; // r10
  unsigned __int16 Count; // r9
  __int64 *v25; // r8
  unsigned __int16 i; // dx
  signed __int32 v27; // eax
  signed __int32 v28; // r8d
  int v29; // edx
  unsigned int v30; // edx
  struct _KTHREAD *v31; // rcx
  LONG result; // eax
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v35[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D8h]
  unsigned __int16 *v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v43[33]; // [rsp+68h] [rbp-98h] BYREF

  PreviousAffinity = 0LL;
  memset_0(&v42, 0, 0x108uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = *(unsigned __int16 **)(BugCheckParameter2 + 696);
  v4 = *(_QWORD *)(BugCheckParameter2 + 688);
  v5 = 1;
  v40 = 0LL;
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v38 = v3;
  v39 = v4;
  if ( (v6 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6 | 1;
  _InterlockedOr(v35, 0);
  if ( !ExpWorkersCanSwap )
  {
    v7 = KeGetCurrentThread();
    if ( (*((_DWORD *)&v7->0 + 1) & 0x40) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v7->116 + 1, 6u);
  }
  do
  {
LABEL_9:
    while ( 1 )
    {
      v8 = KeRemovePriQueue(BugCheckParameter2);
      v11 = 0LL;
      v12 = v8;
      if ( !v5 )
        break;
      v5 = 0;
      *(_DWORD *)(BugCheckParameter2 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 712), 0xFFFFBFFF);
      if ( v8 != 258 )
      {
LABEL_11:
        if ( v8 == 128 )
          goto LABEL_54;
        v13 = *(_DWORD *)(BugCheckParameter2 + 712);
        if ( v13 < (2 * *(_DWORD *)(BugCheckParameter2 + 716)) >> 1
          || v13 < *(_DWORD *)(BugCheckParameter2 + 720)
          && *(_QWORD *)(BugCheckParameter2 + 8) == BugCheckParameter2 + 8
          && (*(_DWORD *)(BugCheckParameter2 + 4) || *(int *)(BugCheckParameter2 + 716) < 0) )
        {
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 8LL * *v3) + 16LL), 0, 0);
        }
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 704));
        v14 = *(__int64 (__fastcall **)(PIO_WORKITEM))(v12 + 16);
        v15 = *(const void **)(v12 + 24);
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(*(__int64 (__fastcall **)(PIO_WORKITEM))(v12 + 16), 0x540u);
          guard_dispatch_icall_no_overrides(v15, v19, v20, v21, BugCheckParameter4, v37, v38, v39);
          EtwTraceThreadWorkItem(v14, 0x541u);
        }
        else
        {
          v16 = *(struct _IO_WORKITEM **)(v12 + 24);
          if ( (char *)v14 == (char *)ExpWnfWorkItemRoutine )
          {
            ExpWnfWorkItemRoutine(v16, v9, v10, v11);
          }
          else if ( v14 == IopProcessWorkItem )
          {
            IopProcessWorkItem(v16);
          }
          else if ( (char *)v14 == (char *)CmpDelayCloseWorker )
          {
            CmpDelayCloseWorker(v16, v9, v10, v11);
          }
          else
          {
            guard_dispatch_icall_no_overrides(v16, v9, v10, v11, BugCheckParameter4, v37, v38, v39);
          }
        }
        if ( (KeGetPcr()->Prcb.BpbRetpolineState.AllFlags & 1) != 0 )
          KxReenterRetpolinedCode();
        if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v14, (ULONG_PTR)v15, v12, 0LL);
        if ( CurrentThread->WaitBlock[3].SpareLong )
          KeBugCheckEx(1u, (ULONG_PTR)v14, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v14, KeGetCurrentIrql(), (ULONG_PTR)v15, v12);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v14, (ULONG_PTR)v15, v12, 0LL);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)CurrentThread->Process,
            (ULONG_PTR)CurrentThread->ApcState.Process,
            CurrentThread->ApcStateIndex,
            (ULONG_PTR)CurrentThread);
        if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v14, (ULONG_PTR)v15, v12, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread(CurrentThread) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v14, IoPriorityThread, (ULONG_PTR)v15, v12);
        }
        if ( (unsigned int)PsGetPagePriorityThread(CurrentThread) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
          KeBugCheckEx(0x129u, (ULONG_PTR)v14, PagePriorityThread, (ULONG_PTR)v15, v12);
        }
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v14, (Queue >> 9) & 7, (ULONG_PTR)v15, v12);
        v22 = *((unsigned int *)&CurrentThread[1].SwapListEntry + 3);
        if ( (v22 & 0x800) != 0 )
          KeBugCheckEx(0x1D6u, (ULONG_PTR)v14, v17 & (v22 >> 11), (ULONG_PTR)v15, v12);
        if ( (CurrentThread->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v14,
            v15,
            (const void *)v12);
          PreviousAffinity = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        v42 = 2097153LL;
        memset_0(v43, 0, 0x100uLL);
        KeQueryNodeActiveAffinityEx(*v38, &v42, 0LL);
        UserAffinity = CurrentThread->UserAffinity;
        Count = v42;
        if ( (unsigned __int16)v42 >= UserAffinity->Count )
        {
          v25 = &v42;
          Count = UserAffinity->Count;
        }
        else
        {
          v25 = (__int64 *)CurrentThread->UserAffinity;
        }
        for ( i = 0; i < Count; ++i )
        {
          if ( v43[i] != UserAffinity->Bitmap[i] )
          {
LABEL_39:
            KeSetUserAffinityThread(CurrentThread, &v42);
            goto LABEL_6;
          }
        }
        while ( i < *(_WORD *)v25 )
        {
          if ( v25[i + 1] )
            goto LABEL_39;
          ++i;
        }
LABEL_6:
        if ( CurrentThread[1].WaitBlock[1].WaitListEntry.Flink )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v14,
            v15,
            (const void *)v12);
          KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
        }
        v4 = v39;
        v3 = v38;
      }
    }
    if ( v8 != 258 )
      goto LABEL_11;
LABEL_54:
    ;
  }
  while ( (*(_DWORD *)(BugCheckParameter2 + 712) & 0x8000) == 0
       && (*(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
        || *(_DWORD *)(BugCheckParameter2 + 4)) );
  _m_prefetchw((const void *)(BugCheckParameter2 + 712));
  v27 = *(_DWORD *)(BugCheckParameter2 + 712);
  do
  {
    v28 = v27;
    v29 = (v27 & 0x3FFF) - 1;
    if ( (v27 & 0x8000) == 0 && ((v27 & 0x4000) != 0 || v29 < (2 * *(_DWORD *)(BugCheckParameter2 + 716)) >> 1) )
      goto LABEL_9;
    v30 = v27 & 0xFFFFC000 | v29;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 712), v30, v27);
  }
  while ( v27 != v28 );
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  v31 = KeGetCurrentThread();
  result = *((_DWORD *)&v31->0 + 1) >> 6;
  if ( (*((_DWORD *)&v31->0 + 1) & 0x40) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)&v31->116 + 1, 6u);
  if ( v30 == 0x8000 )
    return KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 728), 0, 0);
  return result;
}
