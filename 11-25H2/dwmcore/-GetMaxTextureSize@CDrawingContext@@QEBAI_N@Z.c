/*
 * XREFs of ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x1801EBAD8
 * Callers:
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetMaxTextureSize(CDrawingContext *this, char a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(*((_QWORD *)this + 5) + 960LL);
  if ( !a2 && (unsigned int)result >= 0x4000 )
    return 0x4000LL;
  return result;
}
