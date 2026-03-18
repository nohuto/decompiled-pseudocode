/*
 * XREFs of ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180183BC8
 * Callers:
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x180182450 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUD2D_RECT_F@@1I@Z @ 0x1801828A0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUD2D_RECT_F@@1I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x180182C60 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180183010 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x1801834F0 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z @ 0x1802112E0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18021A6C0 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18021A9E0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18021CB10 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpola.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x180232BA0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18023A490 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18026DC40 (-CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18026EE90 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWithinItem@CDataStreamWriter@@IEAA_NXZ @ 0x180183CA8 (-IsWithinItem@CDataStreamWriter@@IEAA_NXZ.c)
 */

__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __int64 v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !CDataStreamWriter::IsWithinItem(this) )
  {
    v4 = -2147418113;
    v11 = 240LL;
    goto LABEL_7;
  }
  v3 = *(_DWORD *)(v2 + 56);
  v4 = -2147024362;
  v5 = (v3 + 3) & 0xFFFFFFFC;
  if ( v5 < v3 )
  {
    v11 = 259LL;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(v1 + 32);
  *(_DWORD *)(v1 + 56) = v5;
  v7 = v5 - v3;
  v8 = *(_DWORD *)(v6 + 20);
  if ( v8 + v7 < v8 )
  {
    *(_DWORD *)(v6 + 20) = -1;
    v10 = 583;
    goto LABEL_6;
  }
  *(_DWORD *)(v6 + 20) = v8 + v7;
  v9 = *(_DWORD *)(v1 + 44);
  if ( v9 + v7 < v9 )
  {
    *(_DWORD *)(v1 + 44) = -1;
    v10 = 584;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v10, 0LL);
    v11 = 264LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v4);
    return v4;
  }
  *(_DWORD *)(v1 + 44) = v9 + v7;
  **(_DWORD **)(v1 + 48) = *(_DWORD *)(v1 + 56);
  result = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_DWORD *)(v1 + 56) = 0;
  return result;
}
