/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F4D78
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180072BF0 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800BC090 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800C3EE0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1800F4F9C (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5A70 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800F6F20 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1800FB0A0 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x18021254C (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r13
  char v6; // r12
  int v7; // eax
  char v8; // r14
  const struct CMILMatrix *v9; // rcx
  int v10; // eax
  __int64 v12; // r14
  struct CGeometry *v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  const struct CMILMatrix *TopByReference; // rax
  const struct CShape *v18; // r10
  int v19; // eax
  const struct CMILMatrix *v20; // rax
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm1_4
  __int128 *v24; // rax
  int v25; // eax
  char v26; // [rsp+40h] [rbp-29h]
  bool v27; // [rsp+41h] [rbp-28h] BYREF
  char v28; // [rsp+42h] [rbp-27h]
  struct ID2D1Geometry *v29; // [rsp+48h] [rbp-21h] BYREF
  CRectanglesShape *v30; // [rsp+50h] [rbp-19h] BYREF
  char v31; // [rsp+58h] [rbp-11h]
  __int128 v32; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v28 = 0;
  v26 = 0;
  if ( !*((_QWORD *)a2 + 31) )
    goto LABEL_20;
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)&v32);
  if ( !(_DWORD)v32 )
  {
LABEL_3:
    *(float *)&v29 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v7 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3160, &v29);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x570u, 0LL);
    }
    else
    {
      v8 = 1;
      v26 = 1;
      if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
      {
        v10 = CDrawingContext::PushTransformInternal(this, 0LL, v9, 1, 1);
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x576u, 0LL);
          goto LABEL_7;
        }
        v5 = 1;
      }
      v12 = *((_QWORD *)a2 + 27);
      v13 = *(struct CGeometry **)(v12 + 248);
      if ( !v13 )
        goto LABEL_18;
      v30 = 0LL;
      v31 = 0;
      v16 = CDrawingContext::ShapeDataFromGeometry(
              (const struct D2D_SIZE_F *)(v12 + 144),
              v13,
              (struct CShapePtr *)&v30);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x581u, 0LL);
      }
      else
      {
        if ( !v30 )
        {
LABEL_33:
          CShapePtr::~CShapePtr(&v30);
LABEL_18:
          *((_QWORD *)this + 413) = a2;
          v14 = CPolygon::Draw(a2, this);
          v4 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x59Eu, 0LL);
          goto LABEL_20;
        }
        v29 = 0LL;
        v27 = 1;
        v33 = 0LL;
        v32 = 0LL;
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
        v19 = CDrawingContext::D2DGeometryFromShape((CDrawingContext *)&v27, v18, TopByReference, &v29, &v27);
        v4 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x58Cu, 0LL);
        }
        else
        {
          if ( v27 )
          {
            v24 = 0LL;
          }
          else
          {
            v20 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
            v21 = *((_DWORD *)v20 + 1);
            LODWORD(v32) = *(_DWORD *)v20;
            *(_QWORD *)((char *)&v32 + 4) = __PAIR64__(*((_DWORD *)v20 + 4), v21);
            v22 = *((_DWORD *)v20 + 12);
            HIDWORD(v32) = *((_DWORD *)v20 + 5);
            v23 = *((_DWORD *)v20 + 13);
            v24 = &v32;
            v33 = __PAIR64__(v23, v22);
          }
          v25 = CDrawingContext::PushD2DLayer(this, v12, 0LL, (__int64)v29, (__int64)v24, 1.0, 0, 0);
          v4 = v25;
          if ( v25 >= 0 )
          {
            v6 = 1;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
            goto LABEL_33;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x596u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
      }
      CShapePtr::~CShapePtr(&v30);
    }
LABEL_20:
    v8 = v26;
    goto LABEL_7;
  }
  v15 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)&v32, 1);
  v4 = v15;
  if ( v15 >= 0 )
  {
    v28 = 1;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x56Bu, 0LL);
  v8 = 0;
LABEL_7:
  *((_QWORD *)this + 413) = 0LL;
  if ( v6 )
    CDrawingContext::PopLayer(this);
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v8 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((char *)this + 3160);
  if ( v28 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
