/*
 * XREFs of RtlpHeapTrkDumpStacks @ 0x180110764
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x180092440 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180047570 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkReportResult @ 0x180092648 (RtlpHeapTrkReportResult.c)
 */

char RtlpHeapTrkDumpStacks()
{
  int v0; // ebp
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  v0 = 0;
  if ( !TrkContext )
    return 0;
  *((_DWORD *)TrkContext + 16) = dword_1801D020C;
  if ( dword_1801D0830 )
  {
    v7 = 0LL;
    v8 = (unsigned int)dword_1801D0830;
    do
    {
      *((_QWORD *)TrkContext + 9) += *(_QWORD *)(*(_QWORD *)(v7 + qword_1801D0880) + 16LL);
      v9 = *(_QWORD *)(v7 + qword_1801D0880);
      v7 += 8LL;
      *((_QWORD *)TrkContext + 10) += *(_QWORD *)(v9 + 24);
      --v8;
    }
    while ( v8 );
  }
  v2 = 0;
LABEL_5:
  if ( v2 < 0x1EEF )
  {
    v3 = v2 & 0xF;
    v4 = 16LL * v2;
    v5 = *(__int64 **)(v4 + qword_1801D0288);
    if ( RtlTryAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801D0838 + 8 * v3)) )
    {
      while ( 1 )
      {
        if ( v5 == (__int64 *)(v4 + qword_1801D0288) )
        {
          RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801D0838 + 8 * v3));
          ++v2;
          goto LABEL_5;
        }
        v6 = *((unsigned __int16 *)v5 + 8);
        *((_DWORD *)v5 + 5) = ++v0;
        if ( !RtlpHeapTrkReportResult((unsigned int)(8 * v6 + 24), 0, v0, v6, v5 + 3, 8 * v6) )
          break;
        v5 = (__int64 *)*v5;
      }
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801D0838 + 8 * v3));
    }
    return 0;
  }
  return 1;
}
