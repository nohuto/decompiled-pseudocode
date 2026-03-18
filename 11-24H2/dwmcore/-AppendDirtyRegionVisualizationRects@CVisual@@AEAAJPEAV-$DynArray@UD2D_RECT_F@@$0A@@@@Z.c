/*
 * XREFs of ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x18028B628
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180264314 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x1800E2B00 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?_Tidy@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ @ 0x180203F5C (-_Tidy@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180226A84 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x18023D804 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??1?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x180263E60 (--1-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_ptr_t@VCCo.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180265664 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ??$?0PEAUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD2D_RECT_F@@0AEBV?$allocator@UD2D_RECT_F@@@1@@Z @ 0x18028B1D8 (--$-0PEAUD2D_RECT_F@@$0A@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD.c)
 *     ??$_Emplace_back_internal@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@AEAAX$$QEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@1@@Z @ 0x18028B268 (--$_Emplace_back_internal@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@.c)
 *     ??$make_tuple@AEAV?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@YA?AV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@0@AEAV?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@3@$$QEAV?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@0@@Z @ 0x18028B32C (--$make_tuple@AEAV-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@AEAV-$com_p.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x18028C17C (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::AppendDirtyRegionVisualizationRects(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  _QWORD *v9; // rax
  void *v10; // rsi
  __int128 v11; // xmm0
  CKeyframeAnimation *v12; // rax
  CKeyframeAnimation *v13; // rax
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *DirtyRegionVisualizationData; // rbx
  __int64 *v18; // rax
  __int64 *v19; // rax
  int v20; // r9d
  __int64 v22; // [rsp+28h] [rbp-A9h]
  unsigned int v23; // [rsp+28h] [rbp-A9h]
  void *v24; // [rsp+30h] [rbp-A1h]
  __int64 v25; // [rsp+38h] [rbp-99h]
  __int64 v26; // [rsp+40h] [rbp-91h]
  __int64 v27; // [rsp+48h] [rbp-89h]
  __int64 v28; // [rsp+58h] [rbp-79h]
  __int64 v29; // [rsp+68h] [rbp-69h]
  __int64 v30; // [rsp+70h] [rbp-61h]
  __int64 v31; // [rsp+88h] [rbp-49h] BYREF
  __int64 v32; // [rsp+90h] [rbp-41h] BYREF
  __int128 v33; // [rsp+98h] [rbp-39h] BYREF
  _QWORD v34[5]; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v35; // [rsp+D8h] [rbp+7h] BYREF

  v4 = 0;
  v32 = 0LL;
  v31 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v5 = DefaultHeap::AllocClear(0x78uLL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v5[2] = 0;
      *((_QWORD *)v5 + 3) = v6;
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 4) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      v5[10] = 0;
      *((_QWORD *)v5 + 10) = 0LL;
      *(_QWORD *)v5 = &CColorBrush::`vftable'{for `CContent'};
      *((_QWORD *)v5 + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
      *((_QWORD *)v5 + 11) = 0LL;
      *((_BYTE *)v5 + 96) = 0;
    }
    else
    {
      v5 = 0LL;
    }
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(&v32, (__int64)v5);
    v7 = v32;
    if ( !v32 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1637u, 0LL);
      goto LABEL_25;
    }
    v35 = _xmm;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v32 + 96LL))(v32, 0LL, 70LL, &v35);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1639u, 0LL);
      goto LABEL_25;
    }
    v9 = MIDL_user_allocate(0x60uLL);
    v10 = v9;
    if ( !v9 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x163Cu, 0LL);
      goto LABEL_25;
    }
    *v9 = 0LL;
    *((_DWORD *)v9 + 6) = 3;
    v11 = *(_OWORD *)(v7 + 104);
    v9[6] = 1065353216LL;
    *((_DWORD *)v9 + 18) = 1;
    v33 = v11;
    HIDWORD(v33) = 0;
    *((_OWORD *)v9 + 5) = v33;
    v12 = (CKeyframeAnimation *)DefaultHeap::AllocClear(0x220uLL);
    if ( v12 )
      v13 = CKeyframeAnimation::CKeyframeAnimation(v12, *(struct CComposition **)(a1 + 24));
    else
      v13 = 0LL;
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(&v31, (__int64)v13);
    if ( !v31 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1649u, 0LL);
LABEL_23:
      operator delete(v10);
      goto LABEL_25;
    }
    v14 = CKeyframeAnimation::Initialize(
            v31,
            v7,
            0,
            0x46u,
            v22,
            (__int64)v24,
            v25,
            v26,
            v27,
            1.0,
            v28,
            0,
            v29,
            v30,
            (__int64)v10);
    v4 = v14;
    if ( v14 < 0 )
    {
      v20 = v14;
      v23 = 5721;
    }
    else
    {
      if ( (**(_DWORD **)(a1 + 232) & 0x100000) != 0 )
      {
LABEL_19:
        DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(a1);
        v18 = std::vector<D2D_RECT_F>::vector<D2D_RECT_F>(
                (__int64 *)&v33,
                *(const void **)a2,
                *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 24));
        v19 = std::make_tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy> &,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy> &,std::vector<D2D_RECT_F>>(
                v34,
                &v31,
                &v32,
                v18);
        std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::_Emplace_back_internal<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>(
          DirtyRegionVisualizationData,
          v19);
        std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>::~tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>((__int64)v34);
        std::vector<D2D_RECT_F>::_Tidy((__int64)&v33);
        goto LABEL_23;
      }
      v15 = MIDL_user_allocate(0x28uLL);
      v16 = v15;
      if ( v15 )
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        v15[3] = 0LL;
        v15[4] = 0LL;
        std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(v15);
        CVisual::SetDirtyRegionVisualizationData(a1, v16);
        goto LABEL_19;
      }
      v20 = -2147024882;
      v4 = -2147024882;
      v23 = 5726;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, v23, 0LL);
    goto LABEL_23;
  }
LABEL_25:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
  return v4;
}
