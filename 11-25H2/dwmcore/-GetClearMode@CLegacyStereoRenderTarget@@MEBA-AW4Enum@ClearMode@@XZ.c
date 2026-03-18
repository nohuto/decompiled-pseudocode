/*
 * XREFs of ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180281120
 * Callers:
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18028FA90 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1801E8580 (-GetClearMode@CLegacyRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::GetClearMode(__int64 a1)
{
  __int64 result; // rax

  result = CLegacyRenderTarget::GetClearMode(a1);
  if ( (_DWORD)result == 1 )
    return 2LL;
  return result;
}
