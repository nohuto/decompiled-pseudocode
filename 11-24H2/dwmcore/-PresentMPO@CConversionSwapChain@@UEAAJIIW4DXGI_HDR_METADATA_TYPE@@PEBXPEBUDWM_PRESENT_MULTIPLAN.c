/*
 * XREFs of ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800662F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180040560 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x180064EEC (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18006522C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180067324 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x180068270 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800984C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180146AC0 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C6F50 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C7300 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801E9BC4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802CB158 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::PresentMPO(
        CConversionSwapChain *this,
        int a2,
        int a3,
        int a4,
        const void *a5,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v23; // r9d
  unsigned __int64 v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  int *v35; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+A8h] [rbp-58h] BYREF
  FastRegion::CRegion *v37[10]; // [rsp+F0h] [rbp-10h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  if ( a7 )
  {
    v12 = a7;
    do
    {
      v13 = (unsigned __int64)*(unsigned int *)a6 << 7;
      *(_OWORD *)((char *)this + v13 + 520) = *(_OWORD *)a6;
      *(_OWORD *)((char *)this + v13 + 536) = *((_OWORD *)a6 + 1);
      *(_OWORD *)((char *)this + v13 + 552) = *((_OWORD *)a6 + 2);
      *(_OWORD *)((char *)this + v13 + 568) = *((_OWORD *)a6 + 3);
      *(_OWORD *)((char *)this + v13 + 584) = *((_OWORD *)a6 + 4);
      *(_OWORD *)((char *)this + v13 + 600) = *((_OWORD *)a6 + 5);
      *(_OWORD *)((char *)this + v13 + 616) = *((_OWORD *)a6 + 6);
      *(_OWORD *)((char *)this + v13 + 632) = *((_OWORD *)a6 + 7);
      if ( *((_BYTE *)this + v13 + 524)
        && !IsDesktopOverlayPlaneResource(*(const struct IOverlayPlaneResource **)((char *)this + v13 + 528)) )
      {
        *((_BYTE *)this + 880) = 1;
        a3 &= ~2u;
      }
      a6 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 128);
      --v12;
    }
    while ( v12 );
  }
  if ( (a3 & 2) != 0 )
  {
    v14 = CLegacySwapChain::Present((_DWORD)this, a2, a3, (unsigned int)&v27, 0);
    v16 = v14;
    if ( v14 >= 0 )
      goto LABEL_19;
    v25 = 432;
    goto LABEL_32;
  }
  v26 = 0;
  v14 = CConversionSwapChain::CalcPresentMode((CConversionSwapChain *)((char *)this - 24), &v26);
  v16 = v14;
  if ( v14 < 0 )
  {
    v25 = 335;
LABEL_32:
    v23 = v14;
    goto LABEL_30;
  }
  v17 = *((_DWORD *)this + 129);
  if ( !v17 )
  {
    v14 = CConversionSwapChain::ConvertSingleDesktopPlane((CConversionSwapChain *)((char *)this - 24));
    v16 = v14;
    if ( v14 < 0 )
    {
      v25 = 343;
    }
    else
    {
      CRegion::GetRectangles((int **)this + 97, (const void **)&v27);
      v14 = CLegacySwapChain::Present((_DWORD)this, a2, a3, (unsigned int)&v27, 0);
      v16 = v14;
      if ( v14 >= 0 )
        goto LABEL_18;
      v25 = 350;
    }
    goto LABEL_32;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v14 = CConversionSwapChain::ConvertSingleAppPlane(
            (CConversionSwapChain *)((char *)this - 24),
            (CConversionSwapChain *)((char *)this + 128 * (unsigned __int64)v26 + 520));
    v16 = v14;
    if ( v14 < 0 )
    {
      v25 = 354;
    }
    else
    {
      std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(&v27, 0LL, (char *)this + 864);
      v14 = CLegacySwapChain::Present((_DWORD)this, a2, a3, (unsigned int)&v27, 0);
      v16 = v14;
      if ( v14 >= 0 )
        goto LABEL_18;
      v25 = 360;
    }
    goto LABEL_32;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    LOBYTE(v15) = 1;
    v24 = (unsigned __int64)v26 << 7;
    v32 = *(_QWORD *)((char *)this + v24 + 540);
    v33 = *(_DWORD *)((char *)this + v24 + 548);
    v34 = *(_DWORD *)((char *)this + v24 + 552);
    v29 = *(_QWORD *)((char *)this + v24 + 556);
    v30 = *(_DWORD *)((char *)this + v24 + 564);
    v31 = *(_DWORD *)((char *)this + v24 + 568);
    v14 = CLegacySwapChain::PresentDFlip(
            (int)this,
            a2,
            a3,
            v15,
            0,
            *(struct IOverlayPlaneResource **)((char *)this + v24 + 528),
            (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)((char *)this + v24 + 612),
            a4,
            (__int64)a5,
            (__int64)&v32,
            (__int64)&v29);
    v16 = v14;
    if ( v14 >= 0 )
      goto LABEL_18;
    v25 = 391;
    goto LABEL_32;
  }
  if ( v19 != 1 )
  {
    v16 = -2003292412;
    v23 = -2003292412;
    v25 = 419;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v25, 0LL);
    goto LABEL_19;
  }
  v36 = 0;
  v35 = &v36;
  CRegion::Copy((CRegion *)&v35, (CConversionSwapChain *)((char *)this + 776));
  if ( *((_BYTE *)this + 880) )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v37, (const struct tagRECT *)this + 54);
    CRegion::Union((const struct FastRegion::Internal::CRgnData **)&v35, v37);
    FastRegion::CRegion::FreeMemory(v37);
  }
  CRegion::GetRectangles(&v35, (const void **)&v27);
  v20 = CConversionSwapChain::ConvertDesktopAndAppPlanes(
          (CConversionSwapChain *)((char *)this - 24),
          (CConversionSwapChain *)((char *)this + 520),
          (CConversionSwapChain *)((char *)this + 648));
  v16 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x199u, 0LL);
  }
  else
  {
    v21 = CLegacySwapChain::Present((_DWORD)this, a2, a3, (unsigned int)&v27, 0);
    v16 = v21;
    if ( v21 >= 0 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v35);
LABEL_18:
      **((_DWORD **)this + 97) = 0;
      *((_BYTE *)this + 880) = 0;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x19Eu, 0LL);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v35);
LABEL_19:
  if ( (_QWORD)v27 )
    std::_Deallocate<16,0>((_QWORD *)v27, (v28 - v27) & 0xFFFFFFFFFFFFFFF0uLL);
  return v16;
}
