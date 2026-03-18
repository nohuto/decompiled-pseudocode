/*
 * XREFs of ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180295728
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?AppendDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180295570 (-AppendDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UD2D_P.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017BF4 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?clear@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801514BC (-clear@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_e.c)
 *     ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18017352C (-AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180173F00 (-reserve_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA_ea_180173F00.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionDynamicTexture::SetDirtyRects(__int64 a1, _QWORD *a2)
{
  __int128 *v4; // rdi
  __int128 *v5; // rbx
  __int64 v6; // rcx
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rbx
  __int128 *v10; // rdi
  __int64 v11; // rcx
  __int64 i; // rax
  __int128 v14; // [rsp+20h] [rbp-39h]
  struct D2D_RECT_F v15; // [rsp+30h] [rbp-29h] BYREF
  void **v16; // [rsp+40h] [rbp-19h] BYREF
  CPathData *v17; // [rsp+48h] [rbp-11h] BYREF
  __int128 *v18; // [rsp+50h] [rbp-9h] BYREF
  __int128 *v19; // [rsp+58h] [rbp-1h]
  __int64 *v20; // [rsp+60h] [rbp+7h]
  _BYTE v21[16]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+78h] [rbp+1Fh] BYREF

  v17 = 0LL;
  v22 = 0LL;
  v16 = &CRectanglesShape::`vftable';
  v18 = (__int128 *)v21;
  v19 = (__int128 *)v21;
  v20 = &v22;
  Microsoft::WRL::ComPtr<CPathData>::operator=((CPathData **)(a1 + 96), &v17);
  if ( &v18 != (__int128 **)(a1 + 104) )
  {
    v4 = v19;
    v5 = v18;
    detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear((_QWORD *)(a1 + 104));
    v7 = (_OWORD *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                     v6,
                     0LL,
                     v4 - v5);
    while ( v5 != v4 )
    {
      v8 = *v5++;
      *v7++ = v8;
    }
  }
  *(_QWORD *)(a1 + 144) = v22;
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v16);
  v9 = (__int128 *)a2[1];
  v10 = &v9[*a2];
  while ( v9 != v10 )
  {
    v11 = *((_QWORD *)v9 + 1);
    v14 = *v9;
    if ( (int)v14 <= (int)v11 && SDWORD1(v14) <= SHIDWORD(v11) )
    {
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v15.left + i) = (float)*(int *)((char *)&v14 + i);
      CRectanglesShape::AddRect((CRectanglesShape *)(a1 + 88), (const __m128i *)&v15);
    }
    ++v9;
  }
  CResource::NotifyOnChanged((_DWORD *)a1, *a2 != 0LL ? 0x10 : 0, a1);
  return 0LL;
}
