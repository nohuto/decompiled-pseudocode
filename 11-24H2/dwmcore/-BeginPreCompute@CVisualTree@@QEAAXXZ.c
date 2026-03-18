/*
 * XREFs of ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18003BD60
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$max@M@@YAMMM@Z @ 0x18003DB00 (--$max@M@@YAMMM@Z.c)
 *     ??9?$basic_iterator@PEAVIVisualTreeClient@@@detail@@QEBA_NAEBV01@@Z @ 0x18003DB10 (--9-$basic_iterator@PEAVIVisualTreeClient@@@detail@@QEBA_NAEBV01@@Z.c)
 *     ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x18003DB30 (-GetInflationScale@CLegacyRenderTarget@@UEBAMXZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18003DE60 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x18003E330 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ @ 0x180240DD0 (-ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualTree::BeginPreCompute(CVisualTree *this)
{
  void (__fastcall *v2)(CVisualTree *__hidden); // rax
  char v3; // bp
  __int64 v4; // rcx
  CLegacyRenderTarget *v5; // rdi
  __int64 (__fastcall *v6)(); // rax
  __int128 *v7; // rax
  int *v8; // rax
  float (__fastcall *v9)(CLegacyRenderTarget *__hidden); // rax
  float v10; // xmm0_4
  char v11; // cl
  __int64 v12; // rax
  struct ILiftedOverlayHost *(__fastcall *v13)(CDesktopTree *); // rax
  __int64 v14; // rcx
  CLegacyRenderTarget **v15; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-B8h] BYREF
  int *v18; // [rsp+50h] [rbp-A8h] BYREF
  int v19; // [rsp+58h] [rbp-A0h] BYREF
  char v20[16]; // [rsp+A0h] [rbp-58h] BYREF

  if ( *((_BYTE *)this + 2628) )
  {
    v2 = *(void (__fastcall **)(CVisualTree *__hidden))(*(_QWORD *)this + 224LL);
    if ( v2 == CVisualTree::UpdateClientBounds )
    {
      *((_QWORD *)this + 314) = 0LL;
      v3 = 0;
      *((_QWORD *)this + 313) = 0LL;
      **((_DWORD **)this + 315) = 0;
      *((_WORD *)this + 1315) = 0;
      *((_DWORD *)this + 648) = 1065353216;
      v4 = *((_QWORD *)this + 307);
      if ( !((__int64)(*((_QWORD *)this + 307) - *((_QWORD *)this + 306)) >> 3) )
        goto LABEL_13;
      v15 = (CLegacyRenderTarget **)*((_QWORD *)this + 306);
      v16 = v4;
      if ( (unsigned __int8)detail::basic_iterator<IVisualTreeClient *>::operator!=(&v15, &v16) )
      {
        do
        {
          v5 = *v15;
          *((_BYTE *)this + 2631) |= (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)*v15 + 56LL))(*v15);
          v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 32LL);
          if ( v6 == COffScreenRenderTarget::GetTreeBounds )
            v7 = (__int128 *)((char *)v5 + 196);
          else
            v7 = (__int128 *)((__int64 (__fastcall *)(CLegacyRenderTarget *))v6)(v5);
          v17 = *v7;
          if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v17) )
          {
            v3 = 1;
          }
          else
          {
            v19 = 0;
            v18 = &v19;
            v8 = (int *)PixelAlign(v20, &v17);
            FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v18, *v8, v8[1], v8[2], v8[3]);
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((char *)this + 2504, &v17);
            CRegion::Union((CVisualTree *)((char *)this + 2520), (const struct CRegion *)&v18);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v18);
          }
          *((_BYTE *)this + 2630) |= (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)v5 + 40LL))(v5);
          v9 = *(float (__fastcall **)(CLegacyRenderTarget *__hidden))(*(_QWORD *)v5 + 48LL);
          if ( v9 == CLegacyRenderTarget::GetInflationScale )
            CLegacyRenderTarget::GetInflationScale(v5);
          else
            v9(v5);
          v10 = max<float>();
          ++v15;
          *((float *)this + 648) = v10;
        }
        while ( (unsigned __int8)detail::basic_iterator<IVisualTreeClient *>::operator!=(&v15, &v16) );
        if ( v3 )
LABEL_13:
          *(_OWORD *)((char *)this + 2504) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
    }
    else if ( v2 == CVisualTree::UpdateClientInfo )
    {
      CVisualTree::UpdateClientBounds(this);
    }
    else
    {
      v2(this);
    }
    *((_BYTE *)this + 2628) = 0;
  }
  v11 = *((_BYTE *)this + 2631);
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 2437) = 0;
  *(_WORD *)((char *)this + 2439) = 0;
  *((_BYTE *)this + 2436) = v11 == 0;
  *(_OWORD *)((char *)this + 2420) = *(_OWORD *)(*((_QWORD *)this + 14) + 2504LL);
  if ( v11 )
  {
    if ( *((_BYTE *)this + 2438) )
      *((_BYTE *)this + 2438) = 0;
    *((_DWORD *)this + 32) = 0;
    *((_BYTE *)this + 564) = 0;
    if ( !*((_BYTE *)this + 2438) )
      CTreeDirty::ClearDirtyRectAnnotationLists((CVisualTree *)((char *)this + 112));
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 184LL))(this) )
  {
    v12 = (__int64)(*((_QWORD *)this + 654) - *((_QWORD *)this + 653)) >> 3;
    if ( v12 )
      *((_QWORD *)this + 654) -= 8 * v12;
  }
  v13 = *(struct ILiftedOverlayHost *(__fastcall **)(CDesktopTree *))(*(_QWORD *)this + 216LL);
  if ( v13 == CDesktopTree::GetLiftedOverlayHost )
    v14 = *((_QWORD *)this + 569);
  else
    v14 = (__int64)v13(this);
  if ( v14 )
    (*(void (__fastcall **)(__int64, CVisualTree *))(*(_QWORD *)v14 + 24LL))(v14, this);
}
