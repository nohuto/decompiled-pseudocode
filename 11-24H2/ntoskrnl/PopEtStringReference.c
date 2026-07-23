/*
 * XREFs of PopEtStringReference @ 0x14099C99C
 * Callers:
 *     PopEtAggregateKeyCopy @ 0x14099BED8 (PopEtAggregateKeyCopy.c)
 *     PopEtStringSet @ 0x14099BF40 (PopEtStringSet.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x14099C6E8 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall PopEtStringReference(__int64 a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw((const void *)(a1 + 16));
  result = *(_QWORD *)(a1 + 16);
  while ( (unsigned __int64)(result + 1) > 1 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), result + 1, result);
    if ( v2 == result )
      return result;
  }
  if ( result )
    __fastfail(0xEu);
  return result;
}
