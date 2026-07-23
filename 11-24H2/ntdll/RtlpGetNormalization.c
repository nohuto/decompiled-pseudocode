/*
 * XREFs of RtlpGetNormalization @ 0x1800B4004
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800B2E50 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800B3250 (RtlpIdnToUnicodeWorker.c)
 *     RtlNormalizeString @ 0x1800B49E0 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x1800B4E70 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     NormalizationList__Lookup @ 0x1800EB508 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x1801049A8 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x180162080 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *Heap; // rax
  char *v10; // rbx
  int Tables; // ebp
  _QWORD *v12; // rax
  __int128 SectionSize; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&NormalizationListLock);
  v5 = NormalizationList__Lookup(a1);
  if ( v5 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&NormalizationListLock);
    result = 0LL;
    *a2 = v5;
    return result;
  }
  LODWORD(v4) = v4 ^ 0x100;
  SectionSize = 0uLL;
  v7 = NormalizationList__Lookup(v4);
  if ( v7 )
  {
    *((_QWORD *)&SectionSize + 1) = *(_QWORD *)(v7 + 8);
    *(_QWORD *)&SectionSize = *(_QWORD *)(v7 + 16);
LABEL_7:
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v10 = Heap;
    if ( Heap )
    {
      v5 = (__int64)(Heap + 24);
      Tables = Normalization__LoadTables(a1, *((_QWORD *)&SectionSize + 1), SectionSize, Heap + 24);
      if ( Tables >= 0 )
      {
        *((_DWORD *)v10 + 4) = a1;
        v12 = off_1801CB6B0;
        if ( *off_1801CB6B0 != (_UNKNOWN *)&NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &NormalizationListHead;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        off_1801CB6B0 = (_UNKNOWN **)v10;
        goto LABEL_3;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_12;
  }
  NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, (PVOID *)&SectionSize + 1, (PULONG)&SectionSize);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_7;
LABEL_12:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}
