/*
 * XREFs of MiTrimNoStealPagesFromWorkingSets @ 0x1404B10D8
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1404F62CC (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiTrimNoStealPagesFromWorkingSets(__int64 a1, char a2)
{
  int v3; // edx

  if ( !byte_140E37514 )
    return 0LL;
  v3 = 0;
  if ( (a2 & 2) != 0 && *(__int64 *)(a1 + 1752) > 1 )
    v3 = 256;
  if ( (a2 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 17372) )
      v3 |= 0x200u;
  }
  if ( !v3 )
    return 0LL;
  MiQueueWorkingSetRequest();
  return 1LL;
}
