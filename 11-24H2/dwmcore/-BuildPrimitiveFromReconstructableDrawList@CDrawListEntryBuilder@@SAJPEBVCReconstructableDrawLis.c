/*
 * XREFs of ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18019517C
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800D7CE0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800F74F8 (--0CCpuClip@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x18016F1D0 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180177F20 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::BuildPrimitiveFromReconstructableDrawList(
        const struct CReconstructableDrawListEntry *a1,
        struct CDrawListPrimitive **a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h]
  _BYTE *v16; // [rsp+50h] [rbp-B0h]
  unsigned int v17; // [rsp+58h] [rbp-A8h]
  char v18; // [rsp+5Ch] [rbp-A4h]
  char v19; // [rsp+5Dh] [rbp-A3h]
  __int16 v20; // [rsp+5Eh] [rbp-A2h]
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+74h] [rbp-8Ch]
  int v25[2]; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+84h] [rbp-7Ch]
  __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  _BYTE v32[16]; // [rsp+C0h] [rbp-40h] BYREF
  CRectanglesShape *v33; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v34[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v35; // [rsp+150h] [rbp+50h]
  char *v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+160h] [rbp+60h] BYREF
  __int64 v38; // [rsp+164h] [rbp+64h]
  char v39; // [rsp+17Dh] [rbp+7Dh]
  __int64 v40; // [rsp+210h] [rbp+110h]
  __int64 v41; // [rsp+9B0h] [rbp+8B0h]
  int v42; // [rsp+1150h] [rbp+1050h]
  __int64 v43; // [rsp+1158h] [rbp+1058h]
  __int64 v44; // [rsp+1160h] [rbp+1060h]

  v2 = *((_QWORD *)a1 + 2);
  CCpuClip::CCpuClip((CCpuClip *)v32);
  LODWORD(v14) = *(_DWORD *)(v2 + 16);
  v15 = 1065353216LL;
  v16 = v32;
  v5 = *((_DWORD *)a1 + 16) & 0xFFFFFEFD;
  v18 = 0;
  v17 = v5;
  v19 = *(_BYTE *)(v2 + 81);
  v20 = 0;
  HIDWORD(v14) = 1065353216;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)&v37);
  CDrawListEntryBuilder::Begin(
    (CDrawListEntryBuilder *)&v37,
    (const struct DrawListEntryBuilderSetupParams *)&v14,
    *((unsigned int (__fastcall ****)(CMILRefCountImpl *__hidden))a1 + 3));
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_BYTE *)a1 + 101) == 0;
  v8 = *((_QWORD *)a1 + 11);
  v31 = 0LL;
  v28 = 1015021568LL;
  v30 = 0LL;
  LODWORD(v30) = v6;
  v9 = *(_OWORD *)(v2 + 56);
  BYTE13(v31) = *((_BYTE *)a1 + 100);
  v29 = v9;
  BYTE12(v31) = 1;
  DWORD2(v31) = !v7;
  v34[1] = 0LL;
  v34[0] = *((_OWORD *)a1 + 3);
  gsl::details::extent_type<-1>::extent_type<-1>(&v14, v8);
  if ( v14 == -1 || a1 == (const struct CReconstructableDrawListEntry *)-104LL && v14 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v35 = v14;
  v36 = (char *)a1 + 104;
  CDrawListEntryBuilder::AppendHWGeometry(
    (CDrawListEntryBuilder *)&v37,
    (const struct Mesh::MeshDesc *)&v28,
    (const struct PrimitiveVertexAttributesDesc *)v34);
  v10 = v43;
  v21 = v38;
  gsl::details::extent_type<-1>::extent_type<-1>(&v14, (v44 - v43) >> 1);
  if ( v14 == -1 || !v10 && v14 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_QWORD *)v22 = v41;
  *(_QWORD *)v25 = v40;
  v23 = 8 * v37 + 16;
  v24 = v42;
  v26 = v23;
  v27 = v42;
  v15 = v10;
  v11 = CDrawListPrimitive::Create((__int64)v25, (__int64)v22, v37, (__int64)&v14, &v21, v39, (char **)a2);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x63Du, 0LL);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)&v37);
  CShapePtr::~CShapePtr(&v33);
  return v12;
}
