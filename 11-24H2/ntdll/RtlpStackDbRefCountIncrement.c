/*
 * XREFs of RtlpStackDbRefCountIncrement @ 0x18015BEEC
 * Callers:
 *     RtlStackDbStackAdd @ 0x18011BFB8 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015BF7C (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpStackDbRefCountIncrement(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // edx

  v1 = *a1;
  while ( 1 )
  {
    v2 = v1 ^ (v1 ^ (v1 + 1)) & 0xFFFFFF;
    if ( ((v1 + 1) & 0xFFFFFFu) < (v1 & 0xFFFFFFu) )
      break;
    v1 = _InterlockedCompareExchange(a1, v2, v1);
    if ( v1 == ((v2 - 1) ^ (v2 ^ (v2 - 1)) & 0xFF000000) )
      return 1LL;
  }
  return 0LL;
}
