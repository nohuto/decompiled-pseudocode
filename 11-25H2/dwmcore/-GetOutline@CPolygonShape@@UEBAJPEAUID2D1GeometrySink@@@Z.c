/*
 * XREFs of ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18005DC30
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18005DE70 (-BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18005DFB0 (-AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ??0CPolygonBuilder@@QEAA@XZ @ 0x18005E110 (--0CPolygonBuilder@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x18005E220 (-Alloc@-$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18005F9E0 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18006B7A0 (-EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E206C (--$_Resize@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@.c)
 *     ?Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z @ 0x180202644 (-Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygonShape::GetOutline(CPolygonShape *this, struct ID2D1GeometrySink *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  unsigned int *v6; // rdx
  struct D2D_POINT_2F v7; // rdx
  void (__fastcall *v8)(CPolygonBuilder *__hidden, struct D2D_POINT_2F, enum D2D1_FIGURE_BEGIN); // rax
  __int64 v9; // rax
  const struct D2D_POINT_2F *v10; // rcx
  __int64 v11; // r8
  const struct D2D_POINT_2F *v12; // rdx
  void (__fastcall *v13)(CPolygonBuilder *__hidden, enum D2D1_FIGURE_END); // rax
  CPolygonBuilder *v15; // rax
  CPolygonBuilder *v16; // rax
  CPolygonBuilder *v17; // rbx
  const struct D2D_MATRIX_3X2_F *v18; // rdx
  int v19; // eax
  __int64 (__fastcall *v20)(CPathData *); // rax
  __int64 (__fastcall *v21)(CPathData *); // rax

  v2 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) == *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) )
  {
    v15 = (CPolygonBuilder *)CThreadLocalObjectCache<CPolygonBuilder,CPolygonBuilder>::Alloc();
    if ( !v15 || (v16 = CPolygonBuilder::CPolygonBuilder(v15), (v17 = v16) == 0LL) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Eu, 0LL);
      return v2;
    }
    (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v16 + 8LL))(v16);
    v19 = ID2D1Geometry::Outline(*(ID2D1Geometry **)(*((_QWORD *)this + 2) + 16LL), v18, v17);
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x30u, 0LL);
      v21 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v17 + 16LL);
      if ( v21 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v17);
      else
        v21(v17);
      return v2;
    }
    std::vector<CMilPoint2F>::_Resize<std::_Value_init_tag>(
      *((_QWORD *)this + 2) + 24LL,
      (unsigned int)((__int64)(*((_QWORD *)v17 + 3) - *((_QWORD *)v17 + 2)) >> 3));
    memcpy_0(
      *(void **)(*((_QWORD *)this + 2) + 24LL),
      *((const void **)v17 + 2),
      8LL * (unsigned int)((__int64)(*((_QWORD *)v17 + 3) - *((_QWORD *)v17 + 2)) >> 3));
    v20 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v17 + 16LL);
    if ( v20 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v17);
    else
      v20(v17);
  }
  v5 = *((_QWORD *)this + 2);
  v6 = *(unsigned int **)(v5 + 24);
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(v5 + 32) - (_QWORD)v6) >> 3) >= 3 )
  {
    v7 = (struct D2D_POINT_2F)_mm_unpacklo_ps((__m128)*v6, (__m128)v6[1]).m128_u64[0];
    v8 = *(void (__fastcall **)(CPolygonBuilder *__hidden, struct D2D_POINT_2F, enum D2D1_FIGURE_BEGIN))(*(_QWORD *)a2 + 40LL);
    if ( v8 == CPolygonBuilder::BeginFigure )
      CPolygonBuilder::BeginFigure(a2, v7, D2D1_FIGURE_BEGIN_FILLED);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(a2, v7, D2D1_FIGURE_BEGIN_FILLED);
    v9 = *((_QWORD *)this + 2);
    v10 = *(const struct D2D_POINT_2F **)(v9 + 24);
    v11 = (unsigned int)((__int64)(*(_QWORD *)(v9 + 32) - (_QWORD)v10) >> 3) - 1;
    v12 = v10 + 1;
    if ( *(void (__fastcall **)(CPolygonBuilder *__hidden, const struct D2D_POINT_2F *, unsigned int))(*(_QWORD *)a2 + 48LL) == CPolygonBuilder::AddLines )
      CPolygonBuilder::AddLines(a2, v12, v11);
    else
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, const struct D2D_POINT_2F *, __int64))(*(_QWORD *)a2 + 48LL))(
        a2,
        v12,
        v11);
    v13 = *(void (__fastcall **)(CPolygonBuilder *__hidden, enum D2D1_FIGURE_END))(*(_QWORD *)a2 + 64LL);
    if ( v13 == CPolygonBuilder::EndFigure )
      CPolygonBuilder::EndFigure(a2, D2D1_FIGURE_END_CLOSED);
    else
      v13(a2, D2D1_FIGURE_END_CLOSED);
  }
  return v2;
}
