/*
 * XREFs of RtlpHeapTrkDumpOutstandingAllocs @ 0x18001F660
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18001ECD0 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlpHeapTrkReportResult @ 0x18001EED8 (RtlpHeapTrkReportResult.c)
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180048350 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

char RtlpHeapTrkDumpOutstandingAllocs()
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  __int64 v2; // r14
  _QWORD *i; // rbx
  void *v4; // rcx
  __int64 v5; // rbp
  SIZE_T v6; // rax
  int v7; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  PVOID Src; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
LABEL_2:
  if ( v0 >= 0x1EEF )
    return 1;
  v1 = v0 & 0xF;
  if ( RtlTryAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801CD7E0 + 8 * v1)) )
  {
    v2 = 16LL * v0;
    for ( i = *(_QWORD **)(v2 + qword_1801CD280); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v2 + qword_1801CD280) )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801CD7E0 + 8 * v1));
        ++v0;
        goto LABEL_2;
      }
      if ( i[3] )
      {
        v9 = (unsigned __int64)i[2];
        RtlpEnumProcessHeaps(RtlpHeapTrkIsHeapValidCallback, &v9, 0LL);
        if ( BYTE8(v9) )
        {
          v4 = (void *)i[2];
          v5 = i[4];
          Src = (PVOID)(8LL * i[3]);
          v6 = RtlSizeHeap(v4, 0, Src);
          if ( v6 != -1LL )
          {
            v7 = v5 ? *(_DWORD *)(v5 + 20) : 0;
            if ( !RtlpHeapTrkReportResult(0x20uLL, 3u, v7, v6, &Src, 8uLL) )
              break;
          }
        }
      }
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801CD7E0 + 8 * v1));
  }
  return 0;
}
