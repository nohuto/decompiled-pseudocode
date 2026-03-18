/*
 * XREFs of ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FEDF0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004B410 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800FEF90 (-FlushOcclusionRects@COcclusionContext@@QEAAJXZ.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010061C (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180100680 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180101210 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028CCA8 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::CollectOcclusion(
        COcclusionContext *this,
        struct COcclusionInfo *a2,
        CRenderData **a3)
{
  int (*v5)(CWindowNode *__hidden, struct COcclusionContext *, struct COcclusionInfo *); // rax
  int v6; // eax
  int v7; // edi
  __int64 result; // rax
  CRenderData *v9; // rcx
  const struct D2D_SIZE_F *v10; // r8
  __int64 (__fastcall *v11)(CBrush *, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  __int64 v12; // r9
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  *((_QWORD *)this + 193) = a3;
  *((_BYTE *)this + 1565) = *((_BYTE *)a2 + 28);
  v5 = (int (*)(CWindowNode *__hidden, struct COcclusionContext *, struct COcclusionInfo *))*((_QWORD *)*a3 + 30);
  if ( v5 == CWindowNode::CollectOcclusion )
  {
    v6 = CWindowNode::CollectOcclusion((CWindowNode *)a3, this, a2);
LABEL_3:
    v7 = v6;
    goto LABEL_4;
  }
  if ( v5 != CVisual::CollectOcclusion )
  {
    v6 = ((__int64 (__fastcall *)(CRenderData **, COcclusionContext *, struct COcclusionInfo *))v5)(a3, this, a2);
    goto LABEL_3;
  }
  v9 = a3[32];
  v7 = 0;
  if ( v9 )
  {
    v10 = (const struct D2D_SIZE_F *)(a3 + 18);
    v11 = *(__int64 (__fastcall **)(CBrush *, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 192LL);
    if ( v11 == CPrimitiveGroup::AddOcclusionInformation )
    {
      v14 = 0LL;
      if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect(v9, &v14, v10, a3)
        && (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(&v14) )
      {
        COcclusionContext::AddOcclusionRect(this, &v14, 0LL, v12);
      }
    }
    else
    {
      if ( v11 == CRenderData::AddOcclusionInformation )
      {
        v13 = CRenderData::AddOcclusionInformation(v9, this, v10);
      }
      else if ( v11 == CBrush::AddOcclusionInformation )
      {
        v13 = CBrush::AddOcclusionInformation(v9, this, v10);
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(CRenderData *, COcclusionContext *, const struct D2D_SIZE_F *, CRenderData **))v11)(
                v9,
                this,
                v10,
                a3);
      }
      v7 = v13;
      if ( v13 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xF2Du, 0LL);
    }
  }
LABEL_4:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x321u, 0LL);
    goto LABEL_6;
  }
LABEL_5:
  COcclusionContext::FlushOcclusionRects(this);
LABEL_6:
  *((_BYTE *)this + 1565) = 1;
  result = (unsigned int)v7;
  *((_QWORD *)this + 193) = 0LL;
  return result;
}
