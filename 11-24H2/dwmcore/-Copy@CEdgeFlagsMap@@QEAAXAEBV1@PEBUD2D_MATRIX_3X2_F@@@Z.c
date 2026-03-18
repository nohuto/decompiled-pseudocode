/*
 * XREFs of ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180152BE8
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800712E0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Reset@?$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAAXXZ @ 0x18015163C (-_Reset@-$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrate.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180151674 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ??$_Emplace_valueless@$0A@$$V@?$variant@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@AEAAAEAUmonostate@1@XZ @ 0x180250554 (--$_Emplace_valueless@$0A@$$V@-$variant@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VC.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180288F0C (-Copy@-$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CEdgeFlagsMap::Copy(
        CEdgeFlagsMap *this,
        const struct CEdgeFlagsMap *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v6; // rcx
  const struct CEdgeFlagsMap *v7; // r8
  FLOAT m11; // xmm0_4
  FLOAT m12; // xmm1_4
  FLOAT m22; // xmm0_4
  FLOAT dx; // xmm1_4
  FLOAT dy; // xmm0_4
  __int128 v13; // xmm0
  unsigned int v14; // r8d
  __int64 v15; // rax
  _DWORD v16[10]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+58h] [rbp-18h] BYREF

  std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Reset((__int64)this);
  std::variant<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Emplace_valueless<0,>(this);
  if ( a2 && *((_BYTE *)a2 + 24) == 1 )
    v7 = a2;
  else
    v7 = 0LL;
  if ( v7 )
  {
    if ( a3 )
    {
      m11 = a3->m11;
      m12 = a3->m12;
      v16[2] = 0;
      v16[5] = 0;
      *(FLOAT *)v16 = m11;
      m22 = a3->m22;
      *(FLOAT *)&v16[1] = m12;
      v16[3] = LODWORD(a3->m21);
      dx = a3->dx;
      *(FLOAT *)&v16[4] = m22;
      dy = a3->dy;
      *(FLOAT *)&v16[6] = dx;
      *(FLOAT *)&v16[7] = dy;
      v16[8] = 1065353216;
    }
    v13 = *(_OWORD *)v7;
    v14 = *((_DWORD *)v7 + 4);
    v17 = v13;
    CEdgeFlagsMap::AddEdgeFlags(
      v6,
      (FLOAT *)&v17,
      v14,
      (FLOAT *)((unsigned __int64)v16 & -(__int64)(a3 != 0LL)),
      SLODWORD(FLOAT_0_000081380211));
  }
  else if ( a2 && *((_BYTE *)a2 + 24) == 2 )
  {
    std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Reset(v6);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    *(_QWORD *)v15 = v15;
    *(_QWORD *)(v15 + 8) = v15;
    *(_QWORD *)(v15 + 16) = v15;
    *(_WORD *)(v15 + 24) = 257;
    *(_QWORD *)this = v15;
    *((_BYTE *)this + 24) = 2;
    CConvexPolygonEdgeMap<unsigned int>::Copy(this, a2, a3);
  }
}
