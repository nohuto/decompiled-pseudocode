/*
 * XREFs of ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x180214050
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@@Z @ 0x1802659BC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 * Callees:
 *     ??1CResampleLayer@@UEAA@XZ @ 0x18021408C (--1CResampleLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CResampleLayer *__fastcall CResampleLayer::`scalar deleting destructor'(CResampleLayer *this, char a2)
{
  CResampleLayer::~CResampleLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
