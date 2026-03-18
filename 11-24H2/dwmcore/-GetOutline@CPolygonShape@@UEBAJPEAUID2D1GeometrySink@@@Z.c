/*
 * XREFs of ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18017F5D0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180017D30 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180041960 (-EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18017F810 (-BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18017F950 (-AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ??0CPolygonBuilder@@QEAA@XZ @ 0x18017FAB0 (--0CPolygonBuilder@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x18017FAEC (-Alloc@-$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z.c)
 *     ?Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z @ 0x180180A5C (-Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180180C38 (--$_Resize@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygonShape::GetOutline(CPolygonShape *this, struct ID2D1GeometrySink *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v8; // rax
  unsigned int *v9; // rdx
  struct D2D_POINT_2F v10; // rdx
  void (__fastcall *v11)(CPolygonBuilder *__hidden, struct D2D_POINT_2F, enum D2D1_FIGURE_BEGIN); // rax
  __int64 v12; // rax
  const struct D2D_POINT_2F *v13; // rcx
  __int64 v14; // r8
  const struct D2D_POINT_2F *v15; // rdx
  void (__fastcall *v16)(CPolygonBuilder *, enum D2D1_FIGURE_END); // rax
  CPolygonBuilder *v18; // rax
  CPolygonBuilder *v19; // rax
  CPolygonBuilder *v20; // rbx
  const struct D2D_MATRIX_3X2_F *v21; // rdx
  int v22; // eax
  __int64 (__fastcall *v23)(CPathData *); // rax
  __int64 (__fastcall *v24)(CPathData *); // rax

  v4 = *((_QWORD *)this + 2);
  v5 = 0;
  if ( *(_QWORD *)(v4 + 24) == *(_QWORD *)(v4 + 32) )
  {
    v18 = (CPolygonBuilder *)CThreadLocalObjectCache<CPolygonBuilder,CPolygonBuilder>::Alloc(this, a2, v4, a4);
    if ( !v18 || (v19 = CPolygonBuilder::CPolygonBuilder(v18), (v20 = v19) == 0LL) )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Eu, 0LL);
      return v5;
    }
    (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v19 + 8LL))(v19);
    v22 = ID2D1Geometry::Outline(*(ID2D1Geometry **)(*((_QWORD *)this + 2) + 16LL), v21, v20);
    v5 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x30u, 0LL);
      v24 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v20 + 16LL);
      if ( v24 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v20);
      else
        v24(v20);
      return v5;
    }
    std::vector<CMilPoint2F>::_Resize<std::_Value_init_tag>(
      *((_QWORD *)this + 2) + 24LL,
      (unsigned int)((__int64)(*((_QWORD *)v20 + 3) - *((_QWORD *)v20 + 2)) >> 3));
    memcpy_0(
      *(void **)(*((_QWORD *)this + 2) + 24LL),
      *((const void **)v20 + 2),
      8LL * (unsigned int)((__int64)(*((_QWORD *)v20 + 3) - *((_QWORD *)v20 + 2)) >> 3));
    v23 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v20 + 16LL);
    if ( v23 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v20);
    else
      v23(v20);
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(unsigned int **)(v8 + 24);
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(v8 + 32) - (_QWORD)v9) >> 3) >= 3 )
  {
    v10 = (struct D2D_POINT_2F)_mm_unpacklo_ps((__m128)*v9, (__m128)v9[1]).m128_u64[0];
    v11 = *(void (__fastcall **)(CPolygonBuilder *__hidden, struct D2D_POINT_2F, enum D2D1_FIGURE_BEGIN))(*(_QWORD *)a2 + 40LL);
    if ( v11 == CPolygonBuilder::BeginFigure )
      CPolygonBuilder::BeginFigure(a2, v10, D2D1_FIGURE_BEGIN_FILLED);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v11)(a2, v10, D2D1_FIGURE_BEGIN_FILLED);
    v12 = *((_QWORD *)this + 2);
    v13 = *(const struct D2D_POINT_2F **)(v12 + 24);
    v14 = (unsigned int)((__int64)(*(_QWORD *)(v12 + 32) - (_QWORD)v13) >> 3) - 1;
    v15 = v13 + 1;
    if ( *(void (__fastcall **)(CPolygonBuilder *__hidden, const struct D2D_POINT_2F *, unsigned int))(*(_QWORD *)a2 + 48LL) == CPolygonBuilder::AddLines )
      CPolygonBuilder::AddLines(a2, v15, v14);
    else
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, const struct D2D_POINT_2F *, __int64))(*(_QWORD *)a2 + 48LL))(
        a2,
        v15,
        v14);
    v16 = *(void (__fastcall **)(CPolygonBuilder *, enum D2D1_FIGURE_END))(*(_QWORD *)a2 + 64LL);
    if ( v16 == CPolygonBuilder::EndFigure )
      CPolygonBuilder::EndFigure(a2, D2D1_FIGURE_END_CLOSED);
    else
      v16(a2, D2D1_FIGURE_END_CLOSED);
  }
  return v5;
}
