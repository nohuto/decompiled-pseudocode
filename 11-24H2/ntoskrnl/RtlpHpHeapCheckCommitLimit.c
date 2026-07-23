/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x1404467BC
 * Callers:
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1405E9AF4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA5CC (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = qword_140E28358) != 0) && a1 + a2 > v4 )
  {
    v7 = &qword_140E28358;
    if ( *a4 )
      v7 = (__int64 *)a4;
    v8 = v7[1];
    if ( v8 )
      RtlpLogHeapFailure(21, a3, 0LL, v8, a1, a2);
  }
  else
  {
    return 1;
  }
  return v5;
}
