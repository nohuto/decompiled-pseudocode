/*
 * XREFs of ExpWorkerThread @ 0x14032F2A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     EtwTraceThreadWorkItem @ 0x14032F1B0 (EtwTraceThreadWorkItem.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     KxReenterRetpolinedCode @ 0x14043F7F4 (KxReenterRetpolinedCode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpWnfWorkItemRoutine @ 0x1409044C0 (ExpWnfWorkItemRoutine.c)
 *     CmpDelayCloseWorker @ 0x1409C6AD0 (CmpDelayCloseWorker.c)
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
  ULONG_PTR BugCheckParameter4; // r15
  int v13; // ecx
  struct _KTHREAD *(__fastcall *v14)(PIO_WORKITEM); // rdi
  const void *v15; // r14
  struct _IO_WORKITEM *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned int Queue; // eax
  __int64 v21; // rdx
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
  unsigned __int16 *v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+40h] [rbp-C0h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v41[33]; // [rsp+68h] [rbp-98h] BYREF

  PreviousAffinity = 0LL;
  memset_0(&v40, 0, 0x108uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = *(unsigned __int16 **)(BugCheckParameter2 + 696);
  v4 = *(_QWORD *)(BugCheckParameter2 + 688);
  v5 = 1;
  v38 = 0LL;
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v36 = v3;
  v37 = v4;
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
      BugCheckParameter4 = v8;
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
        v14 = *(struct _KTHREAD *(__fastcall **)(PIO_WORKITEM))(BugCheckParameter4 + 16);
        v15 = *(const void **)(BugCheckParameter4 + 24);
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(*(struct _KTHREAD *(__fastcall **)(PIO_WORKITEM))(BugCheckParameter4 + 16), 1344);
          guard_dispatch_icall_no_overrides(v15, v21);
          EtwTraceThreadWorkItem(v14, 1345);
        }
        else
        {
          v16 = *(struct _IO_WORKITEM **)(BugCheckParameter4 + 24);
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
            guard_dispatch_icall_no_overrides(v16, v9);
          }
        }
        if ( (KeGetPcr()->Prcb.BpbRetpolineState.AllFlags & 1) != 0 )
          KxReenterRetpolinedCode();
        if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v14, (ULONG_PTR)v15, BugCheckParameter4, 0LL);
        if ( CurrentThread->WaitBlock[3].SpareLong )
          KeBugCheckEx(1u, (ULONG_PTR)v14, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v14, KeGetCurrentIrql(), (ULONG_PTR)v15, BugCheckParameter4);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v14, (ULONG_PTR)v15, BugCheckParameter4, 0LL);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)CurrentThread->Process,
            (ULONG_PTR)CurrentThread->ApcState.Process,
            CurrentThread->ApcStateIndex,
            (ULONG_PTR)CurrentThread);
        if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v14, (ULONG_PTR)v15, BugCheckParameter4, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread((__int64)CurrentThread) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v14, IoPriorityThread, (ULONG_PTR)v15, BugCheckParameter4);
        }
        if ( (unsigned int)PsGetPagePriorityThread(CurrentThread, v17) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread(CurrentThread, v18);
          KeBugCheckEx(0x129u, (ULONG_PTR)v14, PagePriorityThread, (ULONG_PTR)v15, BugCheckParameter4);
        }
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v14, (Queue >> 9) & 7, (ULONG_PTR)v15, BugCheckParameter4);
        v22 = *((unsigned int *)&CurrentThread[1].SwapListEntry + 3);
        if ( (v22 & 0x800) != 0 )
          KeBugCheckEx(0x1D6u, (ULONG_PTR)v14, v19 & (v22 >> 11), (ULONG_PTR)v15, BugCheckParameter4);
        if ( (CurrentThread->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v14,
            v15,
            (const void *)BugCheckParameter4);
          PreviousAffinity = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        v40 = 2097153LL;
        memset_0(v41, 0, 0x100uLL);
        KeQueryNodeActiveAffinityEx(*v36, &v40, 0LL);
        UserAffinity = CurrentThread->UserAffinity;
        Count = v40;
        if ( (unsigned __int16)v40 >= UserAffinity->Count )
        {
          v25 = &v40;
          Count = UserAffinity->Count;
        }
        else
        {
          v25 = (__int64 *)CurrentThread->UserAffinity;
        }
        for ( i = 0; i < Count; ++i )
        {
          if ( v41[i] != UserAffinity->Bitmap[i] )
          {
LABEL_39:
            KeSetUserAffinityThread(CurrentThread, &v40);
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
            (const void *)BugCheckParameter4);
          KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
        }
        v4 = v37;
        v3 = v36;
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
