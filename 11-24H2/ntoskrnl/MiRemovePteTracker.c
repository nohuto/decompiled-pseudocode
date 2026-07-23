/*
 * XREFs of MiRemovePteTracker @ 0x1404C793C
 * Callers:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmFreeMappingAddress @ 0x140A55EC0 (MmFreeMappingAddress.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiRemovePteTracker(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, ULONG_PTR a3)
{
  _SLIST_ENTRY *v3; // rbx
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r14
  KIRQL v8; // r15
  _SLIST_ENTRY *v9; // rdx
  _SLIST_ENTRY *i; // r8
  _SLIST_ENTRY *Next; // rcx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // r9
  ULONG_PTR v14; // r9
  _SLIST_ENTRY *v15; // rcx
  _SLIST_ENTRY **v16; // rax
  PSLIST_ENTRY result; // rax

  v3 = 0LL;
  v6 = (40543 * (a2 >> 12)) ^ ((40543 * (a2 >> 12)) >> 32);
  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( KeGetCurrentIrql() == 2 )
  {
    v8 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35E50);
  }
  else
  {
    v8 = ExAcquireSpinLockExclusive(&dword_140E35E50);
  }
  v9 = (_SLIST_ENTRY *)((char *)&unk_140E38930 + 16 * (v6 & 0xF));
  for ( i = v9->Next; i != v9; i = i->Next )
  {
    Next = i[2].Next;
    if ( v7 == ((unsigned __int64)Next & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v3 )
        KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)i, BugCheckParameter2, (ULONG_PTR)v3);
      v12 = *((_QWORD *)&i[1].Next + 1);
      if ( v12 != a3 )
        KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)i, v12, a3);
      if ( BugCheckParameter2 && !_bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 9u) )
      {
        v13 = *((_QWORD *)&i[3].Next + 1);
        if ( v13 != *(_QWORD *)(BugCheckParameter2 + 48) )
          KeBugCheckEx(0xDAu, 4uLL, (ULONG_PTR)i, v13, *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !byte_140E3745C )
        {
          if ( Next != *(_SLIST_ENTRY **)(BugCheckParameter2 + 24) )
            KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)i, (ULONG_PTR)i[2].Next, *(_QWORD *)(BugCheckParameter2 + 24));
          v14 = *((_QWORD *)&i[2].Next + 1);
          if ( v14 != *(_QWORD *)(BugCheckParameter2 + 32) )
            KeBugCheckEx(0xDAu, 5uLL, (ULONG_PTR)i, v14, *(_QWORD *)(BugCheckParameter2 + 32));
        }
      }
      v15 = i->Next;
      if ( *(&i->Next->Next + 1) != i || (v16 = (_SLIST_ENTRY **)*((_QWORD *)&i->Next + 1), *v16 != i) )
        __fastfail(3u);
      *v16 = v15;
      v3 = i;
      *((_QWORD *)&v15->Next + 1) = v16;
    }
  }
  if ( !v3 && !byte_140E35FE5 )
    KeBugCheckEx(0xDAu, 6uLL, BugCheckParameter2, v7, a3);
  qword_140E38A30 -= a3;
  --qword_140E38A38;
  result = (PSLIST_ENTRY)MiReleaseSpinLockExclusive(&dword_140E35E50, v8);
  if ( v3 )
    return RtlpInterlockedPushEntrySList(&ListHead, v3);
  return result;
}
