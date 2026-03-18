/*
 * XREFs of ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180204570
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1802044FC (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

void __fastcall CWindowNode::DiscardGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned __int64 Count; // rax
  CWindowNode *v2; // r8

  Count = CPtrArray<CVisual>::GetCount((_QWORD *)this + 103);
  CWindowNode::DiscardOldestGdiSpriteBitmaps(v2, Count);
}
