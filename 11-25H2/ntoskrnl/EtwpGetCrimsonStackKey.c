/*
 * XREFs of EtwpGetCrimsonStackKey @ 0x1404CCBE8
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x1403F6280 (EtwpDereferenceStackEntry.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

char __fastcall EtwpGetCrimsonStackKey(__int64 a1, __int64 a2, PSLIST_ENTRY *a3)
{
  char v3; // di
  _SLIST_HEADER *v5; // r12
  unsigned int v6; // ebp
  _SLIST_ENTRY *v7; // r15
  unsigned int v8; // r13d
  unsigned __int64 v9; // r8
  unsigned int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // edx
  int v14; // ebx
  char *v15; // r14
  __int64 CurrentIrql; // rcx
  PSLIST_ENTRY i; // rsi
  unsigned int v18; // ecx
  PSLIST_ENTRY j; // r13
  unsigned int Next; // edx
  _SLIST_ENTRY *v21; // rax
  PSLIST_ENTRY *v22; // rcx
  PSLIST_ENTRY v23; // rax
  _SLIST_ENTRY **v24; // rax
  unsigned int v25; // ebx
  _SLIST_HEADER *v26; // rax
  PSLIST_ENTRY v27; // r14
  PSLIST_ENTRY v28; // rax
  PSLIST_ENTRY v29; // r13
  unsigned int v30; // r12d
  _SLIST_ENTRY *v31; // rbx
  PSLIST_ENTRY *v32; // rax
  _SLIST_HEADER *v34; // [rsp+28h] [rbp-70h]
  unsigned int v35; // [rsp+30h] [rbp-68h]
  KIRQL NewIrql; // [rsp+38h] [rbp-60h]
  _SLIST_ENTRY *ListEntry; // [rsp+40h] [rbp-58h]
  char *v38; // [rsp+48h] [rbp-50h]
  unsigned int v39; // [rsp+A0h] [rbp+8h]
  _SLIST_HEADER *v40; // [rsp+A0h] [rbp+8h]
  unsigned int v43; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 820) & 1) != 0 )
  {
    v5 = *(_SLIST_HEADER **)(a1 + 1056);
    v6 = ((unsigned int)*(unsigned __int16 *)(a2 + 6) - 8) >> 3;
    v7 = 0LL;
    v8 = 0;
    v9 = 4LL * v6;
    v10 = 0;
    v34 = v5;
    ListEntry = 0LL;
    v35 = 0;
    if ( v9 )
    {
      v11 = 0LL;
      do
      {
        v12 = v10 + 1;
        v10 += 2;
        v13 = *(unsigned __int16 *)(a2 + 2 * v11 + 16) ^ *(unsigned __int16 *)(a2 + 2 * v12 + 16);
        v11 = v10;
        v8 += v13;
      }
      while ( v10 < v9 );
      v35 = v8;
    }
    v14 = 0;
    v15 = (char *)(&v5[v8 % *((_DWORD *)&v5->HeaderX64 + 2) + 2].Alignment + v8 % *((_DWORD *)&v5->HeaderX64 + 2));
    v38 = v15;
    NewIrql = KeGetCurrentIrql();
    if ( !NewIrql || NewIrql == 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    else if ( NewIrql != 2 )
    {
      if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v15 + 4) )
        return v3;
LABEL_14:
      for ( i = *(PSLIST_ENTRY *)v15; i != (PSLIST_ENTRY)v15; i = i->Next )
      {
        ++v14;
        if ( *((_DWORD *)&i[1].Next + 3) == v8 && LODWORD(i[2].Next) == v6 )
        {
          v18 = 0;
          for ( j = i; ; j = j[1].Next )
          {
            v39 = v18;
            if ( !j )
              break;
            Next = 32;
            if ( LODWORD(j[2].Next) < 0x20 )
              Next = (unsigned int)j[2].Next;
            v43 = Next;
            if ( RtlCompareMemory(&j[2].Next + 1, (const void *)(a2 + 16 + 8LL * v18), 8LL * Next) != 8LL * Next )
            {
              v8 = v35;
              goto LABEL_25;
            }
            v18 = v43 + v39;
          }
          _InterlockedIncrement((volatile signed __int32 *)&i[1].Next + 2);
          v21 = i->Next;
          if ( *(&i->Next->Next + 1) == i )
          {
            v22 = (PSLIST_ENTRY *)*((_QWORD *)&i->Next + 1);
            if ( *v22 == i )
            {
              *v22 = v21;
              *((_QWORD *)&v21->Next + 1) = v22;
              v23 = *(PSLIST_ENTRY *)v15;
              if ( *(char **)(*(_QWORD *)v15 + 8LL) == v15 )
              {
                i->Next = v23;
                *((_QWORD *)&i->Next + 1) = v15;
                *((_QWORD *)&v23->Next + 1) = i;
                *(_QWORD *)v15 = i;
                KeReleaseSpinLock((PKSPIN_LOCK)v15 + 2, NewIrql);
                goto LABEL_56;
              }
            }
          }
LABEL_53:
          __fastfail(3u);
        }
LABEL_25:
        ;
      }
      if ( v14 == 4 )
      {
        v7 = (_SLIST_ENTRY *)*((_QWORD *)v15 + 1);
        ListEntry = v7;
        if ( (char *)v7->Next != v15 )
          goto LABEL_53;
        v24 = (_SLIST_ENTRY **)*((_QWORD *)&v7->Next + 1);
        if ( *v24 != v7 )
          goto LABEL_53;
        *((_QWORD *)v15 + 1) = v24;
        *v24 = (_SLIST_ENTRY *)v15;
      }
      i = 0LL;
      v25 = 0;
      if ( v6 )
      {
        v26 = v5 + 1;
        v40 = v5 + 1;
        v27 = 0LL;
        do
        {
          v28 = RtlpInterlockedPopEntrySList(v26);
          v29 = v28;
          if ( !v28 )
            break;
          if ( v25 + 32 >= v6 )
            v30 = v6 - v25;
          else
            v30 = 32;
          memmove(&v28[2].Next + 1, (const void *)(a2 + 8 * (v25 + 2LL)), 8LL * v30);
          if ( v25 )
            LODWORD(v29[2].Next) = v30;
          else
            i = v29;
          if ( v27 )
            v27[1].Next = v29;
          v26 = v40;
          v25 += v30;
          v29[1].Next = 0LL;
          v27 = v29;
        }
        while ( v25 < v6 );
        v15 = v38;
        v7 = ListEntry;
        if ( v25 < v6 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)v38 + 2, NewIrql);
          if ( i )
          {
            do
            {
              v31 = i[1].Next;
              RtlpInterlockedPushEntrySList(v34 + 1, i);
              i = v31;
            }
            while ( v31 );
          }
          if ( ListEntry )
            EtwpDereferenceStackEntry(ListEntry, v34);
          return v3;
        }
        v5 = v34;
        v8 = v35;
      }
      *((_DWORD *)&i[1].Next + 3) = v8;
      LODWORD(i[2].Next) = v6;
      *((_DWORD *)&i[1].Next + 2) = 2;
      v32 = (PSLIST_ENTRY *)*((_QWORD *)v15 + 1);
      if ( *v32 != (PSLIST_ENTRY)v15 )
        goto LABEL_53;
      i->Next = (_SLIST_ENTRY *)v15;
      *((_QWORD *)&i->Next + 1) = v32;
      *v32 = i;
      *((_QWORD *)v15 + 1) = i;
      KeReleaseSpinLock((PKSPIN_LOCK)v15 + 2, NewIrql);
      if ( v7 )
        EtwpDereferenceStackEntry(v7, v5);
LABEL_56:
      v3 = 1;
      *a3 = i;
      return v3;
    }
    KxAcquireSpinLock((PKSPIN_LOCK)v15 + 2);
    goto LABEL_14;
  }
  return 0;
}
