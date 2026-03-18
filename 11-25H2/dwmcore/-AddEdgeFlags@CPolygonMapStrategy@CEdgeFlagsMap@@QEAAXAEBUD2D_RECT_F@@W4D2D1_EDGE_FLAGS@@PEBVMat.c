/*
 * XREFs of ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180197090
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180196DBC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 * Callees:
 *     ?TryAddEdgeFromEndPoints@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z @ 0x180196C74 (-TryAddEdgeFromEndPoints@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z.c)
 *     ?DecomposeRectangleEdgeFlags@@YAXW4D2D1_EDGE_FLAGS@@PEAW41@111@Z @ 0x180197250 (-DecomposeRectangleEdgeFlags@@YAXW4D2D1_EDGE_FLAGS@@PEAW41@111@Z.c)
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z @ 0x18019734C (-TryAddEdge@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z.c)
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180197800 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEdgeFlagsMap::CPolygonMapStrategy::AddEdgeFlags(
        int a1,
        int *a2,
        unsigned int a3,
        float *a4,
        int a5)
{
  int v8; // xmm2_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  unsigned int v11; // ebx
  __int64 result; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r9
  __int64 v15; // r11
  struct D2D_POINT_2F *v16; // rsi
  float v17; // xmm0_4
  float v18; // xmm1_4
  unsigned int v19; // edi
  float v20; // xmm1_4
  const struct D2D_POINT_2F *v21; // rdx
  FLOAT *v22; // r8
  struct D2D_POINT_2F v23; // [rsp+30h] [rbp-50h] BYREF
  int v24; // [rsp+38h] [rbp-48h] BYREF
  int v25; // [rsp+3Ch] [rbp-44h]
  int v26; // [rsp+40h] [rbp-40h]
  int v27; // [rsp+44h] [rbp-3Ch]
  int v28; // [rsp+48h] [rbp-38h]
  int v29; // [rsp+4Ch] [rbp-34h]
  int v30; // [rsp+50h] [rbp-30h]
  int v31; // [rsp+54h] [rbp-2Ch]
  int v32; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v33[4]; // [rsp+5Ch] [rbp-24h] BYREF
  _BYTE v34[4]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v35[4]; // [rsp+64h] [rbp-1Ch] BYREF

  DecomposeRectangleEdgeFlags(a3, v35, &v32, v33, v34);
  v8 = *a2;
  v9 = a2[2];
  v25 = a2[1];
  v27 = v25;
  v10 = a2[3];
  v11 = 0;
  v24 = v8;
  v26 = v9;
  v28 = v9;
  v29 = v10;
  v30 = v8;
  v31 = v10;
  if ( a4 )
  {
    do
    {
      v13 = (_QWORD *)Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a4, (struct D2D_POINT_2F)&v23);
      *v14 = *v13;
    }
    while ( v15 != 1 );
    v16 = (struct D2D_POINT_2F *)&v24;
    v17 = a4[3] * a4[1];
    result = 3LL;
    v18 = a4[4] * *a4;
    v19 = 0;
    v20 = v18 - v17;
    do
    {
      v23.x = *(FLOAT *)&v33[4 * result - 4];
      v21 = (const struct D2D_POINT_2F *)(&v24 + 2 * result);
      if ( v20 >= 0.0 )
      {
        v22 = (FLOAT *)v16;
      }
      else
      {
        v22 = (FLOAT *)(&v24 + 2 * result);
        v21 = v16;
      }
      CConvexPolygonEdgeMap<unsigned int>::TryAddEdgeFromEndPoints(a1, v21, v22, (int)&v23, a5);
      result = v19;
      ++v16;
      ++v19;
    }
    while ( v19 < 4 );
  }
  else
  {
    do
    {
      v23.x = *(FLOAT *)&v33[4 * v11 - 4];
      if ( v11 >= 4uLL )
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      result = CConvexPolygonEdgeMap<unsigned int>::TryAddEdge(
                 a1,
                 (unsigned int)&unk_1803384F0 + 32 * v11,
                 (unsigned int)(&v24 + 2 * v11),
                 (unsigned int)&v23,
                 a5);
      ++v11;
    }
    while ( v11 < 4 );
  }
  return result;
}
