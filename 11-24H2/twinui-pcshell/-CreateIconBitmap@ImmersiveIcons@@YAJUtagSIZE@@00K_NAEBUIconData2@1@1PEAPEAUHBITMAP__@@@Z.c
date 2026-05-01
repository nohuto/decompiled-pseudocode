/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x180068954
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x18067ED18 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180068D64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_N.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1802089E8 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x18022C87C (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA184 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x1802C49E0 (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     _lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator() @ 0x18067CEF8 (_lambda_0a485157c2c67738ecfb2b6d756fa5a5_--operator().c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18067D280 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?CalculateColorLuminosity@@YANK@Z @ 0x18067D678 (-CalculateColorLuminosity@@YANK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18067E888 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@Q.c)
 *     ?GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z @ 0x1806C84A8 (-GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImmersiveIcons::CreateIconBitmap(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        char a5,
        const WCHAR *a6,
        const struct ImmersiveIcons::IconData2 *a7,
        struct tagSIZE *a8)
{
  LONG cx; // r13d
  LONG v10; // edi
  struct tagSIZE *v11; // r15
  const WCHAR *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // esi
  IBindCtx *v18; // rcx
  HRESULT v19; // eax
  const struct _GUID *v20; // rcx
  int ThreadThumbnailCache; // eax
  LONG v22; // eax
  bool v23; // zf
  LONG cy; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // edi
  HBITMAP v28; // rdx
  bool v29; // r8
  bool v30; // r9
  double v31; // xmm6_8
  double v32; // xmm0_8
  int v33; // eax
  HBITMAP v34; // rbx
  HBITMAP v35; // rbx
  DWORD SysColor; // eax
  int v37; // eax
  HBITMAP v39; // [rsp+30h] [rbp-40h] BYREF
  IBindCtx *pbc; // [rsp+38h] [rbp-38h] BYREF
  void *v41; // [rsp+40h] [rbp-30h] BYREF
  void *ppv; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  ImmersiveIcons *v45; // [rsp+B0h] [rbp+40h] BYREF
  struct tagSIZE v46; // [rsp+B8h] [rbp+48h] BYREF
  struct tagSIZE v47; // [rsp+C0h] [rbp+50h] BYREF

  v47 = a3;
  v46 = a2;
  v45 = this;
  cx = a4.cx;
  v10 = a2.cx;
  v11 = a8;
  *a8 = 0LL;
  ppv = 0LL;
  pbc = 0LL;
  LOBYTE(a2.cx) = 1;
  ((void (__fastcall *)(_QWORD, _QWORD))wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsage)(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetImpl'::`2'::impl,
    a2);
  v12 = a6;
  if ( !*PathFindExtensionW(a6 + 8) )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
    v16 = _CreatePropertyBagBindCtx<unsigned short const *>(v14, v13, v15, &pbc);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F9,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v16);
      v18 = pbc;
      if ( pbc )
      {
        pbc = 0LL;
LABEL_8:
        ((void (__fastcall *)(IBindCtx *))v18->lpVtbl->Release)(v18);
        goto LABEL_39;
      }
      goto LABEL_39;
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v19 = SHCreateItemFromParsingName(v12 + 8, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  v17 = v19;
  if ( v19 >= 0 )
  {
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v41);
    ThreadThumbnailCache = GetThreadThumbnailCache(v20, &v41);
    v17 = ThreadThumbnailCache;
    if ( ThreadThumbnailCache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FF,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_38:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v41);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
      goto LABEL_39;
    }
    v22 = a3.cx;
    v23 = *(_DWORD *)v12 == 1;
    if ( *(_DWORD *)v12 != 1 )
      v22 = v10;
    LODWORD(a8) = v22;
    cy = v46.cy;
    if ( v23 )
      cy = v47.cy;
    HIDWORD(a8) = cy;
    v43[0] = &v41;
    v43[1] = &ppv;
    v39 = 0LL;
    LODWORD(a7) = 0;
    v25 = lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator()(v43, a8, &a7, &v39);
    v17 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20F,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v25);
      CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
      goto LABEL_38;
    }
    v27 = *(_DWORD *)v12;
    LOBYTE(v26) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetImpl'::`2'::impl,
      v26);
    if ( *(_DWORD *)v12 == 3 )
    {
      LODWORD(a8) = 0;
      if ( !GetNthMostDominantColorFromHBITMAP(v39, (unsigned int)v28, v29, v30, (unsigned int *)&a8)
        || (v31 = CalculateColorLuminosity(cx),
            v32 = CalculateColorLuminosity((unsigned int)a8),
            (fmax(v31, v32) + 0.05) / (fmin(v31, v32) + 0.05) < 2.5) )
      {
        CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
        v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator())(
                v43,
                a3,
                &a7,
                &v39);
        v17 = v33;
        if ( v33 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x21A,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v33);
          CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
          goto LABEL_38;
        }
LABEL_29:
        if ( (_DWORD)a7 != 2
          || (v35 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)v39, v28, v29),
              CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39),
              (v39 = v35) != 0LL) )
        {
          if ( *((_BYTE *)v12 + 8) )
            SysColor = GetSysColor(5);
          else
            SysColor = *((_DWORD *)v12 + 3);
          LODWORD(a8) = SysColor;
          v37 = GDIHelpers::AddBackgroundForIcon(
                  v39,
                  (HBITMAP)&a8,
                  (const unsigned int *)&v45,
                  &v46,
                  &v47,
                  v11,
                  (HBITMAP *)v39);
          v17 = v37;
          if ( v37 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x23F,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v37);
          CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
        }
        else
        {
          v17 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x231,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)0x8007000ELL);
          CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
        }
        goto LABEL_38;
      }
    }
    else if ( v27 != 2 )
    {
      goto LABEL_29;
    }
    if ( a5 && (_DWORD)a7 == 2 )
    {
      v34 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)v39, v28, v29);
      CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
      v39 = v34;
      if ( !v34 )
      {
        v17 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x225,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)0x8007000ELL);
        CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
        goto LABEL_38;
      }
    }
    else
    {
      v34 = v39;
    }
    v39 = 0LL;
    *v11 = (struct tagSIZE)v34;
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&v39);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v41);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
    v17 = 0;
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FC,
    (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v19);
  v18 = pbc;
  if ( pbc )
  {
    pbc = 0LL;
    goto LABEL_8;
  }
LABEL_39:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return v17;
}
