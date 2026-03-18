/*
 * XREFs of LdrAccessResource @ 0x14076F100
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C0942C (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1409AEEAC (LdrpAccessResourceData.c)
 */

__int64 LdrAccessResource()
{
  return LdrpAccessResourceData();
}
