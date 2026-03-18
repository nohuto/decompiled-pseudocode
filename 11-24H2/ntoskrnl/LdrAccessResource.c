/*
 * XREFs of LdrAccessResource @ 0x14077E350
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C1A4CC (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x140A0307C (LdrpAccessResourceData.c)
 */

__int64 LdrAccessResource()
{
  return LdrpAccessResourceData();
}
