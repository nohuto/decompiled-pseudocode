/*
 * XREFs of ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800843A0
 * Callers:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x180085CF0 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reserve@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAAX_K@Z @ 0x18006C1B0 (-reserve@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULTIPLANE_OVER.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DXGIPlaneFromDwmPlane@@YA?AU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180171FAC (-DXGIPlaneFromDwmPlane@@YA-AU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_NAEBUDWM_PRESENT_MULTIPLANE_OVER.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801C0FE4 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C1038 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801C1470 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ??$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@$$QEAU2@@Z @ 0x1801E2304 (--$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OV.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x18024B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1802C7738 (--$find@X@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_t.c)
 *     McTemplateU0qxx_EventWriteTransfer @ 0x1802C9348 (McTemplateU0qxx_EventWriteTransfer.c)
 *     ??1?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802D2C24 (--1-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESENT_PLANE_FL.c)
 *     ?reserve_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@_K0@Z @ 0x1802D374C (-reserve_region@-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::PresentMPO(
        CLegacySwapChain *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        void *a5,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v8; // r14
  __int64 v9; // r12
  bool v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r15
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v13; // rsi
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v14; // rdi
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  CLegacySwapChain *v32; // rsi
  char IsEnabled; // al
  const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v34; // r15
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // rcx
  int v36; // eax
  unsigned int v37; // edi
  _OWORD *v38; // rax
  int v39; // edx
  __int64 v40; // r9
  _BYTE *v41; // rcx
  int v42; // eax
  int v43; // eax
  bool v44; // r8
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  enum DXGI_HDR_METADATA_TYPE v47; // [rsp+58h] [rbp-B0h]
  unsigned int v48; // [rsp+5Ch] [rbp-ACh]
  unsigned int v49; // [rsp+60h] [rbp-A8h]
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v50[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h] BYREF
  void *v53; // [rsp+88h] [rbp-80h]
  _BYTE *v54; // [rsp+90h] [rbp-78h] BYREF
  _BYTE *v55; // [rsp+98h] [rbp-70h]
  __int128 *v56; // [rsp+A0h] [rbp-68h]
  _BYTE v57[256]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v58; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v59; // [rsp+1B8h] [rbp+B0h]
  __int128 v60; // [rsp+1C8h] [rbp+C0h]
  __int128 v61; // [rsp+1D8h] [rbp+D0h]
  __int128 v62; // [rsp+1E8h] [rbp+E0h]
  __int128 v63; // [rsp+1F8h] [rbp+F0h]
  __int128 v64; // [rsp+208h] [rbp+100h]
  __int128 v65; // [rsp+218h] [rbp+110h]
  __int64 v66; // [rsp+228h] [rbp+120h]

  v8 = a6;
  v51 = 0LL;
  v9 = a7;
  v53 = a5;
  v49 = a2;
  v47 = a4;
  v10 = (a3 & 2) != 0;
  v48 = a3;
  *(_OWORD *)v50 = 0LL;
  std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::reserve((const void **)v50, a7);
  if ( a7 )
  {
    v12 = a7;
    v13 = a6;
    v14 = v50[1];
    do
    {
      LOBYTE(v11) = v10;
      v15 = DXGIPlaneFromDwmPlane(&v54, v11, v13);
      v11 = 128LL;
      v16 = *(_OWORD *)(v15 + 16);
      v58 = *(_OWORD *)v15;
      v17 = *(_OWORD *)(v15 + 32);
      v59 = v16;
      v18 = *(_OWORD *)(v15 + 48);
      v60 = v17;
      v19 = *(_OWORD *)(v15 + 64);
      v61 = v18;
      v20 = *(_OWORD *)(v15 + 80);
      v62 = v19;
      v21 = *(_OWORD *)(v15 + 96);
      v63 = v20;
      v22 = *(_OWORD *)(v15 + 112);
      v23 = *(_QWORD *)(v15 + 128);
      v64 = v21;
      v65 = v22;
      v66 = v23;
      if ( v14 == v51 )
      {
        std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(
          v50,
          v14,
          &v58);
        v14 = v50[1];
        v11 = 128LL;
      }
      else
      {
        v24 = v59;
        *(_OWORD *)v14 = v58;
        v25 = v60;
        *((_OWORD *)v14 + 1) = v24;
        v26 = v61;
        *((_OWORD *)v14 + 2) = v25;
        v27 = v62;
        *((_OWORD *)v14 + 3) = v26;
        v28 = v63;
        *((_OWORD *)v14 + 4) = v27;
        v29 = v64;
        *((_OWORD *)v14 + 5) = v28;
        v30 = v65;
        v31 = v66;
        *((_OWORD *)v14 + 6) = v29;
        *((_OWORD *)v14 + 7) = v30;
        *((_QWORD *)v14 + 16) = v31;
        v14 = (struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)v14 + 136);
        v50[1] = v14;
      }
      v13 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)v13 + 128);
      --v12;
    }
    while ( v12 );
  }
  v32 = (CLegacySwapChain *)((char *)this - 24);
  CLegacySwapChain::PrePresent((CLegacySwapChain *)((char *)this - 24), v10);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl);
  v34 = v50[0];
  if ( !IsEnabled )
    goto LABEL_18;
  ++*((_QWORD *)this + 58);
  v35 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 33);
  v46 = 0LL;
  v36 = (**v35)(v35, &GUID_605dc1ba_436e_4a11_ac4b_f1e2bb7b322b, &v46);
  v37 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x2E1u, 0LL);
    goto LABEL_22;
  }
  v54 = v57;
  v55 = v57;
  v56 = &v58;
  v38 = (_OWORD *)detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::reserve_region(
                    &v54,
                    0LL,
                    a7);
  if ( a7 )
  {
    *v38 = 0LL;
    qmemcpy(v38 + 1, v38, 8 * ((16 * (unsigned __int64)a7 - 9) >> 3));
    v32 = (CLegacySwapChain *)((char *)this - 24);
    do
    {
      if ( *((_BYTE *)v8 + 4) )
      {
        std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::find<void>(
          (char *)this + 400,
          &v52,
          v8);
        v40 = v52;
        if ( v52 != *((_QWORD *)this + 51) )
        {
          v41 = v55;
          *((_QWORD *)v55 - 2) = *(_QWORD *)(v52 + 32);
          *((_QWORD *)v41 - 1) = *((_QWORD *)this + 58);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0qxx_EventWriteTransfer(
              (_DWORD)v41,
              v39,
              *(_DWORD *)v8,
              *(_QWORD *)(v40 + 24),
              *((_QWORD *)this + 58));
        }
      }
      v8 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)v8 + 128);
      --v9;
    }
    while ( v9 );
  }
  v42 = (*(__int64 (__fastcall **)(__int64, signed __int64))(*(_QWORD *)v46 + 280LL))(v46, (v55 - v54) >> 4);
  v37 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x300u, 0LL);
    detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::~vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>(&v54);
LABEL_22:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v46);
    goto LABEL_24;
  }
  detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::~vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>(&v54);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v46);
LABEL_18:
  v43 = CD3DDevice::PresentMPO(
          *((CD3DDevice **)this + 5),
          *((struct IDXGISwapChainDWM1 **)this + 33),
          v49,
          v48,
          v47,
          v53,
          v34,
          a7);
  v37 = v43;
  if ( v43 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x309u, 0LL);
  else
    CLegacySwapChain::PostPresent(v32, v10, v44);
LABEL_24:
  if ( v34 )
    std::_Deallocate<16,0>(v34, 8 * ((v51 - v34) >> 3));
  return v37;
}
