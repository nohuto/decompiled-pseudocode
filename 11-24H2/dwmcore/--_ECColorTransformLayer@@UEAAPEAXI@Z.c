/*
 * XREFs of ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x180206E20
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x180214CA8 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800F8D84 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CColorTransformLayer *__fastcall CColorTransformLayer::`vector deleting destructor'(
        CColorTransformLayer *this,
        char a2)
{
  *(_QWORD *)this = &CColorTransformLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
