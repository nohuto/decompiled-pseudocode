/*
 * XREFs of ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180266808
 * Callers:
 *     ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z @ 0x180234810 (-PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z @ 0x1801AA780 (-Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2890 (-GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x180266160 (-FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEBAPEBVCCornerRects@@XZ @ 0x1802664A4 (-GetTopByReference@-$CWatermarkStack@VCCornerRects@@$07$01$07@@QEBAPEBVCCornerRects@@XZ.c)
 *     ?Intersect@CCornerRects@@QEAA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180266590 (-Intersect@CCornerRects@@QEAA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?Push@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z @ 0x180266760 (-Push@-$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COccluderClipStack::Push(
        const void **this,
        __int64 a2,
        CRoundedRectangleShape **a3,
        const struct CMILMatrix *a4)
{
  int BoundsForOcclusion; // ebx
  __int64 v9; // rdx
  __int64 TopByReference; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  struct D2D_RECT_F v18; // [rsp+20h] [rbp-99h] BYREF
  struct D2D_RECT_F v19; // [rsp+30h] [rbp-89h] BYREF
  __int128 v20; // [rsp+40h] [rbp-79h] BYREF
  __int128 v21; // [rsp+50h] [rbp-69h] BYREF
  __int128 v22; // [rsp+60h] [rbp-59h] BYREF
  char v23; // [rsp+70h] [rbp-49h]
  __int128 v24; // [rsp+80h] [rbp-39h] BYREF
  __int128 v25; // [rsp+90h] [rbp-29h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-9h] BYREF
  int v28; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v18 = 0LL;
  BoundsForOcclusion = CShapePtr::GetBoundsForOcclusion(a3, &v18);
  if ( BoundsForOcclusion < 0 )
  {
    v9 = 148LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\baseclipstack.cpp",
      (const char *)(unsigned int)BoundsForOcclusion);
    return (unsigned int)BoundsForOcclusion;
  }
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)a4, &v18, &v18.left);
  BoundsForOcclusion = CBaseClipStack::Push(this, (__m128 *)&v18);
  if ( BoundsForOcclusion < 0 )
  {
    v9 = 151LL;
    goto LABEL_3;
  }
  v23 = 1;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !IsEmpty(&v18) && !(*(unsigned int (__fastcall **)(CRoundedRectangleShape *))(*(_QWORD *)*a3 + 8LL))(*a3) )
    CCornerRects::FromData(&v19, (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)*a3 + 2) + 16LL), a4);
  TopByReference = CWatermarkStack<CCornerRects,8,2,8>::GetTopByReference((__int64)(this + 3));
  if ( TopByReference && !*(_BYTE *)(TopByReference + 64) )
  {
    v14 = *(_OWORD *)(TopByReference + 16);
    v24 = *(_OWORD *)TopByReference;
    v15 = *(_OWORD *)(TopByReference + 32);
    v25 = v14;
    v16 = *(_OWORD *)(TopByReference + 48);
    v17 = *(_DWORD *)(TopByReference + 64);
    v26 = v15;
    v27 = v16;
    v28 = v17;
    if ( CCornerRects::Intersect((__int64)&v24, a2) )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v19.left, (float *)&v24);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v20, (float *)&v25);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v21, (float *)&v26);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v22, (float *)&v27);
      v23 = 0;
    }
  }
  BoundsForOcclusion = CWatermarkStack<CCornerRects,8,2,8>::Push((__int64)(this + 3), &v19, v12, v13);
  if ( BoundsForOcclusion < 0 )
  {
    v9 = 175LL;
    goto LABEL_3;
  }
  return 0LL;
}
