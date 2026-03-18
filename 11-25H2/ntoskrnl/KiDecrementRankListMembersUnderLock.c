/*
 * XREFs of KiDecrementRankListMembersUnderLock @ 0x14041DC10
 * Callers:
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSetProcessorIdle_WithLock @ 0x1405C3754 (KiSetProcessorIdle_WithLock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiDecrementRankListMembersUnderLock(_BYTE *a1, __int64 a2)
{
  unsigned __int8 result; // al

  for ( result = 0; result < 0x40u; ++result )
  {
    if ( _bittest64(&a2, result) )
      --*a1;
    ++a1;
  }
  return result;
}
