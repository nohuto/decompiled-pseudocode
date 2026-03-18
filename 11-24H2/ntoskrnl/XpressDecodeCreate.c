/*
 * XREFs of XpressDecodeCreate @ 0x1406A1D40
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407C22EC (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1407C15FC (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
