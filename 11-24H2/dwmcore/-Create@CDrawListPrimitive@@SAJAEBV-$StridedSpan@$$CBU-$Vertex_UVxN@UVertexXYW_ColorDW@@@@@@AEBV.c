/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x18016F1D0
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180176590 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18019517C (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18016EC80 (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x18016EF10 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        char a6,
        char **a7)
{
  unsigned int v7; // r10d
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v14; // r11d
  char *v15; // rbx
  unsigned int v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+44h] [rbp-24h]
  int v19; // [rsp+48h] [rbp-20h]
  unsigned int v20; // [rsp+4Ch] [rbp-1Ch]

  v7 = *(_DWORD *)(a1 + 12);
  v9 = *(_DWORD *)a4;
  v10 = v7;
  v17 = v7;
  v18 = v7;
  v19 = a3;
  v20 = v9;
  v14 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    v10 = v7 - v14 + 2;
    v17 = v10;
    if ( v7 )
      v18 = v7 - v14 + 2;
  }
  if ( v10 > 0x10000 || v9 > 0x1FFFE )
  {
    v17 = 0;
    v20 = 0;
  }
  v15 = PrimitiveStorage::Alloc_16_(&v17);
  if ( v15 )
  {
    CDrawListPrimitive::Initialize((__int64)v15, a1, a2, a3, *(void **)(a4 + 8), v9, a5, a6);
    *a7 = v15;
    return 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x41u, 0LL);
    return 2147942414LL;
  }
}
