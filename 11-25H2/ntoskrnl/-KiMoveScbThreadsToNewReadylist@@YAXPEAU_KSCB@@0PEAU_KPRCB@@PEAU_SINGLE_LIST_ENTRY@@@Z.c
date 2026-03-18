/*
 * XREFs of ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402F52F0
 * Callers:
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402F6460 (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F6544 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 */

void __fastcall KiMoveScbThreadsToNewReadylist(
        struct _KSCB *a1,
        struct _LIST_ENTRY *a2,
        struct _KPRCB *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  struct _LIST_ENTRY *v4; // r11
  char v6; // cl
  bool v8; // r12
  char v9; // r13
  unsigned int ReadySummary; // ebp
  unsigned int v11; // eax
  struct _KPRCB *v12; // rbp
  _LIST_ENTRY *v13; // rbx
  _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY **p_Blink; // rdi
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
  _LIST_ENTRY *v27; // [rsp+38h] [rbp-50h]
  char v28; // [rsp+90h] [rbp+8h]
  unsigned int v29; // [rsp+98h] [rbp+10h] BYREF
  struct _KPRCB *v30; // [rsp+A0h] [rbp+18h]
  struct _SINGLE_LIST_ENTRY *v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v4 = 0LL;
  v29 = 0;
  v6 = 0;
  v27 = 0LL;
  v8 = 0;
  v9 = 0;
  ReadySummary = a1->ReadySummary;
  v28 = 0;
  if ( a2 )
  {
    LOWORD(a2[7].Blink) |= ReadySummary;
    v27 = a2 + 9;
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
      p_Blink = &Flink[-14].Blink;
      if ( v9 )
      {
        p_Blink[118] = a2;
      }
      else
      {
        *((_DWORD *)p_Blink + 29) &= ~0x2000u;
        v16 = ((_DWORD)p_Blink[15] & 0x400000) == 0;
        p_Blink[118] = v4;
        if ( !v16 )
          _InterlockedAnd((volatile signed __int32 *)p_Blink[121], 0xFFFBFFFF);
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
        if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(p_Blink, a1, (unsigned int)v4, (unsigned int)v4)
          && !KiCheckForMaxOverQuotaScb((__int64)a1) )
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
        KiAddThreadToPrcbQueue((_DWORD)v12, (_DWORD)p_Blink, *((char *)p_Blink + 195), 0, v17 != 0, (__int64)&v29);
        if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
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
        || (Blink->Flink = v21, v21->Blink = Blink, v23 = &v27[v25], v24 = v23->Blink, v23->Flink->Blink != v23)
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
  a1->ReadySummary = (unsigned __int16)v4;
}
