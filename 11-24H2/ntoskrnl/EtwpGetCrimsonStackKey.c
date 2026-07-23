/*
 * XREFs of EtwpGetCrimsonStackKey @ 0x1404C5C9C
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x1403DEC00 (EtwpDereferenceStackEntry.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
  __int64 v14; // rdx
  int v15; // ebx
  char *v16; // r14
  __int64 CurrentIrql; // rcx
  PSLIST_ENTRY i; // rsi
  unsigned int v19; // ecx
  PSLIST_ENTRY j; // r13
  unsigned int Next; // edx
  _SLIST_ENTRY *v22; // rax
  PSLIST_ENTRY *v23; // rcx
  PSLIST_ENTRY v24; // rax
  _SLIST_ENTRY **v25; // rax
  unsigned int v26; // ebx
  _SLIST_HEADER *v27; // rax
  PSLIST_ENTRY v28; // r14
  PSLIST_ENTRY v29; // rax
  PSLIST_ENTRY v30; // r13
  unsigned int v31; // r12d
  _SLIST_ENTRY *v32; // rbx
  PSLIST_ENTRY *v33; // rax
  _SLIST_HEADER *v35; // [rsp+28h] [rbp-70h]
  unsigned int v36; // [rsp+30h] [rbp-68h]
  KIRQL NewIrql; // [rsp+38h] [rbp-60h]
  _SLIST_ENTRY *ListEntry; // [rsp+40h] [rbp-58h]
  char *v39; // [rsp+48h] [rbp-50h]
  unsigned int v40; // [rsp+A0h] [rbp+8h]
  _SLIST_HEADER *v41; // [rsp+A0h] [rbp+8h]
  unsigned int v44; // [rsp+B8h] [rbp+20h]

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
    v35 = v5;
    ListEntry = 0LL;
    v36 = 0;
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
      v36 = v8;
    }
    v14 = v8 % *((_DWORD *)&v5->HeaderX64 + 2);
    v15 = 0;
    v16 = (char *)(&v5[v14 + 2].Alignment + v14);
    v39 = v16;
    NewIrql = KeGetCurrentIrql();
    if ( !NewIrql || NewIrql == 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
      }
    }
    else if ( NewIrql != 2 )
    {
      if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v16 + 4) )
        return v3;
LABEL_14:
      for ( i = *(PSLIST_ENTRY *)v16; i != (PSLIST_ENTRY)v16; i = i->Next )
      {
        ++v15;
        if ( *((_DWORD *)&i[1].Next + 3) == v8 && LODWORD(i[2].Next) == v6 )
        {
          v19 = 0;
          for ( j = i; ; j = j[1].Next )
          {
            v40 = v19;
            if ( !j )
              break;
            Next = 32;
            if ( LODWORD(j[2].Next) < 0x20 )
              Next = (unsigned int)j[2].Next;
            v44 = Next;
            if ( RtlCompareMemory(&j[2].Next + 1, (const void *)(a2 + 16 + 8LL * v19), 8LL * Next) != 8LL * Next )
            {
              v8 = v36;
              goto LABEL_25;
            }
            v19 = v44 + v40;
          }
          _InterlockedIncrement((volatile signed __int32 *)&i[1].Next + 2);
          v22 = i->Next;
          if ( *(&i->Next->Next + 1) == i )
          {
            v23 = (PSLIST_ENTRY *)*((_QWORD *)&i->Next + 1);
            if ( *v23 == i )
            {
              *v23 = v22;
              *((_QWORD *)&v22->Next + 1) = v23;
              v24 = *(PSLIST_ENTRY *)v16;
              if ( *(char **)(*(_QWORD *)v16 + 8LL) == v16 )
              {
                i->Next = v24;
                *((_QWORD *)&i->Next + 1) = v16;
                *((_QWORD *)&v24->Next + 1) = i;
                *(_QWORD *)v16 = i;
                KeReleaseSpinLock((PKSPIN_LOCK)v16 + 2, NewIrql);
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
      if ( v15 == 4 )
      {
        v7 = (_SLIST_ENTRY *)*((_QWORD *)v16 + 1);
        ListEntry = v7;
        if ( (char *)v7->Next != v16 )
          goto LABEL_53;
        v25 = (_SLIST_ENTRY **)*((_QWORD *)&v7->Next + 1);
        if ( *v25 != v7 )
          goto LABEL_53;
        *((_QWORD *)v16 + 1) = v25;
        *v25 = (_SLIST_ENTRY *)v16;
      }
      i = 0LL;
      v26 = 0;
      if ( v6 )
      {
        v27 = v5 + 1;
        v41 = v5 + 1;
        v28 = 0LL;
        do
        {
          v29 = RtlpInterlockedPopEntrySList(v27);
          v30 = v29;
          if ( !v29 )
            break;
          if ( v26 + 32 >= v6 )
            v31 = v6 - v26;
          else
            v31 = 32;
          memmove(&v29[2].Next + 1, (const void *)(a2 + 8 * (v26 + 2LL)), 8LL * v31);
          if ( v26 )
            LODWORD(v30[2].Next) = v31;
          else
            i = v30;
          if ( v28 )
            v28[1].Next = v30;
          v27 = v41;
          v26 += v31;
          v30[1].Next = 0LL;
          v28 = v30;
        }
        while ( v26 < v6 );
        v16 = v39;
        v7 = ListEntry;
        if ( v26 < v6 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)v39 + 2, NewIrql);
          if ( i )
          {
            do
            {
              v32 = i[1].Next;
              RtlpInterlockedPushEntrySList(v35 + 1, i);
              i = v32;
            }
            while ( v32 );
          }
          if ( ListEntry )
            EtwpDereferenceStackEntry(ListEntry, v35);
          return v3;
        }
        v5 = v35;
        v8 = v36;
      }
      *((_DWORD *)&i[1].Next + 3) = v8;
      LODWORD(i[2].Next) = v6;
      *((_DWORD *)&i[1].Next + 2) = 2;
      v33 = (PSLIST_ENTRY *)*((_QWORD *)v16 + 1);
      if ( *v33 != (PSLIST_ENTRY)v16 )
        goto LABEL_53;
      i->Next = (_SLIST_ENTRY *)v16;
      *((_QWORD *)&i->Next + 1) = v33;
      *v33 = i;
      *((_QWORD *)v16 + 1) = i;
      KeReleaseSpinLock((PKSPIN_LOCK)v16 + 2, NewIrql);
      if ( v7 )
        EtwpDereferenceStackEntry(v7, v5);
LABEL_56:
      v3 = 1;
      *a3 = i;
      return v3;
    }
    KxAcquireSpinLock((PKSPIN_LOCK)v16 + 2);
    goto LABEL_14;
  }
  return 0;
}
