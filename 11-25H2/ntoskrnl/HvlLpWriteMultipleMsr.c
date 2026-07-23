/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x140498660
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

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  __int64 v7; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  char *HypercallCachedPages; // rax
  int v10; // r8d
  char v11; // si
  _SLIST_ENTRY *v12; // rdi
  _SLIST_ENTRY *v13; // rbx
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  bool v20; // al
  struct _KPRCB *v21; // rax
  struct _KPRCB *v22; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int128 v26; // [rsp+28h] [rbp-28h]

  v7 = a2;
  v26 = 0LL;
  if ( 32 * (unsigned __int64)a2 > 0x1000 )
    return 3221225485LL;
  if ( (HvlpFlags & 8) == 0 )
  {
    v20 = KeDisableInterrupts();
LABEL_17:
    BYTE8(v26) = v20;
    v11 = 4;
    v12 = 0LL;
    HIDWORD(v26) = 1;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_5;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  HypercallCachedPages = (char *)RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
  if ( !HypercallCachedPages )
  {
    v20 = KeDisableInterrupts();
    v10 = a1;
    goto LABEL_17;
  }
  v10 = a1;
  v11 = 1;
  v12 = (_SLIST_ENTRY *)HypercallCachedPages;
  *((_QWORD *)&v26 + 1) = CurrentPrcb;
LABEL_5:
  v13 = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
  if ( a2 )
  {
    v14 = HypercallCachedPages + 8;
    do
    {
      *(v14 - 2) = v10;
      *(v14 - 1) = 65537;
      v15 = *a3++;
      *v14 = v15;
      v14 += 8;
      v16 = *a4++;
      *((_QWORD *)v14 - 3) = v16;
      --v7;
    }
    while ( v7 );
  }
  v17 = 0;
  if ( (unsigned __int16)HvcallInitiateHypercall(137) )
    v17 = -1073741823;
  v18 = 0LL;
  if ( (v11 & 1) != 0 )
  {
    v12[1].Next = v13;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)&v26 + 1) + 35776LL), v12);
  }
  else
  {
    v21 = KeGetCurrentPrcb();
    if ( (BYTE12(v26) & 1) != 0 )
    {
      v18 = (__int64)v21->HypercallCachedPages;
    }
    else if ( (BYTE12(v26) & 2) != 0 )
    {
      v18 = (__int64)v21->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v18 + 16) = v13;
    if ( BYTE8(v26) )
    {
      v22 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v22->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v24 = *SchedulerAssist;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v22);
      }
      _enable();
    }
  }
  return v17;
}
