/*
 * XREFs of XpressDecodeClose @ 0x1406A2D64
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407C3520 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140A99810 (CMFFreeFn.c)
 */

__int64 __fastcall XpressDecodeClose(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 104) == 903790814 )
    {
      *(_DWORD *)(a1 + 104) = 0;
      return CMFFreeFn(0LL, a1);
    }
  }
  return result;
}
