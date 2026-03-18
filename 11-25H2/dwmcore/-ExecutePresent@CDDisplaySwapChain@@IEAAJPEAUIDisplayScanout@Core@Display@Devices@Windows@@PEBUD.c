/*
 * XREFs of ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1802C7F64
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180171A70 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1801D9020 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devices@Windows@@W4DisplaySourceStatus@3456@PEA_N@Z @ 0x18020A9E4 (-TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devi.c)
 *     ?GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ @ 0x180218614 (-GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x18024B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1802C6EFC (--$_Destroy_range@V-$allocator@V-$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV-$function@$$A6AXXZ@.c)
 *     ??$_Emplace_reallocate@V?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@$$QEAV21@@Z @ 0x1802C7068 (--$_Emplace_reallocate@V-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$allocato.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1802C7738 (--$find@X@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_t.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x1802C7810 (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1802C9130 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::ExecutePresent(
        CDDisplaySwapChain *this,
        struct Windows::Devices::Display::Core::IDisplayScanout *a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        unsigned int a4)
{
  CDDisplaySwapChain *v4; // rdi
  CD2DContext *v5; // rcx
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // r15d
  int v12; // ebx
  unsigned int RequestedVBlankDurationHns; // eax
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _QWORD *v23; // r13
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD *, __int64, __int64 *); // rsi
  int v31; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 (__fastcall *v35)(_QWORD *, __int64, __int64 *); // rsi
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rcx
  _BYTE v40[8]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v41; // [rsp+38h] [rbp-91h] BYREF
  __int64 v42; // [rsp+40h] [rbp-89h] BYREF
  __int64 v43; // [rsp+48h] [rbp-81h] BYREF
  int v44; // [rsp+50h] [rbp-79h] BYREF
  int v45; // [rsp+54h] [rbp-75h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-71h] BYREF
  _QWORD *v47; // [rsp+60h] [rbp-69h] BYREF
  __int128 v48; // [rsp+68h] [rbp-61h] BYREF
  __int64 v49; // [rsp+78h] [rbp-51h]
  __int128 v50; // [rsp+80h] [rbp-49h]
  CDDisplaySwapChain *v51; // [rsp+90h] [rbp-39h]
  __int64 (__fastcall **v52)(); // [rsp+A0h] [rbp-29h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-21h]
  CDDisplaySwapChain *v54; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall ***v55)(); // [rsp+D8h] [rbp+Fh]

  v4 = this;
  v5 = (CD2DContext *)(*((_QWORD *)this + 8) + 16LL);
  v42 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  v9 = 0LL;
  CD2DContext::ReleaseCachedD2DTarget(v5);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 42) + 48LL))(*((_QWORD *)v4 + 42), &v42);
  v11 = 0;
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x487u, 0LL);
    goto LABEL_61;
  }
  if ( *((_DWORD *)v4 + 39) || *((_QWORD *)v4 + 20) )
  {
    v46 = 0LL;
    v43 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v42)(v42, &GUID_6c365d5b_e724_55f5_b13b_e50aa3fafbc4, &v43);
    if ( v46 )
      (*(void (__fastcall **)(_QWORD *))(*v46 + 16LL))(v46);
    (**(void (__fastcall ***)(__int64, GUID *, _QWORD **))v42)(v42, &GUID_4b5385d2_4b4c_5212_83dd_8a114e368804, &v46);
    RequestedVBlankDurationHns = RefreshRateInfo::GetRequestedVBlankDurationHns((CDDisplaySwapChain *)((char *)v4 + 128));
    v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v46 + 48LL))(v46, RequestedVBlankDurationHns);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x492u, 0LL);
    }
    else
    {
      v15 = *((_DWORD *)v4 + 39);
      v16 = 1LL;
      if ( v15 )
        v16 = v15;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 48LL))(v43, v16);
      v12 = v17;
      if ( v17 >= 0 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v46);
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x493u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v46);
    goto LABEL_61;
  }
LABEL_11:
  v18 = *((_QWORD *)v4 + 8);
  v19 = *((_QWORD *)v4 + 43);
  ++*((_QWORD *)v4 + 69);
  *(_BYTE *)(v18 + 1499) = 0;
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v18 + 224) + 152LL))(*(_QWORD *)(v18 + 224), v19);
  v12 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x498u, 0LL);
    goto LABEL_61;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v42 + 56LL))(
          v42,
          *((_QWORD *)v4 + 45),
          *((_QWORD *)v4 + 69));
  v12 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x499u, 0LL);
    goto LABEL_61;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v42 + 48LL))(
          v42,
          a2);
  v12 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x49Cu, 0LL);
    goto LABEL_61;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl) )
  {
    v43 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v42)(v42, &GUID_0bc48fd2_7b1d_5306_b4ae_4de068387574, &v43);
    if ( a4 )
    {
      do
      {
        if ( *((_BYTE *)a3 + 4) )
        {
          std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::find<void>(
            (_QWORD *)v4 + 75,
            &v46,
            (__int64)a3);
          if ( v46 != *((_QWORD **)v4 + 76) )
          {
            v23 = v46 + 3;
            v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v43 + 48LL))(
                    v43,
                    0LL,
                    v46[6],
                    *(unsigned int *)a3);
            v12 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x4B5u, 0LL);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
              goto LABEL_61;
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              *(_QWORD *)&v50 = a3;
              *((_QWORD *)&v50 + 1) = v23;
              v52 = off_1803158C0;
              v51 = v4;
              v55 = &v52;
              v54 = v4;
              v53 = v50;
              if ( *((_QWORD *)&v48 + 1) == v9 )
              {
                std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)>>(
                  (__int64 *)&v48,
                  *((__int64 *)&v48 + 1),
                  (__int64)&v52);
                v9 = v49;
              }
              else
              {
                std::function<void (void)>::function<void (void)>(*((__int64 *)&v48 + 1), (__int64)&v52);
                *((_QWORD *)&v48 + 1) += 64LL;
              }
              std::_Func_class<void,>::_Tidy(&v52);
            }
          }
        }
        ++v11;
        a3 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)a3 + 128);
      }
      while ( v11 < a4 );
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
  }
  v25 = (__int64)v47;
  v45 = 0;
  v44 = 0;
  v47 = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v26 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))v4 + 42))(
          *((_QWORD *)v4 + 42),
          &GUID_46b879b6_5d17_5955_a872_eb38003db586,
          &v47);
  v12 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x4CDu, 0LL);
LABEL_61:
    v12 = CD3DDevice::TranslateDXGIorD3DErrorInContext(*((_QWORD *)v4 + 8), v12, 1u);
    goto LABEL_62;
  }
  v27 = v41;
  v28 = v47;
  v29 = *v47;
  v41 = 0LL;
  v30 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v29 + 48);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v31 = v30(v28, v42, &v41);
  if ( v31 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x4CEu, 0LL);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 48LL))(v41, &v45);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 64LL))(v41, &v44);
  v40[0] = 0;
  v12 = CDDisplaySwapChain::TranslateExecutePresentResult((__int64)v4, v45, v44, v40);
  if ( !v12 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 56LL))(v41, (__int64)v4 + 528);
  if ( v40[0] )
  {
    v32 = v41;
    v33 = v47;
    v34 = *v47;
    v41 = 0LL;
    v35 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v34 + 48);
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v36 = v35(v33, v42, &v41);
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x4E6u, 0LL);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 48LL))(v41, &v45);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 64LL))(v41, &v44);
    v12 = CDDisplaySwapChain::TranslateExecutePresentResult((__int64)v4, v45, v44, v40);
    if ( !v12 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 56LL))(v41, (__int64)v4 + 528);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl) )
  {
    if ( v12 < 0 )
      goto LABEL_61;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      goto LABEL_62;
    v4 = (CDDisplaySwapChain *)v48;
    v37 = v48;
    if ( (_QWORD)v48 == *((_QWORD *)&v48 + 1) )
      goto LABEL_63;
    while ( 1 )
    {
      v38 = *(_QWORD *)(v37 + 56);
      if ( !v38 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v37 += 64LL;
      if ( v37 == *((_QWORD *)&v48 + 1) )
        goto LABEL_63;
    }
    std::_Xbad_function_call();
    __debugbreak();
  }
  if ( v12 < 0 )
    goto LABEL_61;
LABEL_62:
  v4 = (CDDisplaySwapChain *)v48;
LABEL_63:
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::function<void (void)>>>((__int64)v4, *((__int64 *)&v48 + 1));
    std::_Deallocate<16,0>(v4, (v9 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v41);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v47);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v42);
  return (unsigned int)v12;
}
