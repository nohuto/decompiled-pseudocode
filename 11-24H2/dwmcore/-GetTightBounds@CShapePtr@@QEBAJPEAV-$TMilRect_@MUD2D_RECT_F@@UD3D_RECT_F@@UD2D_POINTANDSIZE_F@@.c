/*
 * XREFs of ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C6240
 * Callers:
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800344E0 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18014BD2C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FCE2C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapePtr::GetTightBounds(CPolygonShape **a1, __int64 a2, CMILMatrix *a3)
{
  CPolygonShape *v3; // rbx
  __int64 (__fastcall *v6)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *); // rax
  _OWORD *v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  float top; // xmm1_4
  int TightBounds; // eax
  unsigned int v15; // ebx
  __int64 v16; // r14
  struct tagRECT v17; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  if ( !*a1 )
    return 2291662987LL;
  v6 = *(__int64 (__fastcall **)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *))(*(_QWORD *)v3 + 48LL);
  if ( (char *)v6 == (char *)CRectanglesShape::GetTightBounds )
  {
    v7 = (_OWORD *)*((_QWORD *)v3 + 2);
    if ( *((_OWORD **)v3 + 3) == v7 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    else
    {
      v8 = 1LL;
      *(_OWORD *)a2 = *v7;
      v9 = *((_QWORD *)v3 + 2);
      if ( (unsigned __int64)((*((_QWORD *)v3 + 3) - v9) >> 4) > 1 )
      {
        v16 = 16LL;
        do
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, (float *)(v16 + v9));
          v9 = *((_QWORD *)v3 + 2);
          v16 += 16LL;
          ++v8;
        }
        while ( v8 < (*((_QWORD *)v3 + 3) - v9) >> 4 );
      }
      if ( a3 )
      {
        if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(a3) )
          CMILMatrix::Transform2DBoundsHelper<0>(a3, a2, a2);
      }
    }
    return 0LL;
  }
  else
  {
    if ( (char *)v6 == (char *)CRegionShape::GetTightBounds )
    {
      v17 = 0LL;
      if ( FastRegion::CRegion::GetBoundingRect((CPolygonShape *)((char *)v3 + 16), &v17) )
      {
        v11 = _mm_cvtsi32_si128(v17.right);
        v12 = _mm_cvtsi32_si128(v17.bottom);
        top = (float)v17.top;
        *(float *)a2 = (float)v17.left;
        *(float *)(a2 + 4) = top;
        *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v11).m128_u32[0];
        *(_DWORD *)(a2 + 12) = _mm_cvtepi32_ps(v12).m128_u32[0];
        if ( a3 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a3) )
        {
          CMILMatrix::Transform2DBoundsHelper<0>(a3, a2, a2);
          return 0LL;
        }
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)a2 = 0LL;
      }
      return 0LL;
    }
    if ( v6 == CRoundedRectangleShape::GetTightBounds )
      TightBounds = CRoundedRectangleShape::GetTightBounds(v3, (struct D2D_RECT_F *)a2, a3);
    else
      TightBounds = ((__int64 (__fastcall *)(CPolygonShape *))v6)(v3);
    v15 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x140u, 0LL);
    return v15;
  }
}
