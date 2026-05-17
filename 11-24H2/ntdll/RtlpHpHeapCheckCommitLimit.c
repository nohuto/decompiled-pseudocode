/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x18009D2E0
 * Callers:
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18009FC30 (RtlpExtendHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800A88DC (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // r9

  if ( dword_1801CC578 )
    return 1LL;
  v4 = *a4;
  if ( !*a4 )
  {
    v4 = qword_1801CDED8;
    a4 = &qword_1801CDED8;
    if ( !qword_1801CDED8 )
      return 1LL;
  }
  if ( a2 + a1 <= v4 )
    return 1LL;
  v6 = a4[1];
  if ( v6 )
    RtlpLogHeapFailure(21, a3, 0LL, v6, a1, a2);
  return 0LL;
}
