/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x14080B488
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080A69C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B190 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x14080B3B4 (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     AslFree @ 0x14095CD24 (AslFree.c)
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
