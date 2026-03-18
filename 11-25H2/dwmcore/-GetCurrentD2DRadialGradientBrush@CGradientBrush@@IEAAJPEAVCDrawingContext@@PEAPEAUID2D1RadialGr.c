/*
 * XREFs of ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x18019F500
 * Callers:
 *     ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x18019F2C0 (-GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 * Callees:
 *     ?GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ @ 0x1800131A0 (-GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x18019DB48 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18019F898 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentD2DRadialGradientBrush(
        CGradientBrush *this,
        struct CDrawingContext *a2,
        struct ID2D1RadialGradientBrush **a3)
{
  unsigned int v4; // esi
  struct CD3DDevice *v7; // r12
  char *v8; // rdi
  CD2DResource **v9; // rbx
  CD2DResource **v10; // rdi
  __int64 (*v11)(void); // rax
  struct CD3DDevice *Device; // rax
  struct ID2D1RadialGradientBrush *v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // r15
  int v19; // eax
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF
  struct ID2D1RadialGradientBrush *v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  v4 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  v7 = (struct CD3DDevice *)*((_QWORD *)a2 + 5);
  v20[1] = &v21;
  v20[0] = 0LL;
  if ( *((_BYTE *)this + 233) )
  {
    v8 = (char *)this + 128;
  }
  else
  {
    v16 = *((_QWORD *)this + 15);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 32) = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
    }
    v8 = (char *)this + 128;
    v17 = (_QWORD *)*((_QWORD *)this + 16);
    v18 = (_QWORD *)*((_QWORD *)this + 17);
    while ( v17 != v18 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v17 + 80LL))(
        *v17,
        ((unsigned __int64)this + 112) & -(__int64)((CGradientBrush *)((char *)this + 104) != 0LL));
      ++v17;
    }
    detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 128);
  }
  v9 = *(CD2DResource ***)v8;
  v10 = (CD2DResource **)*((_QWORD *)v8 + 1);
  while ( v9 != v10 )
  {
    v11 = *(__int64 (**)(void))(*(_QWORD *)*v9 + 40LL);
    if ( (char *)v11 == (char *)CD2DResource::GetDevice )
      Device = CD2DResource::GetDevice(*v9);
    else
      Device = (struct CD3DDevice *)v11();
    if ( Device == v7 )
    {
      v13 = (struct ID2D1RadialGradientBrush *)*((_QWORD *)*v9 + 9);
      (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *))(*(_QWORD *)v13 + 8LL))(v13);
LABEL_9:
      v14 = 0LL;
      *a3 = v13;
      goto LABEL_10;
    }
    ++v9;
  }
  v19 = CGradientBrush::Generate(this, v7, (const struct CGradientSource::RetrievalParams *)v20);
  v4 = v19;
  if ( v19 >= 0 )
  {
    v13 = v21;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x1F8u, 0LL);
  v14 = (__int64)v21;
LABEL_10:
  if ( v14 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v4;
}
