/*
 * XREFs of ExpWorkerThread @ 0x1403047F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     KeIsEmptyGroupMask @ 0x140304FE8 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     KxReenterRetpolinedCode @ 0x140449C94 (KxReenterRetpolinedCode.c)
 *     EtwTraceThreadWorkItem @ 0x1404D5840 (EtwTraceThreadWorkItem.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpWnfWorkItemRoutine @ 0x1408E3D60 (ExpWnfWorkItemRoutine.c)
 *     CmpDelayCloseWorker @ 0x1409D7200 (CmpDelayCloseWorker.c)
 */

LONG __fastcall ExpWorkerThread(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int16 *v3; // r12
  __int64 v4; // rdi
  char v5; // r13
  int v6; // eax
  struct _KTHREAD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *BugCheckParameter4; // r15
  int v11; // ecx
  __int64 (__fastcall *v12)(PIO_WORKITEM); // rdi
  const void *v13; // r14
  struct _IO_WORKITEM *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r10
  unsigned int Queue; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r12
  unsigned __int16 Count; // r8
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  _KAFFINITY_EX *UserAffinity; // r9
  __int64 *v28; // r10
  unsigned __int16 i; // dx
  signed __int32 v30; // eax
  signed __int32 v31; // r8d
  int v32; // edx
  unsigned int v33; // edx
  struct _KTHREAD *v34; // rcx
  LONG result; // eax
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v38[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 *v39; // [rsp+38h] [rbp-D0h]
  unsigned __int16 *v40; // [rsp+40h] [rbp-C8h]
  __int64 v41; // [rsp+48h] [rbp-C0h]
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR v43; // [rsp+58h] [rbp-B0h]
  __int128 v44; // [rsp+60h] [rbp-A8h]
  _QWORD v45[3]; // [rsp+70h] [rbp-98h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v48[33]; // [rsp+A0h] [rbp-68h] BYREF

  v1 = BugCheckParameter2;
  v43 = BugCheckParameter2;
  PreviousAffinity = 0LL;
  memset_0(&v47, 0, 0x108uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = *(unsigned __int16 **)(v1 + 696);
  v4 = *(_QWORD *)(v1 + 688);
  v5 = 1;
  v42 = 0LL;
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v39 = &v42;
  v40 = v3;
  v41 = v4;
  if ( (v6 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6 | 1;
  _InterlockedOr(v38, 0);
  if ( !ExpWorkersCanSwap )
  {
    v7 = KeGetCurrentThread();
    if ( (*((_DWORD *)&v7->0 + 1) & 0x40) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v7->116 + 1, 6u);
  }
  while ( 1 )
  {
LABEL_6:
    v8 = KeRemovePriQueue(v1);
    BugCheckParameter4 = (_QWORD *)v8;
    if ( v5 )
    {
      v5 = 0;
      *(_DWORD *)(v1 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(v1 + 712), 0xFFFFBFFF);
      v39 = 0LL;
      if ( v8 == 258 )
        continue;
    }
    else if ( v8 == 258 )
    {
      break;
    }
    if ( v8 == 128 )
      break;
    v11 = *(_DWORD *)(v1 + 712);
    if ( v11 < (2 * *(_DWORD *)(v1 + 716)) >> 1
      || v11 < *(_DWORD *)(v1 + 720) && *(_QWORD *)(v1 + 8) == v1 + 8 && (*(_DWORD *)(v1 + 4) || *(int *)(v1 + 716) < 0) )
    {
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 8LL * *v3) + 16LL), 0, 0);
    }
    _InterlockedAdd((volatile signed __int32 *)(v1 + 704), 1u);
    v12 = (__int64 (__fastcall *)(PIO_WORKITEM))BugCheckParameter4[2];
    v13 = (const void *)BugCheckParameter4[3];
    if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    {
      EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
      guard_dispatch_icall_no_overrides(v13, v19);
      EtwTraceThreadWorkItem(v12, 1345LL);
    }
    else
    {
      v14 = (struct _IO_WORKITEM *)BugCheckParameter4[3];
      if ( (char *)v12 == (char *)ExpWnfWorkItemRoutine )
      {
        ExpWnfWorkItemRoutine(v14);
      }
      else if ( v12 == IopProcessWorkItem )
      {
        IopProcessWorkItem(v14);
      }
      else if ( (char *)v12 == (char *)CmpDelayCloseWorker )
      {
        CmpDelayCloseWorker(v14);
      }
      else
      {
        guard_dispatch_icall_no_overrides(v14, v9);
      }
    }
    if ( (KeGetPcr()->Prcb.BpbRetpolineState.AllFlags & 1) != 0 )
      KxReenterRetpolinedCode();
    if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
      KeBugCheckEx(0x39u, (ULONG_PTR)v12, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4, 0LL);
    if ( CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(1u, (ULONG_PTR)v12, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
    if ( KeGetCurrentIrql() )
      KeBugCheckEx(0xE1u, (ULONG_PTR)v12, KeGetCurrentIrql(), (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      KeBugCheckEx(0xDFu, (ULONG_PTR)v12, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4, 0LL);
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      KeBugCheckEx(
        5u,
        (ULONG_PTR)CurrentThread->Process,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        (ULONG_PTR)CurrentThread);
    if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
      KeBugCheckEx(0x19Au, (ULONG_PTR)v12, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4, 0LL);
    if ( (unsigned int)PsGetIoPriorityThread((__int64)CurrentThread) != 2 )
    {
      IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
      KeBugCheckEx(0x128u, (ULONG_PTR)v12, IoPriorityThread, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4);
    }
    if ( (unsigned int)PsGetPagePriorityThread(CurrentThread, v15) != 5 )
    {
      PagePriorityThread = PsGetPagePriorityThread(CurrentThread, v16);
      KeBugCheckEx(0x129u, (ULONG_PTR)v12, PagePriorityThread, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4);
    }
    Queue = (unsigned int)CurrentThread[1].Queue;
    if ( (Queue & 0x100) != 0 )
      KeBugCheckEx(0x15Bu, (ULONG_PTR)v12, (Queue >> 9) & 7, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4);
    v20 = *((unsigned int *)&CurrentThread[1].SwapListEntry + 3);
    if ( (v20 & 0x800) != 0 )
      KeBugCheckEx(0x1D6u, (ULONG_PTR)v12, v17 & (v20 >> 11), (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4);
    if ( (CurrentThread->MiscFlags & 8) != 0 )
    {
      DbgPrintEx(
        0,
        0,
        "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
        v12,
        v13,
        BugCheckParameter4);
      PreviousAffinity = 0LL;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    v47 = 2097153LL;
    memset_0(v48, 0, 0x100uLL);
    v21 = *v3;
    memset(v45, 0, sizeof(v45));
    v44 = 0LL;
    memset_0(v48, 0, 8LL * (unsigned __int16)v47);
    Count = 1;
    LOWORD(v47) = 1;
    if ( (unsigned __int16)v21 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_44;
    v45[0] = KeNodeBlock[v21];
    *(_OWORD *)&v45[1] = 0LL;
    RtlCopyVolatileMemory(&v45[1], (const void *)(v45[0] + 16LL), 0x10uLL);
    while ( !(unsigned int)KeIsEmptyGroupMask(&v45[1]) )
    {
      FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(&v45[1]);
      _bittestandreset64(&v45[1], FirstSetRightGroupMask);
      v44 = 0LL;
      v24 = *(_QWORD *)(v45[0] + 8LL * FirstSetRightGroupMask + 32);
      v25 = *(unsigned __int16 *)(v24 + 136);
      v26 = *(_QWORD *)(v24 + 128);
      *(_QWORD *)&v44 = v26;
      WORD4(v44) = v25;
      if ( (unsigned __int16)v47 > (unsigned __int16)v25 )
        goto LABEL_43;
      if ( WORD1(v47) > (unsigned __int16)v25 )
      {
        LOWORD(v47) = v25 + 1;
LABEL_43:
        v48[v25] |= v26;
      }
    }
    Count = v47;
    v1 = v43;
LABEL_44:
    UserAffinity = CurrentThread->UserAffinity;
    if ( Count >= UserAffinity->Count )
    {
      v28 = &v47;
      Count = UserAffinity->Count;
    }
    else
    {
      v28 = (__int64 *)CurrentThread->UserAffinity;
    }
    for ( i = 0; i < Count; ++i )
    {
      if ( v48[i] != UserAffinity->Bitmap[i] )
      {
LABEL_55:
        KeSetUserAffinityThread(CurrentThread, &v47);
        goto LABEL_51;
      }
    }
    while ( i < *(_WORD *)v28 )
    {
      if ( v28[i + 1] )
        goto LABEL_55;
      ++i;
    }
LABEL_51:
    v3 = v40;
    if ( CurrentThread[1].WaitBlock[1].WaitListEntry.Flink )
    {
      DbgPrintEx(
        0,
        0,
        "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
        v12,
        v13,
        BugCheckParameter4);
      KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
    v4 = v41;
  }
  if ( (*(_DWORD *)(v1 + 712) & 0x8000) == 0
    && (*(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
     || *(_DWORD *)(v1 + 4)) )
  {
    goto LABEL_6;
  }
  _m_prefetchw((const void *)(v1 + 712));
  v30 = *(_DWORD *)(v1 + 712);
  do
  {
    v31 = v30;
    v32 = (v30 & 0x3FFF) - 1;
    if ( (v30 & 0x8000) == 0 && ((v30 & 0x4000) != 0 || v32 < (2 * *(_DWORD *)(v1 + 716)) >> 1) )
      goto LABEL_6;
    v33 = v30 & 0xFFFFC000 | v32;
    v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 712), v33, v30);
  }
  while ( v30 != v31 );
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  v34 = KeGetCurrentThread();
  result = *((_DWORD *)&v34->0 + 1) >> 6;
  if ( (*((_DWORD *)&v34->0 + 1) & 0x40) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)&v34->116 + 1, 6u);
  if ( v33 == 0x8000 )
    return KeSetEvent(*(PRKEVENT *)(v1 + 728), 0, 0);
  return result;
}
