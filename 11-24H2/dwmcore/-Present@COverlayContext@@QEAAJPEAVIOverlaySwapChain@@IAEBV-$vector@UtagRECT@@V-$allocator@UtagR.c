/*
 * XREFs of ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x180233400
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x18009912C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1801E057C (-LegacyPresentRequired@COverlayContext@@AEBA_NXZ.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801F0F1C (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1802181DC (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1802338C4 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18026BF8C (-GetCursorBounds@COverlayContext@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?IsCursorVisibleInSoftware@COverlayContext@@AEBA_NXZ @ 0x18026C58C (-IsCursorVisibleInSoftware@COverlayContext@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::Present(
        CDirectFlipInfo **this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        char a7)
{
  __int64 v11; // rax
  CDirectFlipInfo *v12; // rdi
  __int64 v13; // r13
  COverlayContext *v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  int v17; // esi
  int v18; // eax
  __int64 v19; // r8
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  CDirectFlipInfo *v27; // rcx
  int v28; // eax
  CDirectFlipInfo *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // eax
  CDirectFlipInfo *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // [rsp+30h] [rbp-C1h] BYREF
  int v39; // [rsp+38h] [rbp-B9h] BYREF
  int v40; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v41; // [rsp+48h] [rbp-A9h] BYREF
  struct D2D_RECT_F v42; // [rsp+50h] [rbp-A1h] BYREF
  __int64 v43[2]; // [rsp+60h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+70h] [rbp-81h] BYREF
  __int64 v45; // [rsp+80h] [rbp-71h]
  __int64 v46; // [rsp+88h] [rbp-69h]
  __int64 *v47; // [rsp+90h] [rbp-61h]
  __int64 v48; // [rsp+98h] [rbp-59h]
  __int64 *v49; // [rsp+A0h] [rbp-51h]
  __int64 v50; // [rsp+A8h] [rbp-49h]
  __int64 *v51; // [rsp+B0h] [rbp-41h]
  __int64 v52; // [rsp+B8h] [rbp-39h]
  struct D2D_RECT_F *v53; // [rsp+C0h] [rbp-31h]
  __int64 v54; // [rsp+C8h] [rbp-29h]
  int *v55; // [rsp+D0h] [rbp-21h]
  __int64 v56; // [rsp+D8h] [rbp-19h]

  v11 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)*this + 1) + 32LL))((__int64)*this + 8);
  v12 = this[2439];
  v13 = v11;
  LOBYTE(v38) = 0;
  if ( v12 )
  {
    v27 = *this;
    v42 = *(struct D2D_RECT_F *)((char *)this + 18980);
    *(_OWORD *)v43 = *(_OWORD *)((*(__int64 (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)v27 + 256LL))(v27) + 24);
    v28 = CDirectFlipInfo::Present(v12, a2, a5, (__int128 *)&v42, (__int64)v43);
    v17 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0xE73u, 0LL);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    {
      v29 = this[2439];
      v30 = *((_DWORD *)v29 + 23);
      v31 = *((_QWORD *)v29 + 2);
      v39 = v30;
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 336LL))(v31);
      v33 = this[2439];
      *(_QWORD *)&v42.left = v32;
      v40 = v17;
      v41 = *((_QWORD *)v33 + 3);
      v34 = *((_QWORD *)v33 + 2);
      v45 = v13;
      v46 = 28LL;
      v48 = 4LL;
      v35 = *(_QWORD *)(v34 + 40);
      v47 = (__int64 *)&v40;
      v49 = v43;
      v51 = &v41;
      v53 = &v42;
      v55 = &v39;
      v43[0] = v35;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 4LL;
      McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &Present_DFlip, v36, 7u, &v44);
    }
    if ( (int)(v17 + 0x80000000) < 0 || v17 == -2003304309 )
      *((_BYTE *)this + 19584) = 1;
    else
      COverlayContext::ClearDirectFlip((COverlayContext *)this);
  }
  else
  {
    *((_BYTE *)this + 19584) = 0;
    if ( a7 || COverlayContext::LegacyPresentRequired((COverlayContext *)this) )
    {
      v18 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, _QWORD, __int64, unsigned int))(*(_QWORD *)a2 + 376LL))(
              a2,
              1LL,
              a3,
              a4,
              a5);
      v17 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xE44u, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
      {
        v39 = a3;
        v47 = (__int64 *)&v40;
        v40 = v17;
        v49 = (__int64 *)&v39;
        v45 = v13;
        v46 = 28LL;
        v48 = 4LL;
        v50 = 4LL;
        McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &Present_Legacy, v19, 4u, &v44);
      }
      if ( v17 >= 0 )
      {
        *((_WORD *)this + 9544) = 1;
        v20 = *((_OWORD *)this + 1186);
        LOBYTE(v38) = 1;
        v21 = *((_OWORD *)this + 1187);
        this[2402] = 0LL;
        *(_OWORD *)(this + 2387) = v20;
        v22 = *((_OWORD *)this + 1188);
        *(_OWORD *)(this + 2389) = v21;
        v23 = *((_OWORD *)this + 1189);
        *(_OWORD *)(this + 2391) = v22;
        v24 = *((_OWORD *)this + 1190);
        *(_OWORD *)(this + 2393) = v23;
        v25 = *((_OWORD *)this + 1191);
        *(_OWORD *)(this + 2395) = v24;
        v26 = *((_OWORD *)this + 1192);
        *(_OWORD *)(this + 2397) = v25;
        *(_QWORD *)&v25 = this[2386];
        *(_OWORD *)(this + 2399) = v26;
        this[2401] = (CDirectFlipInfo *)v25;
      }
    }
    else
    {
      LODWORD(v41) = 0;
      v15 = COverlayContext::PresentMPO(v14, (__int64)&v41, (__int64)&v38);
      v17 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xE2Fu, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
      {
        v40 = (unsigned __int8)v38;
        v39 = v41;
        v47 = v43;
        v49 = (__int64 *)&v39;
        v51 = (__int64 *)&v40;
        LODWORD(v43[0]) = v17;
        v45 = v13;
        v46 = 28LL;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &Present_MPO, v16, 5u, &v44);
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl)
      && (_BYTE)v38
      && (a3 & 2) == 0 )
    {
      if ( this[2403] && COverlayContext::IsCursorVisibleInSoftware((COverlayContext *)this) )
      {
        *((_OWORD *)this + 1207) = *(_OWORD *)COverlayContext::GetCursorBounds((COverlayContext *)this, &v42);
      }
      else
      {
        this[2415] = 0LL;
        this[2414] = 0LL;
      }
    }
  }
  if ( a6 )
    *a6 = v38;
  return (unsigned int)v17;
}
