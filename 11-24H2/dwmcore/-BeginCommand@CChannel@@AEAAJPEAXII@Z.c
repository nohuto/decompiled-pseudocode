/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18012F898
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
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1801303E4 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1801304D8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1801308E0 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CChannel::BeginCommand(struct CCommandBatch **this, void *a2, unsigned int a3, int a4)
{
  size_t v4; // r14
  unsigned int v6; // ebx
  CDataStreamWriter **v7; // r15
  CDataStreamWriter *v8; // rdi
  unsigned int v9; // eax
  bool v10; // cf
  int v11; // ebx
  unsigned int v12; // ebp
  _DWORD *v13; // rcx
  int v14; // esi
  unsigned int v15; // edi
  CDataStreamWriter *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  unsigned int v22; // eax
  __int64 v24; // rdx
  int v25; // eax
  CDataStreamWriter *i; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  CDataStreamWriter **v29; // rax
  CDataStreamWriter **v30; // rdx
  CDataStreamWriter *v31; // rdx
  CDataStreamWriter **v32; // rax
  unsigned int v33; // eax
  int v34; // eax
  int NewBlock; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  v7 = this + 22;
  if ( !this[22] )
  {
    v25 = CCommandBatch::Create((unsigned int)this, this + 22);
    v15 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x109,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v25);
      v24 = 241LL;
      goto LABEL_22;
    }
  }
  v8 = *v7;
  v9 = v6 + 4;
  v10 = v6 + 4 < v6;
  v11 = -2147024362;
  if ( v10 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x17Au, 0LL);
    goto LABEL_21;
  }
  v12 = (v9 + 3) & 0xFFFFFFFC;
  if ( v12 < v9 )
  {
    v33 = 402;
LABEL_40:
    v14 = -2147024362;
    v15 = -2147024362;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v33, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x17Cu, 0LL);
    goto LABEL_21;
  }
  v13 = (_DWORD *)*((_QWORD *)v8 + 4);
  v14 = v12 < v9 ? 0x80070216 : 0;
  if ( !v13 )
  {
LABEL_29:
    for ( i = (CDataStreamWriter *)*((_QWORD *)v8 + 2);
          i != (CDataStreamWriter *)((char *)v8 + 16);
          i = *(CDataStreamWriter **)i )
    {
      v27 = *((_DWORD *)i + 4);
      if ( v27 >= v12 )
      {
        v28 = *((_DWORD *)v8 + 10);
        if ( v28 + v27 < v28 )
        {
          *((_DWORD *)v8 + 10) = -1;
          v33 = 437;
          goto LABEL_40;
        }
        *((_DWORD *)v8 + 10) = v28 + v27;
        v29 = (CDataStreamWriter **)*((_QWORD *)v8 + 4);
        if ( v29 )
        {
          v30 = (CDataStreamWriter **)*((_QWORD *)v8 + 1);
          if ( *v30 == v8 )
          {
            *v29 = v8;
            v29[1] = (CDataStreamWriter *)v30;
            *v30 = (CDataStreamWriter *)v29;
            *((_QWORD *)v8 + 1) = v29;
            goto LABEL_36;
          }
LABEL_42:
          __fastfail(3u);
        }
LABEL_36:
        v31 = *(CDataStreamWriter **)i;
        if ( *(CDataStreamWriter **)(*(_QWORD *)i + 8LL) != i )
          goto LABEL_42;
        v32 = (CDataStreamWriter **)*((_QWORD *)i + 1);
        if ( *v32 != i )
          goto LABEL_42;
        *v32 = v31;
        *((_QWORD *)v31 + 1) = v32;
        *((_DWORD *)i + 5) = 0;
        *((_QWORD *)v8 + 4) = i;
        goto LABEL_8;
      }
    }
    v34 = 0x4000;
    if ( *((_DWORD *)v8 + 10) < 0x4000u )
      v34 = *((_DWORD *)v8 + 10);
    if ( v34 + v12 < v12 )
    {
      v33 = 501;
      goto LABEL_40;
    }
    NewBlock = CDataStreamWriter::AllocateNewBlock(v8, v34 + v12);
    v14 = NewBlock;
    v15 = NewBlock;
    if ( NewBlock >= 0 )
      goto LABEL_7;
    v11 = NewBlock;
    v33 = 503;
    goto LABEL_41;
  }
  if ( v13[4] - v13[5] < v12 )
  {
    if ( !v13[5] )
    {
      operator delete(v13);
      *((_QWORD *)v8 + 4) = 0LL;
    }
    goto LABEL_29;
  }
LABEL_7:
  v15 = v14;
  if ( v14 >= 0 )
  {
LABEL_8:
    CDataStreamWriter::BeginItem(*v7);
    v16 = *v7;
    if ( (_DWORD)v4 )
    {
      if ( (*((_QWORD *)v16 + 6) || *((_DWORD *)v16 + 14))
        && (v17 = *((_QWORD *)v16 + 4),
            v18 = *(unsigned int *)(v17 + 20),
            *(_DWORD *)(v17 + 16) - (int)v18 >= (unsigned int)v4) )
      {
        if ( (int)v18 + (int)v4 < (unsigned int)v18 )
        {
          *(_DWORD *)(v17 + 20) = -1;
          v20 = 583;
        }
        else
        {
          *(_DWORD *)(v17 + 20) = v18 + v4;
          v19 = *((_DWORD *)v16 + 11);
          if ( v19 + (unsigned int)v4 >= v19 )
          {
            *((_DWORD *)v16 + 11) = v19 + v4;
            *((_DWORD *)v16 + 14) += v4;
            memcpy_0((void *)(v17 + v18 + 24), a2, v4);
            return 0LL;
          }
          *((_DWORD *)v16 + 11) = -1;
          v20 = 584;
        }
        v21 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v20, 0LL);
        v22 = 216;
      }
      else
      {
        v11 = -2147418113;
        v22 = 209;
        v21 = -2147418113;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v22, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xB2u, 0LL);
    }
    return 0LL;
  }
LABEL_21:
  v24 = 247LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v15);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v15);
  return v15;
}
