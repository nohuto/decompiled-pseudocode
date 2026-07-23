/*
 * XREFs of ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402D716C
 * Callers:
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14045D264 (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x14045D344 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 */

void __fastcall KiMoveScbThreadsToNewReadylist(
        struct _KSCB *a1,
        struct _KSCB *a2,
        struct _KPRCB *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  __int64 v4; // r11
  char v6; // cl
  bool v8; // r12
  char v9; // r13
  unsigned int ReadySummary; // ebp
  unsigned int v11; // eax
  struct _KPRCB *v12; // rbp
  _LIST_ENTRY *v13; // rbx
  _LIST_ENTRY *Flink; // rsi
  __int64 p_Blink; // rdi
  bool v16; // zf
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // r10
  struct _LIST_ENTRY *v21; // rcx
  struct _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v23; // rdx
  struct _LIST_ENTRY *v24; // r9
  unsigned int v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+34h] [rbp-54h]
  _LIST_ENTRY *ReadyListHead; // [rsp+38h] [rbp-50h]
  char v28; // [rsp+90h] [rbp+8h]
  unsigned int v29; // [rsp+98h] [rbp+10h] BYREF
  struct _KPRCB *v30; // [rsp+A0h] [rbp+18h]
  struct _SINGLE_LIST_ENTRY *v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v4 = 0LL;
  v29 = 0;
  v6 = 0;
  ReadyListHead = 0LL;
  v8 = 0;
  v9 = 0;
  ReadySummary = a1->ReadySummary;
  v28 = 0;
  if ( a2 )
  {
    a2->ReadySummary |= ReadySummary;
    ReadyListHead = a2->ReadyListHead;
    v9 = 1;
  }
  else if ( a3 )
  {
    v6 = 1;
    v28 = 1;
  }
  else
  {
    v8 = a4 != 0LL;
  }
  if ( !ReadySummary )
    goto LABEL_5;
  while ( 2 )
  {
    _BitScanReverse(&v11, ReadySummary);
    v26 = ReadySummary ^ (1 << v11);
    v12 = v30;
    v13 = &a1->ReadyListHead[v11];
    v25 = v11;
    Flink = v13->Flink;
    do
    {
      p_Blink = (__int64)&Flink[-14].Blink;
      if ( v9 )
      {
        *(_QWORD *)(p_Blink + 944) = a2;
      }
      else
      {
        *(_DWORD *)(p_Blink + 116) &= ~0x2000u;
        v16 = (*(_DWORD *)(p_Blink + 120) & 0x400000) == 0;
        *(_QWORD *)(p_Blink + 944) = v4;
        if ( !v16 )
          _InterlockedAnd(*(volatile signed __int32 **)(p_Blink + 968), 0xFFFBFFFF);
      }
      Flink = Flink->Flink;
      if ( v8 )
      {
        KiInsertDeferredReadyList(a4, p_Blink);
      }
      else
      {
        if ( !v6 )
          continue;
        if ( KiIsThreadConstrainedBySchedulingGroup(p_Blink) && !KiCheckForMaxOverQuotaScb((__int64)a1) )
        {
          do
          {
            v19 += *(_DWORD *)(v18 + 124);
            if ( v20 )
            {
              v17 += **(_DWORD **)(v18 + 128);
            }
            else if ( v19 )
            {
              break;
            }
            v18 = *(_QWORD *)(v18 + 416);
          }
          while ( v18 );
        }
        KiAddThreadToPrcbQueue((_DWORD)v12, p_Blink, *(char *)(p_Blink + 195), 0, v17 != 0, (__int64)&v29);
        if ( (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
          EtwTraceReadyQueueInsertion(p_Blink, v12->Number, v29, 0LL);
        a4 = v31;
        v4 = 0LL;
      }
      v6 = v28;
    }
    while ( Flink != v13 );
    ReadySummary = v26;
    if ( v9 )
    {
      v21 = v13->Flink;
      Blink = v13->Blink;
      if ( v13->Flink->Blink != v13
        || Blink->Flink != v13
        || (Blink->Flink = v21, v21->Blink = Blink,
                                v23 = &ReadyListHead[v25],
                                v24 = v23->Blink,
                                v23->Flink->Blink != v23)
        || v24->Flink != v23
        || v21->Flink->Blink != v21
        || Blink->Flink != v21 )
      {
        __fastfail(3u);
      }
      v24->Flink = v21;
      v23->Blink = v21->Blink;
      v21->Blink->Flink = v23;
      v21->Blink = v24;
    }
    v13->Blink = v13;
    v13->Flink = v13;
    if ( v26 )
    {
      v6 = v28;
      a4 = v31;
      continue;
    }
    break;
  }
LABEL_5:
  a1->ReadySummary = v4;
}
