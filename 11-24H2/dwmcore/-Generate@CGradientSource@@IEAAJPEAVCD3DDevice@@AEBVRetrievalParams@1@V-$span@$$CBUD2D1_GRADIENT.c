/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180062E18
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180062C98 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x18005CB14 (-Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z.c)
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180063224 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x180063390 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x180064050 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180064100 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientSource::Generate(
        __int64 a1,
        struct CD3DDevice *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        int a8)
{
  _QWORD *v8; // rax
  unsigned int *v9; // r14
  unsigned int v13; // edi
  int v14; // eax
  struct CD2DBrush *v15; // rbx
  int v16; // eax
  __int64 v17; // r8
  struct CAtlasBitmapResource *v18; // r14
  int v19; // eax
  _QWORD *v20; // rax
  int GradientStopCollection; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  struct CD2DBrush *v26; // rdx
  struct CD2DResourceManager *v27; // rcx
  struct CD2DBrush *v28; // r14
  int v29; // eax
  struct CD2DBrush *v30; // rbx
  __int64 v31; // rdx
  struct CD2DBrush *v32; // [rsp+70h] [rbp-51h] BYREF
  struct CAtlasBitmapResource *v33; // [rsp+78h] [rbp-49h] BYREF
  __int64 v34[2]; // [rsp+80h] [rbp-41h] BYREF
  __int128 v35; // [rsp+90h] [rbp-31h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-21h]

  v8 = *(_QWORD **)a3;
  v9 = (unsigned int *)a4;
  v34[0] = a4;
  v13 = 0;
  if ( !v8 || *v8 )
    goto LABEL_9;
  v33 = 0LL;
  v14 = CAtlasBitmapResource::Create((struct IAtlasEntryOwner *)a1, a2, &v33);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x92u, 0LL);
    goto LABEL_26;
  }
  v32 = (struct CD2DBrush *)MIDL_user_allocate(0x2000uLL);
  v15 = v32;
  if ( !v32 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x98u, 0LL);
LABEL_12:
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v32);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
    return v13;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, unsigned int, int, int, _DWORD, int, struct CD2DBrush *, int))(*(_QWORD *)qword_1803FAAB8 + 40LL))(
          qword_1803FAAB8,
          *((_QWORD *)v9 + 1),
          *v9,
          a7 ^ 1u,
          1,
          (unsigned int)a5 + 1,
          1,
          a8,
          0,
          87,
          v32,
          0x2000);
  v13 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xA4u, 0LL);
    operator delete(v32);
    goto LABEL_26;
  }
  gsl::details::extent_type<-1>::extent_type<-1>(&v35, 0x2000LL);
  if ( (_QWORD)v35 == -1LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v18 = v33;
  LOBYTE(v17) = a6;
  *((_QWORD *)&v35 + 1) = v32;
  v19 = CAtlasBitmapResource::Update(v33, &v35, v17);
  v13 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xA7u, 0LL);
    goto LABEL_12;
  }
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(a1 + 16, v18);
  **(_QWORD **)a3 = v18;
  operator delete(v15);
  v9 = (unsigned int *)v34[0];
LABEL_9:
  v20 = *(_QWORD **)(a3 + 8);
  if ( !v20 || *v20 )
    return v13;
  v35 = *(_OWORD *)v9;
  v33 = 0LL;
  GradientStopCollection = CD2DContext::CreateGradientStopCollection(
                             (int)a2 + 16,
                             (unsigned int)&v35,
                             a5,
                             a8,
                             (__int64)&v33);
  v13 = GradientStopCollection;
  if ( GradientStopCollection >= 0 )
  {
    v23 = *((_QWORD *)a2 + 27);
    v32 = 0LL;
    v35 = 0LL;
    if ( a7 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, struct CAtlasBitmapResource *, struct CD2DBrush **))(*(_QWORD *)v23 + 80LL))(
              v23,
              &v35,
              0LL,
              v33,
              &v32);
      v13 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xCAu, 0LL);
        goto LABEL_18;
      }
    }
    else
    {
      v36 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, struct CAtlasBitmapResource *, struct CD2DBrush **))(*(_QWORD *)v23 + 88LL))(
              v23,
              &v35,
              0LL,
              v33,
              &v32);
      v13 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xD7u, 0LL);
LABEL_18:
        if ( v32 )
          (*(void (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v32 + 16LL))(v32);
        goto LABEL_26;
      }
    }
    v26 = v32;
    v27 = (struct CD2DResourceManager *)*((_QWORD *)a2 + 23);
    v28 = v32;
    v34[0] = (__int64)v32;
    v32 = 0LL;
    v29 = CD2DBrush::Create(v27, v26, &v32);
    v13 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xDCu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v34);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
      return v13;
    }
    v30 = v32;
    (*(void (__fastcall **)(struct CD2DBrush *, __int64))(*(_QWORD *)v32 + 72LL))(v32, (a1 + 8) & -(__int64)(a1 != 0));
    v32 = 0LL;
    v31 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24);
    v34[0] = 0LL;
    *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 a1 + 24,
                 v31 >> 3) = v30;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v34);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
    **(_QWORD **)(a3 + 8) = v28;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GradientStopCollection, 0xBEu, 0LL);
LABEL_26:
  if ( v33 )
    (*(void (__fastcall **)(struct CAtlasBitmapResource *))(*(_QWORD *)v33 + 16LL))(v33);
  return v13;
}
