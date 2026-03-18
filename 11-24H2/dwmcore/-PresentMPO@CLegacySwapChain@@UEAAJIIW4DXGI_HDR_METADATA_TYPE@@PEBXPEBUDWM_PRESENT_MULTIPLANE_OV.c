/*
 * XREFs of ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180240710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reserve@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAAX_K@Z @ 0x180042370 (-reserve@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULTIPLANE_OVER.c)
 *     ?DXGIPlaneFromDwmPlane@@YA?AU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180066E04 (-DXGIPlaneFromDwmPlane@@YA-AU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_NAEBUDWM_PRESENT_MULTIPLANE_OVER.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801C7600 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C7654 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801C77F0 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ??$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@$$QEAU2@@Z @ 0x1801D5F44 (--$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OV.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180242760 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1802BE3A8 (--$find@X@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_t.c)
 *     McTemplateU0qxx_EventWriteTransfer @ 0x1802BFFB8 (McTemplateU0qxx_EventWriteTransfer.c)
 *     ??1?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802C99A4 (--1-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESENT_PLANE_FL.c)
 *     ?reserve_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@_K0@Z @ 0x1802CA4CC (-reserve_region@-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::PresentMPO(
        CLegacySwapChain *this,
        int a2,
        int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v8; // r14
  __int64 v9; // r12
  char v10; // r13
  __int64 v11; // r15
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v12; // rsi
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v13; // rdi
  _DWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  CLegacySwapChain *v31; // rsi
  char IsEnabled; // al
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v33; // r15
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // rcx
  int v35; // eax
  unsigned int v36; // edi
  _OWORD *v37; // rax
  int v38; // edx
  __int64 v39; // r9
  _BYTE *v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  enum DXGI_HDR_METADATA_TYPE v45; // [rsp+58h] [rbp-B0h]
  int v46; // [rsp+5Ch] [rbp-ACh]
  int v47; // [rsp+60h] [rbp-A8h]
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v48[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v49; // [rsp+78h] [rbp-90h]
  _QWORD v50[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE *v51; // [rsp+90h] [rbp-78h] BYREF
  _BYTE *v52; // [rsp+98h] [rbp-70h]
  __int128 *v53; // [rsp+A0h] [rbp-68h]
  _BYTE v54[256]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v55; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v56; // [rsp+1B8h] [rbp+B0h]
  __int128 v57; // [rsp+1C8h] [rbp+C0h]
  __int128 v58; // [rsp+1D8h] [rbp+D0h]
  __int128 v59; // [rsp+1E8h] [rbp+E0h]
  __int128 v60; // [rsp+1F8h] [rbp+F0h]
  __int128 v61; // [rsp+208h] [rbp+100h]
  __int128 v62; // [rsp+218h] [rbp+110h]
  __int64 v63; // [rsp+228h] [rbp+120h]

  v8 = a6;
  v49 = 0LL;
  v9 = a7;
  v50[1] = a5;
  v47 = a2;
  v45 = a4;
  v10 = (a3 & 2) != 0;
  v46 = a3;
  *(_OWORD *)v48 = 0LL;
  std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::reserve((const void **)v48, a7);
  if ( a7 )
  {
    v11 = a7;
    v12 = a6;
    v13 = v48[1];
    do
    {
      v14 = DXGIPlaneFromDwmPlane(&v51, v10, (__int64)v12);
      v15 = *((_OWORD *)v14 + 1);
      v55 = *(_OWORD *)v14;
      v16 = *((_OWORD *)v14 + 2);
      v56 = v15;
      v17 = *((_OWORD *)v14 + 3);
      v57 = v16;
      v18 = *((_OWORD *)v14 + 4);
      v58 = v17;
      v19 = *((_OWORD *)v14 + 5);
      v59 = v18;
      v20 = *((_OWORD *)v14 + 6);
      v60 = v19;
      v21 = *((_OWORD *)v14 + 7);
      v22 = *((_QWORD *)v14 + 16);
      v61 = v20;
      v62 = v21;
      v63 = v22;
      if ( v13 == v49 )
      {
        std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(
          (const void **)v48,
          v13,
          (__int64)&v55);
        v13 = v48[1];
      }
      else
      {
        v23 = v56;
        *(_OWORD *)v13 = v55;
        v24 = v57;
        *((_OWORD *)v13 + 1) = v23;
        v25 = v58;
        *((_OWORD *)v13 + 2) = v24;
        v26 = v59;
        *((_OWORD *)v13 + 3) = v25;
        v27 = v60;
        *((_OWORD *)v13 + 4) = v26;
        v28 = v61;
        *((_OWORD *)v13 + 5) = v27;
        v29 = v62;
        v30 = v63;
        *((_OWORD *)v13 + 6) = v28;
        *((_OWORD *)v13 + 7) = v29;
        *((_QWORD *)v13 + 16) = v30;
        v13 = (struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)v13 + 136);
        v48[1] = v13;
      }
      v12 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)v12 + 128);
      --v11;
    }
    while ( v11 );
  }
  v31 = (CLegacySwapChain *)((char *)this - 24);
  CLegacySwapChain::PrePresent((CLegacySwapChain *)((char *)this - 24), v10);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl);
  v33 = v48[0];
  if ( !IsEnabled )
    goto LABEL_18;
  ++*((_QWORD *)this + 58);
  v34 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 33);
  v44 = 0LL;
  v35 = (**v34)(v34, &GUID_605dc1ba_436e_4a11_ac4b_f1e2bb7b322b, &v44);
  v36 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x2E1u, 0LL);
    goto LABEL_22;
  }
  v51 = v54;
  v52 = v54;
  v53 = &v55;
  v37 = (_OWORD *)detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::reserve_region(
                    &v51,
                    0LL,
                    a7);
  if ( a7 )
  {
    *v37 = 0LL;
    qmemcpy(v37 + 1, v37, 8 * ((16 * (unsigned __int64)a7 - 9) >> 3));
    v31 = (CLegacySwapChain *)((char *)this - 24);
    do
    {
      if ( *((_BYTE *)v8 + 4) )
      {
        std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::find<void>(
          (char *)this + 400,
          v50,
          v8);
        v39 = v50[0];
        if ( v50[0] != *((_QWORD *)this + 51) )
        {
          v40 = v52;
          *((_QWORD *)v52 - 2) = *(_QWORD *)(v50[0] + 32LL);
          *((_QWORD *)v40 - 1) = *((_QWORD *)this + 58);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0qxx_EventWriteTransfer(
              (_DWORD)v40,
              v38,
              *(_DWORD *)v8,
              *(_QWORD *)(v39 + 24),
              *((_QWORD *)this + 58));
        }
      }
      v8 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)v8 + 128);
      --v9;
    }
    while ( v9 );
  }
  v41 = (*(__int64 (__fastcall **)(__int64, signed __int64))(*(_QWORD *)v44 + 280LL))(v44, (v52 - v51) >> 4);
  v36 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v41, 0x300u, 0LL);
    detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::~vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>(&v51);
LABEL_22:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v44);
    goto LABEL_24;
  }
  detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::~vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>(&v51);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v44);
LABEL_18:
  v42 = CD3DDevice::PresentMPO(*((CD3DDevice **)this + 5), *((struct IDXGISwapChainDWM1 **)this + 33));
  v36 = v42;
  if ( v42 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x309u, 0LL);
  else
    CLegacySwapChain::PostPresent(v31, v10, v42 == 142213121);
LABEL_24:
  if ( v33 )
    std::_Deallocate<16,0>(v33, 8 * ((v49 - v33) >> 3));
  return v36;
}
