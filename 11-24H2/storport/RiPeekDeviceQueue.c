/*
 * XREFs of RiPeekDeviceQueue @ 0x1400146F0
 * Callers:
 *     RaidInsertDeviceQueue @ 0x140013CA0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x140014570 (RiGetEnqueueReason.c)
 *     RaidRemovePendingDeviceQueue @ 0x140053084 (RaidRemovePendingDeviceQueue.c)
 * Callees:
 *     <none>
 */

union _SLIST_HEADER *__fastcall RiPeekDeviceQueue(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *Alignment; // rbx
  union _SLIST_HEADER *v3; // rsi
  union _SLIST_HEADER *v4; // rdi
  ULONG v5; // r9d
  struct _SLIST_ENTRY *v6; // r10
  struct _SLIST_ENTRY *v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  PSLIST_ENTRY EntrySList; // rax
  PSLIST_ENTRY v14; // rax
  __int64 v15; // rdx
  struct _SLIST_ENTRY *Next; // r8
  char *v17; // rcx
  union _SLIST_HEADER *v18; // rdx
  __int128 **Region; // rcx
  union _SLIST_HEADER **v20; // rax
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-18h] BYREF

  Alignment = (union _SLIST_HEADER *)a1[9].Alignment;
  if ( Alignment != &a1[9] )
    return Alignment;
  v3 = a1 + 7;
  Alignment = 0LL;
  if ( !ExQueryDepthSList(a1 + 7) )
  {
    v22 = 0LL;
    if ( !ExQueryDepthSList(a1 + 6) )
    {
LABEL_4:
      v4 = a1 + 8;
      if ( (union _SLIST_HEADER *)v4->Alignment != v4 && !ExQueryDepthSList(v3) )
      {
        v5 = 0;
        v6 = 0LL;
        v7 = 0LL;
        while ( 1 )
        {
          v8 = (_QWORD *)v4->Alignment;
          if ( (union _SLIST_HEADER *)v4->Alignment == v4 || v5 >= 0x40 )
            break;
          v9 = *v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 )
            goto LABEL_31;
          v10 = (_QWORD *)v8[1];
          if ( (_QWORD *)*v10 != v8 )
            goto LABEL_31;
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          *((_BYTE *)v8 + 20) |= 2u;
          v11 = ((unsigned __int64)v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v7 )
            v7->Next = (_SLIST_ENTRY *)v11;
          else
            v6 = (struct _SLIST_ENTRY *)v11;
          v7 = (struct _SLIST_ENTRY *)v11;
          ++v5;
        }
        v7->Next = 0LL;
        InterlockedPushListSList(v3, v6, v7, v5);
      }
      goto LABEL_15;
    }
    *((_QWORD *)&v22 + 1) = &v22;
    *(_QWORD *)&v22 = &v22;
    v14 = ExpInterlockedFlushSList(a1 + 6);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = v22;
        Next = v14->Next;
        v17 = (char *)(&v14[-1].Next + 1);
        if ( *(__int128 **)(v22 + 8) != &v22 )
          break;
        *(_QWORD *)v17 = v22;
        v14->Next = (_SLIST_ENTRY *)&v22;
        v14 = Next;
        *(_QWORD *)(v15 + 8) = v17;
        *(_QWORD *)&v22 = v17;
        v17[20] &= ~2u;
        if ( !Next )
          goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      if ( (__int128 *)v22 == &v22 )
        goto LABEL_4;
      v18 = a1 + 8;
      Region = (__int128 **)a1[8].Region;
      if ( *(union _SLIST_HEADER **)(a1[8].Alignment + 8) == &a1[8]
        && *Region == (__int128 *)v18
        && *(__int128 **)(v22 + 8) == &v22
        && **((__int128 ***)&v22 + 1) == &v22 )
      {
        *Region = &v22;
        v20 = (union _SLIST_HEADER **)*((_QWORD *)&v22 + 1);
        a1[8].Region = *((_QWORD *)&v22 + 1);
        *v20 = v18;
        v21 = v22;
        *((_QWORD *)&v22 + 1) = Region;
        if ( *(__int128 **)(v22 + 8) == &v22 && *Region == &v22 )
        {
          *Region = (__int128 *)v22;
          *(_QWORD *)(v21 + 8) = Region;
          goto LABEL_4;
        }
      }
    }
LABEL_31:
    __fastfail(3u);
  }
LABEL_15:
  if ( ExQueryDepthSList(v3) )
  {
    EntrySList = FirstEntrySList(v3);
    if ( EntrySList )
      return (union _SLIST_HEADER *)(&EntrySList[-1].Next + 1);
  }
  return Alignment;
}
