/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x180068FD4
 * Callers:
 *     RtlIsNameInUnUpcasedExpression @ 0x180067110 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlIsNameInExpression @ 0x1800688A0 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // ebx
  PVOID Heap; // rax
  unsigned int v8; // r10d
  __int16 v9; // ax
  __int64 v10; // r9

  v4 = qword_1801CF038;
  v5 = *a2;
  *(_WORD *)(a1 + 2) = v5;
  v6 = 0;
  if ( (_WORD)v5 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    *(_QWORD *)(a1 + 8) = Heap;
    if ( !Heap )
      return 3221225495LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v8 = *a2 >> 1;
  while ( v6 < v8 )
  {
    v9 = NLS_UPCASE(v4, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v6));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v10) = v9;
    ++v6;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
