/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1407FB918
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407FAB2C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407FB620 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1407FB844 (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 */

NTSTATUS __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      result = ZwClose(v2);
      a1[3] = 0LL;
    }
    if ( a1[1] )
    {
      result = AslFree(v2);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
  return result;
}
