/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1800AF614
 * Callers:
 *     RtlIsNameInUnUpcasedExpression @ 0x1800ADA30 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlIsNameInExpression @ 0x1800AEF60 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NLS_UPCASE @ 0x1800AF6C0 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 Heap; // rax
  unsigned int v9; // r10d
  __int16 v10; // ax
  __int64 v11; // r9

  v5 = qword_1801CD038;
  v6 = *a2;
  *(_WORD *)(a1 + 2) = v6;
  v7 = 0;
  if ( (_WORD)v6 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    *(_QWORD *)(a1 + 8) = Heap;
    if ( !Heap )
      return 3221225495LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v9 = *a2 >> 1;
  while ( v7 < v9 )
  {
    v10 = NLS_UPCASE(v5, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v7), a3, v7);
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v11) = v10;
    ++v7;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
