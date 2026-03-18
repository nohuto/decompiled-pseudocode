/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180100510
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004B410 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010061C (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180100680 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180101210 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028CCA8 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3,
        __int64 a4)
{
  CRenderData *v6; // rcx
  const struct D2D_SIZE_F *v7; // r8
  __int64 (__fastcall *v8)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  __int64 v9; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  v6 = (CRenderData *)*((_QWORD *)this + 32);
  if ( !v6 )
    return 0LL;
  v7 = (const struct D2D_SIZE_F *)((char *)this + 144);
  v8 = *(__int64 (__fastcall **)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v6 + 192LL);
  if ( v8 == CPrimitiveGroup::AddOcclusionInformation )
  {
    v13 = 0LL;
    if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect(v6, &v13, v7, a4) )
    {
      if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(&v13) )
        COcclusionContext::AddOcclusionRect(a2, &v13, 0LL, v9);
    }
    return 0LL;
  }
  if ( v8 == CRenderData::AddOcclusionInformation )
  {
    v11 = CRenderData::AddOcclusionInformation(v6, a2, v7);
  }
  else if ( v8 == CBrush::AddOcclusionInformation )
  {
    v11 = CBrush::AddOcclusionInformation(v6, a2, v7);
  }
  else
  {
    v11 = v8(v6, a2, v7);
  }
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xF2Du, 0LL);
  return v12;
}
