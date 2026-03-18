/*
 * XREFs of ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x18013EED0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180062C98 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ @ 0x18013F3A0 (-GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801D4228 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientBrush::GetD2DBrush(
        CLinearGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  struct CD3DDevice *v5; // r12
  char *v7; // r15
  float v8; // xmm0_4
  struct ID2D1Brush *v9; // rbx
  int v10; // ebp
  char *v11; // r14
  CD2DResource **v12; // rdi
  CD2DResource **v13; // r14
  __int64 (*v14)(void); // rax
  struct CD3DDevice *Device; // rax
  struct ID2D1Brush *v16; // rcx
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm6
  __m128 v20; // xmm7
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rax
  __int64 *v24; // rcx
  _QWORD *v25; // rdi
  _QWORD *v26; // r14
  char *v27; // rdx
  int v28; // eax
  struct ID2D1Brush *v29; // [rsp+30h] [rbp-B8h] BYREF
  float v30; // [rsp+38h] [rbp-B0h] BYREF
  float v31; // [rsp+3Ch] [rbp-ACh]
  char *v32; // [rsp+48h] [rbp-A0h]
  struct ID2D1Brush **v33; // [rsp+50h] [rbp-98h]
  __int128 v34; // [rsp+58h] [rbp-90h] BYREF
  __int64 v35; // [rsp+68h] [rbp-80h]

  v5 = (struct CD3DDevice *)*((_QWORD *)a2 + 5);
  v7 = (char *)this + 104;
  v30 = a3->right - a3->left;
  v8 = a3->bottom - a3->top;
  v33 = a4;
  v9 = 0LL;
  v10 = 0;
  v29 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v31 = v8;
  *((_QWORD *)&v34 + 1) = &v29;
  if ( *((_BYTE *)this + 233) )
  {
    v11 = (char *)this + 128;
  }
  else
  {
    v23 = *((_QWORD *)this + 15);
    v24 = (__int64 *)((char *)this + 120);
    if ( v23 )
    {
      *(_QWORD *)(v23 + 32) = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v24);
    }
    v25 = (_QWORD *)*((_QWORD *)v7 + 3);
    v32 = v7 + 24;
    v26 = (_QWORD *)*((_QWORD *)v7 + 4);
    while ( v25 != v26 )
    {
      v27 = v7 + 8;
      if ( !v7 )
        v27 = 0LL;
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v25 + 80LL))(*v25, v27);
      ++v25;
    }
    v11 = v32;
    detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v32);
  }
  v12 = *(CD2DResource ***)v11;
  v13 = (CD2DResource **)*((_QWORD *)v11 + 1);
  while ( v12 != v13 )
  {
    v14 = *(__int64 (**)(void))(*(_QWORD *)*v12 + 40LL);
    if ( (char *)v14 == (char *)CD2DResource::GetDevice )
      Device = CD2DResource::GetDevice(*v12);
    else
      Device = (struct CD3DDevice *)v14();
    if ( Device == v5 )
    {
      v9 = (struct ID2D1Brush *)*((_QWORD *)*v12 + 9);
      (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_9:
      v16 = 0LL;
      goto LABEL_10;
    }
    ++v12;
  }
  v28 = CGradientBrush::Generate(this, v5, (const struct CGradientSource::RetrievalParams *)&v34);
  v10 = v28;
  if ( v28 >= 0 )
  {
    v9 = v29;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x1DDu, 0LL);
  v16 = v29;
LABEL_10:
  if ( v16 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD3u, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v9 + 16LL))(v9);
    return (unsigned int)v10;
  }
  else
  {
    v17 = (__m128)*((unsigned int *)this + 60);
    if ( *((_DWORD *)this + 57) == 1 )
    {
      v20 = (__m128)LODWORD(v31);
      v19 = (__m128)LODWORD(v30);
      v18 = (__m128)LODWORD(v31);
      v18.m128_f32[0] = (float)(v31 * *((float *)this + 61)) + a3->top;
      v17.m128_f32[0] = (float)(v17.m128_f32[0] * v30) + a3->left;
      v20.m128_f32[0] = (float)(v31 * *((float *)this + 63)) + a3->top;
      v19.m128_f32[0] = (float)(v30 * *((float *)this + 62)) + a3->left;
    }
    else
    {
      v18 = (__m128)*((unsigned int *)this + 61);
      v19 = (__m128)*((unsigned int *)this + 62);
      v20 = (__m128)*((unsigned int *)this + 63);
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v9 + 64LL))(
      v9,
      _mm_unpacklo_ps(v17, v18).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v9 + 72LL))(
      v9,
      _mm_unpacklo_ps(v19, v20).m128_u64[0]);
    v21 = *((_QWORD *)this + 27);
    if ( v21 )
    {
      v35 = 0LL;
      v34 = 0LL;
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v21 + 208LL))(v21, &v30, &v34);
    }
    else
    {
      v34 = _xmm;
      v35 = 0LL;
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v9 + 40LL))(v9, &v34);
    result = 0LL;
    *v33 = v9;
  }
  return result;
}
