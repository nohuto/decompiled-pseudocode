/*
 * XREFs of ??_GCValueColorTransformLayer@@UEAAPEAXI@Z @ 0x180264030
 * Callers:
 *     ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x180265AA8 (-PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800F8D84 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CValueColorTransformLayer *__fastcall CValueColorTransformLayer::`scalar deleting destructor'(
        CValueColorTransformLayer *this,
        char a2)
{
  *(_QWORD *)this = &CValueColorTransformLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
