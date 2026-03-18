/*
 * XREFs of MiTrimNoStealPagesFromWorkingSets @ 0x1404B00D8
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1404F3A78 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiTrimNoStealPagesFromWorkingSets(__int64 a1, char a2)
{
  int v3; // edx

  if ( !byte_140E372D4 )
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
