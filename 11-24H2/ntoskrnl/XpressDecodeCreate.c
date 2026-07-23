/*
 * XREFs of XpressDecodeCreate @ 0x1406A2D90
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407C3520 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1407C2830 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
