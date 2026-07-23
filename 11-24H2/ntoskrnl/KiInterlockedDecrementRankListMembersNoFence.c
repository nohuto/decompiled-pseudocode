/*
 * XREFs of KiInterlockedDecrementRankListMembersNoFence @ 0x1404118E0
 * Callers:
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSetProcessorIdle @ 0x1404E10A8 (KiSetProcessorIdle.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInterlockedDecrementRankListMembersNoFence(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 v2; // r9
  unsigned __int64 i; // r8
  __int64 v4; // r10
  unsigned __int8 j; // al

  v2 = 0;
  for ( i = a2; i; i >>= 8 )
  {
    if ( (_BYTE)i )
    {
      v4 = 0LL;
      for ( j = 0; j < 8u; ++j )
      {
        if ( _bittest64((const __int64 *)&i, j) )
          v4 += 1LL << (8 * j);
      }
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 8LL * v2), -v4);
    }
    ++v2;
  }
}
