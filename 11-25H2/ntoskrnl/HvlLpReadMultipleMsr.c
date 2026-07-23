/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1404B0F00
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v4; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v7; // rax
  char *HypercallCachedPages; // rdi
  struct _KPRCB *v9; // rsi
  PSLIST_ENTRY v10; // rax
  _QWORD *p_Next; // rbx
  char v12; // r14
  _SLIST_ENTRY *v13; // rsi
  _SLIST_ENTRY *v14; // r15
  __int64 v15; // r12
  int *v16; // rdx
  _DWORD *v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  struct _KPRCB *v25; // rax
  struct _KPRCB *v26; // rcx
  void *SchedulerAssist; // r8
  struct _KPRCB *v28; // rax
  struct _KPRCB *v29; // rcx
  void *v30; // r8
  __int128 v31; // [rsp+28h] [rbp-48h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-38h]
  _SLIST_ENTRY *Next; // [rsp+40h] [rbp-30h]
  __int128 v34; // [rsp+48h] [rbp-28h]

  v4 = a2;
  ListEntry = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  if ( (HvlpFlags & 8) != 0
    && (CurrentPrcb = KeGetCurrentPrcb(),
        v7 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList),
        (HypercallCachedPages = (char *)v7) != 0LL) )
  {
    Next = v7[1].Next;
    LOBYTE(v31) = 1;
    *((_QWORD *)&v31 + 1) = CurrentPrcb;
    ListEntry = v7;
  }
  else
  {
    LOBYTE(v31) = 4;
    BYTE8(v31) = KeDisableInterrupts();
    HIDWORD(v31) = 1;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
  }
  if ( (HvlpFlags & 8) != 0
    && (v9 = KeGetCurrentPrcb(), v10 = RtlpInterlockedPopEntrySList(&v9->HypercallPageList),
                                 (p_Next = &v10->Next) != 0LL) )
  {
    v12 = 1;
    *((_QWORD *)&v34 + 1) = v9;
    v13 = v10[1].Next;
    v14 = v10;
  }
  else
  {
    BYTE8(v34) = KeDisableInterrupts();
    v14 = 0LL;
    HIDWORD(v34) = 2;
    v12 = 4;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v13 = (_SLIST_ENTRY *)p_Next[2];
  }
  v15 = v4;
  if ( (_DWORD)v4 )
  {
    v16 = a3;
    v17 = HypercallCachedPages + 8;
    v18 = v4;
    do
    {
      *(v17 - 2) = a1;
      *(v17 - 1) = 65537;
      v19 = *v16++;
      *v17 = v19;
      v17 += 4;
      --v18;
    }
    while ( v18 );
  }
  v20 = 0;
  if ( (unsigned __int16)HvcallInitiateHypercall(136) )
    v20 = -1073741823;
  if ( (_DWORD)v4 )
  {
    v23 = a4;
    do
    {
      v24 = *p_Next;
      p_Next += 2;
      *v23++ = v24;
      --v15;
    }
    while ( v15 );
  }
  v21 = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v14[1].Next = v13;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)&v34 + 1) + 35776LL), v14);
  }
  else
  {
    v25 = KeGetCurrentPrcb();
    if ( (BYTE12(v34) & 1) != 0 )
    {
      v21 = (__int64)v25->HypercallCachedPages;
    }
    else if ( (BYTE12(v34) & 2) != 0 )
    {
      v21 = (__int64)v25->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v21 + 16) = v13;
    if ( BYTE8(v34) )
    {
      v26 = KeGetCurrentPrcb();
      SchedulerAssist = v26->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        if ( (_InterlockedAnd((volatile signed __int32 *)SchedulerAssist, 0xFFDFFFFF) & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v26);
      }
      _enable();
    }
  }
  v22 = 0LL;
  if ( (v31 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)&v31 + 1) + 35776LL), ListEntry);
  }
  else
  {
    v28 = KeGetCurrentPrcb();
    if ( (BYTE12(v31) & 1) != 0 )
    {
      v22 = (__int64)v28->HypercallCachedPages;
    }
    else if ( (BYTE12(v31) & 2) != 0 )
    {
      v22 = (__int64)v28->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v22 + 16) = Next;
    if ( BYTE8(v31) )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      if ( v30 )
      {
        _m_prefetchw(v30);
        if ( (_InterlockedAnd((volatile signed __int32 *)v30, 0xFFDFFFFF) & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
      _enable();
    }
  }
  return v20;
}
