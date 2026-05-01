/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1800A5AC4
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A4854 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A5734 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A59D0 (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     AslFree @ 0x18009D6FC (AslFree.c)
 */

char __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  char result; // al
  void *v4; // rdx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      result = ZwClose(v2);
      a1[3] = 0LL;
    }
    v4 = (void *)a1[1];
    if ( v4 )
    {
      result = AslFree(NtCurrentPeb()->ProcessHeap, v4);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
  return result;
}
