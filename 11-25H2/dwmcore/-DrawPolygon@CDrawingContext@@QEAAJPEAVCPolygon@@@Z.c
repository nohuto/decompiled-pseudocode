/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180117180
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18011F238 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800586C0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180081EA0 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1800A4460 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E23D0 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18010B800 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x180116158 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1801173A4 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r13
  char v6; // r12
  int v7; // eax
  char v8; // r14
  __m128 *v9; // rcx
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
  int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm1_4
  __int64 *v25; // rax
  int v26; // eax
  char v27; // [rsp+40h] [rbp-29h]
  bool v28; // [rsp+41h] [rbp-28h] BYREF
  char v29; // [rsp+42h] [rbp-27h]
  struct ID2D1Geometry *v30; // [rsp+48h] [rbp-21h] BYREF
  CRectanglesShape *v31; // [rsp+50h] [rbp-19h] BYREF
  char v32; // [rsp+58h] [rbp-11h]
  __int64 v33[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v29 = 0;
  v27 = 0;
  if ( !*((_QWORD *)a2 + 31) )
    goto LABEL_20;
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v33);
  if ( !LODWORD(v33[0]) )
  {
LABEL_3:
    *(float *)&v30 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v7 = CWatermarkStack<float,64,2,10>::Push((__int64)this + 3160, &v30);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x570u, 0LL);
    }
    else
    {
      v8 = 1;
      v27 = 1;
      if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
      {
        v10 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, v9, 1, 1);
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
      v31 = 0LL;
      v32 = 0;
      v16 = CDrawingContext::ShapeDataFromGeometry(
              (const struct D2D_SIZE_F *)(v12 + 144),
              v13,
              (struct CShapePtr *)&v31);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x581u, 0LL);
      }
      else
      {
        if ( !v31 )
        {
LABEL_33:
          CShapePtr::~CShapePtr(&v31);
LABEL_18:
          *((_QWORD *)this + 413) = a2;
          v14 = CPolygon::Draw(a2, this);
          v4 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x59Eu, 0LL);
          goto LABEL_20;
        }
        v30 = 0LL;
        v28 = 1;
        v34 = 0LL;
        *(_OWORD *)v33 = 0LL;
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
        v19 = CDrawingContext::D2DGeometryFromShape((CDrawingContext *)&v28, v18, TopByReference, &v30, &v28);
        v4 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x58Cu, 0LL);
        }
        else
        {
          if ( v28 )
          {
            v25 = 0LL;
          }
          else
          {
            v20 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
            v21 = *((_DWORD *)v20 + 1);
            LODWORD(v33[0]) = *(_DWORD *)v20;
            v22 = *((_DWORD *)v20 + 4);
            HIDWORD(v33[0]) = v21;
            v33[1] = __PAIR64__(*((_DWORD *)v20 + 5), v22);
            v23 = *((_DWORD *)v20 + 12);
            v24 = *((_DWORD *)v20 + 13);
            v25 = v33;
            v34 = __PAIR64__(v24, v23);
          }
          v26 = CDrawingContext::PushD2DLayer(this, v12, 0LL, (__int64)v30, (__int64)v25, 1.0, 0, 0);
          v4 = v26;
          if ( v26 >= 0 )
          {
            v6 = 1;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
            goto LABEL_33;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x596u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
      }
      CShapePtr::~CShapePtr(&v31);
    }
LABEL_20:
    v8 = v27;
    goto LABEL_7;
  }
  v15 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v33, 1);
  v4 = v15;
  if ( v15 >= 0 )
  {
    v29 = 1;
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
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 3160);
  if ( v29 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
