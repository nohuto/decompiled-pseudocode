/*
 * XREFs of RtlpHeapTrkDumpStacks @ 0x18010DCB4
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18003EA50 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x18001B950 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkReportResult @ 0x18003EC58 (RtlpHeapTrkReportResult.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
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
  *(_DWORD *)(TrkContext + 64) = dword_1801CE20C;
  if ( dword_1801CE7F8 )
  {
    v7 = 0LL;
    v8 = (unsigned int)dword_1801CE7F8;
    do
    {
      *(_QWORD *)(TrkContext + 72) += *(_QWORD *)(*(_QWORD *)(v7 + qword_1801CE848) + 16LL);
      v9 = *(_QWORD *)(v7 + qword_1801CE848);
      v7 += 8LL;
      *(_QWORD *)(TrkContext + 80) += *(_QWORD *)(v9 + 24);
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
    v5 = *(__int64 **)(v4 + qword_1801CE288);
    if ( RtlTryAcquireSRWLockExclusive(*(volatile signed __int32 **)(qword_1801CE800 + 8 * v3)) )
    {
      while ( 1 )
      {
        if ( v5 == (__int64 *)(v4 + qword_1801CE288) )
        {
          RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801CE800 + 8 * v3));
          ++v2;
          goto LABEL_5;
        }
        v6 = *((unsigned __int16 *)v5 + 8);
        *((_DWORD *)v5 + 5) = ++v0;
        if ( !RtlpHeapTrkReportResult((unsigned int)(8 * v6 + 24), 0, v0, v6, v5 + 3, 8 * v6) )
          break;
        v5 = (__int64 *)*v5;
      }
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801CE800 + 8 * v3));
    }
    return 0;
  }
  return 1;
}
