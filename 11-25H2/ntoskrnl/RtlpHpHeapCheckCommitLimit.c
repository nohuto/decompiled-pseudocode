/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x1402FA244
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402F9CA8 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402FA210 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x1405DE67C (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1405E0230 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405E0484 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1405E0CE0 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = qword_140E27FD8) != 0) && a1 + a2 > v4 )
  {
    v7 = &qword_140E27FD8;
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
