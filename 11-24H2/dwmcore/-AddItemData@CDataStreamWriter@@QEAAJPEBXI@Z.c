/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18013059C
 * Callers:
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x18012EB70 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUD2D_RECT_F@@1I@Z @ 0x18012EFC0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUD2D_RECT_F@@1I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18012F380 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x18012F730 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z @ 0x180204C60 (-MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18020E820 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18020EB40 (-VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180211340 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpola.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1802270C0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18022E4F0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z @ 0x180261BF0 (-CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180262E40 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // edi
  int v10; // esi
  unsigned int v11; // eax

  v3 = 0;
  if ( a3 )
  {
    if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 14))
      && (v5 = *((_QWORD *)this + 4), v6 = *(unsigned int *)(v5 + 20), *(_DWORD *)(v5 + 16) - (int)v6 >= a3) )
    {
      if ( (unsigned int)v6 + a3 < (unsigned int)v6 )
      {
        *(_DWORD *)(v5 + 20) = -1;
        v8 = 583;
      }
      else
      {
        *(_DWORD *)(v5 + 20) = v6 + a3;
        v7 = *((_DWORD *)this + 11);
        if ( v7 + a3 >= v7 )
        {
          *((_DWORD *)this + 14) += a3;
          *((_DWORD *)this + 11) = v7 + a3;
          memcpy_0((void *)(v5 + 24 + v6), a2, a3);
          return v3;
        }
        *((_DWORD *)this + 11) = -1;
        v8 = 584;
      }
      v3 = -2147024362;
      v9 = -2147024362;
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v8, 0LL);
      v11 = 216;
    }
    else
    {
      v3 = -2147418113;
      v11 = 209;
      v9 = -2147418113;
      v10 = -2147418113;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v11, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB2u, 0LL);
  }
  return v3;
}
