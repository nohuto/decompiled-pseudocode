/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800852F0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  _TP_CLEANUP_GROUP *i; // rax
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *v8; // rdx
  _RTL_SRWLOCK *p_WaitLock; // rdx
  signed __int32 First; // eax
  signed __int32 v11; // ett
  _LIST_ENTRY *v12; // rdx
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  signed __int32 *v17; // roff
  signed __int32 v18; // r9d
  signed __int32 v19; // r8d
  _LIST_ENTRY *v20; // rcx
  bool v21; // zf
  signed __int32 v22; // eax
  _LIST_ENTRY *p_CleanupList; // r14
  _LIST_ENTRY *v24; // rsi
  _LIST_ENTRY *j; // rax
  _RTL_SRWLOCK *v26; // rbx
  _LIST_ENTRY *v27; // rdx
  _LIST_ENTRY *v28; // rcx
  _LIST_ENTRY **p_Blink; // rbx
  _LIST_ENTRY *v30; // rax
  _LIST_ENTRY *v31; // rax
  void (__fastcall *Value)(_LIST_ENTRY *, PVOID); // rax
  LOGICAL (__fastcall *v33)(void *); // rax
  unsigned __int64 *v34; // [rsp+28h] [rbp-40h]
  _LIST_ENTRY **v35; // [rsp+28h] [rbp-40h]
  _TP_CLEANUP_GROUP *v36; // [rsp+30h] [rbp-38h]
  _LIST_ENTRY *v37; // [rsp+30h] [rbp-38h]
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( !CleanupGroup || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !CleanupGroup )
      TppRaiseInvalidParameter(0LL);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&CleanupGroup->CleanupLock);
    RtlAcquireSRWLockExclusive(&CleanupGroup->MemberLock);
    for ( i = (_TP_CLEANUP_GROUP *)CleanupGroup->MemberList.Flink;
          i != (_TP_CLEANUP_GROUP *)&CleanupGroup->MemberList;
          i = v36 )
    {
      p_WaitLock = &i[-1].Barrier.WaitLock;
      v34 = (unsigned __int64 *)&i[-1].Barrier.WaitLock;
      v36 = *(_TP_CLEANUP_GROUP **)&i->Refcount.Refcount;
      _m_prefetchw(&i[1].Barrier.WaitList);
      First = (signed __int32)i[1].Barrier.WaitList.First;
      do
      {
        v11 = First;
        First = _InterlockedCompareExchange((volatile signed __int32 *)&p_WaitLock[21], First | 0x20000, First);
      }
      while ( v11 != First );
      v12 = (_LIST_ENTRY *)&p_WaitLock[5];
      if ( (First & 0x30000) != 0 )
      {
        Flink = v12->Flink;
        Blink = v12->Blink;
        if ( v12->Flink->Blink != v12 || Blink->Flink != v12 )
LABEL_5:
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        v17 = (signed __int32 *)v34;
        _m_prefetchw(v34);
        v18 = *v17;
        while ( v18 )
        {
          v19 = v18;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)v34, v18 + 1, v18);
          v21 = v18 == v22;
          v18 = v22;
          if ( v21 )
            goto LABEL_20;
        }
        v19 = 0;
LABEL_20:
        if ( v19 )
        {
          v20 = CleanupGroup->CleanupList.Blink;
          if ( v20->Flink != &CleanupGroup->CleanupList )
            goto LABEL_5;
          v12->Flink = &CleanupGroup->CleanupList;
          v12->Blink = v20;
          v20->Flink = v12;
          CleanupGroup->CleanupList.Blink = v12;
        }
        else
        {
          v12->Blink = v12;
          v12->Flink = v12;
        }
      }
      else
      {
        v34[23] = retaddr;
        v13 = v12->Flink;
        v14 = v12->Blink;
        if ( v12->Flink->Blink != v12 )
          goto LABEL_5;
        if ( v14->Flink != v12 )
          goto LABEL_5;
        v14->Flink = v13;
        v13->Blink = v14;
        v7 = (_LIST_ENTRY *)(v34 + 5);
        v8 = CleanupGroup->CleanupList.Blink;
        if ( v8->Flink != &CleanupGroup->CleanupList )
          goto LABEL_5;
        v7->Flink = &CleanupGroup->CleanupList;
        v34[6] = (unsigned __int64)v8;
        v8->Flink = v7;
        CleanupGroup->CleanupList.Blink = v7;
      }
    }
    RtlReleaseSRWLockExclusive(&CleanupGroup->MemberLock);
    p_CleanupList = &CleanupGroup->CleanupList;
    v24 = CleanupGroup->CleanupList.Flink;
    while ( v24 != p_CleanupList )
    {
      p_Blink = &v24[-3].Blink;
      v24 = v24->Flink;
      v30 = p_Blink[1][1].Flink;
      if ( v30 )
        ((void (__fastcall *)(_LIST_ENTRY **, _QWORD))v30)(p_Blink, CancelPendingCallbacks);
      if ( CancelPendingCallbacks )
      {
        v31 = p_Blink[1][1].Blink;
        if ( v31 )
          ((void (__fastcall *)(_LIST_ENTRY **))v31)(p_Blink);
      }
    }
    for ( j = p_CleanupList->Flink; j != p_CleanupList; j = v37 )
    {
      v26 = (_RTL_SRWLOCK *)&j[-3].Blink;
      v35 = &j[-3].Blink;
      v37 = j->Flink;
      v27 = j->Flink;
      v28 = j->Blink;
      if ( j->Flink->Blink != j || v28->Flink != j )
        __fastfail(3u);
      v28->Flink = v27;
      v27->Blink = v28;
      j->Blink = j;
      j->Flink = j;
      TppBarrierAdjust(v26 + 7, 0, 1);
      if ( v26[3].Value )
      {
        if ( (*(_DWORD *)&v26[21].0 & 0x10000) != 0 )
        {
          v26 = (_RTL_SRWLOCK *)v35;
        }
        else
        {
          Value = (void (__fastcall *)(_LIST_ENTRY *, PVOID))v26[3].Value;
          v26 = (_RTL_SRWLOCK *)v35;
          Value(v35[11], CleanupParameter);
        }
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26, 0xFFFFFFFF) == 1 )
      {
        v33 = (LOGICAL (__fastcall *)(void *))v35[1]->Flink;
        if ( (char *)v33 == (char *)TppSimplepFree )
        {
          TppSimplepFree(v35, TppSimplepFree);
        }
        else if ( (char *)v33 == (char *)TppAlpcpFree )
        {
          TppAlpcpFree(v35);
        }
        else if ( v33 == TppWorkpFree )
        {
          TppWorkpFree(v35);
        }
        else
        {
          v33(v35);
        }
      }
    }
    RtlReleaseSRWLockExclusive(&CleanupGroup->CleanupLock);
    TppBarrierAdjust((_RTL_SRWLOCK *)&CleanupGroup->Barrier, 0, 1);
  }
}
