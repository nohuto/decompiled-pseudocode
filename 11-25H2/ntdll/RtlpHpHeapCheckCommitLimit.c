/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x180026290
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // r9

  if ( dword_1801CE578 )
    return 1LL;
  v4 = *a4;
  if ( !*a4 )
  {
    v4 = qword_1801CFED8;
    a4 = &qword_1801CFED8;
    if ( !qword_1801CFED8 )
      return 1LL;
  }
  if ( a2 + a1 <= v4 )
    return 1LL;
  v6 = a4[1];
  if ( v6 )
    RtlpLogHeapFailure(21, a3, 0, v6, a1, a2);
  return 0LL;
}
