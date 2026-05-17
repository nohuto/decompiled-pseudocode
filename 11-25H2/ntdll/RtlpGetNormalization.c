/*
 * XREFs of RtlpGetNormalization @ 0x1800C12A4
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800C00F0 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800C04F0 (RtlpIdnToUnicodeWorker.c)
 *     RtlNormalizeString @ 0x1800C1C80 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x1800C2110 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NormalizationList__Lookup @ 0x1800F2104 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x18010C488 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x180165250 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  __int64 v11; // rbx
  int Tables; // ebp
  __int64 v13; // r9
  __int64 *v14; // rax
  __int128 v15; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&NormalizationListLock);
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
  v15 = 0uLL;
  v7 = NormalizationList__Lookup(v4);
  if ( v7 )
  {
    *((_QWORD *)&v15 + 1) = *(_QWORD *)(v7 + 8);
    *(_QWORD *)&v15 = *(_QWORD *)(v7 + 16);
LABEL_7:
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v11 = Heap;
    if ( Heap )
    {
      v5 = Heap + 24;
      Tables = Normalization__LoadTables(a1, *((_QWORD *)&v15 + 1), v15, Heap + 24);
      if ( Tables >= 0 )
      {
        *(_DWORD *)(v11 + 16) = a1;
        v14 = (__int64 *)off_1801CE6B0;
        if ( *off_1801CE6B0 != (_UNKNOWN *)&NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v11 = &NormalizationListHead;
        *(_QWORD *)(v11 + 8) = v14;
        *v14 = v11;
        off_1801CE6B0 = (_UNKNOWN **)v11;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v13);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_12;
  }
  v8 = a1;
  LODWORD(v8) = a1 & 0xFFFFFEFF;
  NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v8, 0LL, (char *)&v15 + 8, &v15);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_7;
LABEL_12:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}
