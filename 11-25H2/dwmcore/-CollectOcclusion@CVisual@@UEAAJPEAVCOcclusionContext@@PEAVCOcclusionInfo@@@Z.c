/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180056B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056C2C (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180056C90 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801D7FC0 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020AA60 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180298118 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(CVisual *this, struct COcclusionContext *a2, struct COcclusionInfo *a3)
{
  CRenderData *v5; // rcx
  const struct D2D_SIZE_F *v6; // r8
  __int64 (__fastcall *v7)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v5 = (CRenderData *)*((_QWORD *)this + 32);
  if ( !v5 )
    return 0LL;
  v6 = (const struct D2D_SIZE_F *)((char *)this + 144);
  v7 = *(__int64 (__fastcall **)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v5 + 192LL);
  if ( v7 == CPrimitiveGroup::AddOcclusionInformation )
  {
    v11 = 0LL;
    if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect(v5, &v11, v6) )
    {
      if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(&v11) )
        COcclusionContext::AddOcclusionRect(a2, &v11, 0LL);
    }
    return 0LL;
  }
  if ( v7 == CRenderData::AddOcclusionInformation )
  {
    v9 = CRenderData::AddOcclusionInformation(v5, a2, v6);
  }
  else if ( (char *)v7 == (char *)CBrush::AddOcclusionInformation )
  {
    v9 = CBrush::AddOcclusionInformation(v5, a2, v6);
  }
  else
  {
    v9 = v7(v5, a2, v6);
  }
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xF13u, 0LL);
  return v10;
}
