/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023DBEC
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180074CD4 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x1800CF250 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18010255C (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180285A08 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(
        COcclusionContext *a1,
        CCompositionSurfaceBitmap *a2,
        FLOAT *a3,
        __int64 a4,
        char a5)
{
  char IsSwapChain; // si
  unsigned int i; // ebx
  struct D2D_RECT_F *v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  unsigned int j; // ebx
  struct D2D_RECT_F *v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _DWORD v26[4]; // [rsp+20h] [rbp-51h] BYREF
  _QWORD v27[3]; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v28[64]; // [rsp+48h] [rbp-29h] BYREF
  char v29; // [rsp+88h] [rbp+17h] BYREF

  if ( !*((_DWORD *)a1 + 428) )
  {
    v26[0] = 0;
    if ( COcclusionContext::DoesImageOcclude(a1, (struct IUnknown *)a2, a5 & 1) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a4 + 64LL))(a4, v26) && v26[0] )
      {
        v27[0] = v28;
        v27[1] = v28;
        v27[2] = &v29;
        detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::resize(
          v27,
          v26[0]);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 80LL))(a4, v27[0], v26[0]);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
        {
          IsSwapChain = 0;
          if ( (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *, __int64))(*(_QWORD *)a2 + 64LL))(
                 a2,
                 41LL) )
          {
            IsSwapChain = CCompositionSurfaceBitmap::IsSwapChain(a2);
          }
          for ( i = 0; i < v26[0]; ++i )
          {
            v11 = (struct D2D_RECT_F *)(16LL * i + v27[0]);
            if ( *a3 > v11->left )
              v11->left = *a3;
            v12 = a3[1];
            if ( v12 > v11->top )
              v11->top = v12;
            v13 = a3[2];
            if ( v11->right > v13 )
              v11->right = v13;
            v14 = a3[3];
            if ( v11->bottom > v14 )
              v11->bottom = v14;
            if ( IsEmpty(v11) )
            {
              v16[1] = 0LL;
              *v16 = 0LL;
            }
            LOBYTE(v17) = IsSwapChain;
            COcclusionContext::CollectRectangleForOcclusion(a1, v27[0] + v15, v17, 0LL);
          }
        }
        else
        {
          for ( j = 0; j < v26[0]; ++j )
          {
            v19 = (struct D2D_RECT_F *)(16LL * j + v27[0]);
            if ( *a3 > v19->left )
              v19->left = *a3;
            v20 = a3[1];
            if ( v20 > v19->top )
              v19->top = v20;
            v21 = a3[2];
            if ( v19->right > v21 )
              v19->right = v21;
            v22 = a3[3];
            if ( v19->bottom > v22 )
              v19->bottom = v22;
            if ( IsEmpty(v19) )
            {
              v24[1] = 0LL;
              *v24 = 0LL;
            }
            COcclusionContext::CollectRectangleForOcclusion(a1, v27[0] + v23, 0LL, 0LL);
          }
        }
        detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)v27);
      }
    }
  }
  return 0LL;
}
