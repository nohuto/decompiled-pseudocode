/*
 * XREFs of RtlpHeapTrkDumpOutstandingAllocs @ 0x180092DD0
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x180092440 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180047570 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkReportResult @ 0x180092648 (RtlpHeapTrkReportResult.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 */

char RtlpHeapTrkDumpOutstandingAllocs()
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  __int64 v2; // r14
  _QWORD *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
LABEL_2:
  if ( v0 >= 0x1EEF )
    return 1;
  v1 = v0 & 0xF;
  if ( RtlTryAcquireSRWLockExclusive(*(volatile signed __int32 **)(qword_1801D0820 + 8 * v1)) )
  {
    v2 = 16LL * v0;
    for ( i = *(_QWORD **)(v2 + qword_1801D0280); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v2 + qword_1801D0280) )
      {
        RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801D0820 + 8 * v1));
        ++v0;
        goto LABEL_2;
      }
      if ( i[3] )
      {
        v9 = (unsigned __int64)i[2];
        RtlpEnumProcessHeaps(RtlpHeapTrkIsHeapValidCallback, &v9, 0LL);
        if ( BYTE8(v9) )
        {
          v4 = i[2];
          v5 = i[4];
          Src = 8LL * i[3];
          v6 = RtlSizeHeap(v4, 0LL, Src);
          if ( v6 != -1 )
          {
            v7 = v5 ? *(_DWORD *)(v5 + 20) : 0;
            if ( !RtlpHeapTrkReportResult(0x20uLL, 3u, v7, v6, &Src, 8uLL) )
              break;
          }
        }
      }
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801D0820 + 8 * v1));
  }
  return 0;
}
