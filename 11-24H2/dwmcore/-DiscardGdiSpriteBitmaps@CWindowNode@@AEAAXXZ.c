/*
 * XREFs of ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180048A30
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800489BC (--1CWindowNode@@MEAA@XZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800495FC (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

void __fastcall CWindowNode::DiscardGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned __int64 Count; // rax
  CWindowNode *v2; // r8

  Count = CPtrArray<CVisual>::GetCount((char *)this + 832);
  CWindowNode::DiscardOldestGdiSpriteBitmaps(v2, Count);
}
