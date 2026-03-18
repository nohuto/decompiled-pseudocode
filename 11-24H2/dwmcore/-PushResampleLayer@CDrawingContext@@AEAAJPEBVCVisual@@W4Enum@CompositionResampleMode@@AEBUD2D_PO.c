/*
 * XREFs of ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@@Z @ 0x1802659BC
 * Callers:
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x180214050 (--_GCResampleLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@PEAPEAV1@@Z @ 0x18027C4B4 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSI.c)
 */

__int64 __fastcall CDrawingContext::PushResampleLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // eax
  unsigned int v9; // edi
  CResampleLayer *v10; // rbx
  int v11; // eax
  struct CLayer *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v8 = CResampleLayer::Create(*((_QWORD *)this + 4), a3, a4, a5, a6, (__int64)&v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xFB6u, 0LL);
    v10 = v13;
  }
  else
  {
    v10 = v13;
    v11 = CDrawingContext::PushLayer(this, a2, v13, 1, 1);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xFBCu, 0LL);
    else
      v10 = 0LL;
  }
  if ( v10 )
    CResampleLayer::`scalar deleting destructor'(v10, 1);
  return v9;
}
