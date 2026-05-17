/*
 * XREFs of RtlpGetNormalization @ 0x1800BC244
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800BB090 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800BB490 (RtlpIdnToUnicodeWorker.c)
 *     RtlNormalizeString @ 0x1800BCC20 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x1800BD0B0 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NormalizationList__Lookup @ 0x1800F0888 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x180109A78 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x180163CC0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  unsigned __int64 v12; // rbx
  int Tables; // ebp
  unsigned __int64 *v14; // rax
  __int128 v15; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&NormalizationListLock, a2, a3);
  v6 = NormalizationList__Lookup(a1);
  if ( v6 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&NormalizationListLock);
    result = 0LL;
    *a2 = (volatile signed __int32 *)v6;
    return result;
  }
  LODWORD(v5) = v5 ^ 0x100;
  v15 = 0uLL;
  v8 = NormalizationList__Lookup(v5);
  if ( v8 )
  {
    *((_QWORD *)&v15 + 1) = *(_QWORD *)(v8 + 8);
    *(_QWORD *)&v15 = *(_QWORD *)(v8 + 16);
LABEL_7:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v12 = Heap;
    if ( Heap )
    {
      v6 = Heap + 24;
      Tables = Normalization__LoadTables(a1, *((_QWORD *)&v15 + 1), v15, Heap + 24);
      if ( Tables >= 0 )
      {
        *(_DWORD *)(v12 + 16) = a1;
        v14 = (unsigned __int64 *)off_1801CC6B0;
        if ( *off_1801CC6B0 != (_UNKNOWN *)&NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v12 = &NormalizationListHead;
        *(_QWORD *)(v12 + 8) = v14;
        *v14 = v12;
        off_1801CC6B0 = (_UNKNOWN **)v12;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_12;
  }
  v9 = a1;
  LODWORD(v9) = a1 & 0xFFFFFEFF;
  NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v9, 0LL, (char *)&v15 + 8, &v15);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_7;
LABEL_12:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}
