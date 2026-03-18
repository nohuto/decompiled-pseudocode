/*
 * XREFs of ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x18013F240
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180061E9C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ @ 0x18013F3A0 (-GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801D4228 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGradientSource::FindExistingGradient(
        CGradientSource *this,
        struct CD3DDevice *a2,
        char a3,
        const struct CGradientSource::RetrievalParams *a4)
{
  char v7; // r15
  CD2DResource **v8; // rbx
  CD2DResource **v9; // rsi
  __int64 (*v10)(void); // rax
  struct CD3DDevice *Device; // rax
  __int64 v12; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // r13
  char *v18; // rdx

  v7 = 1;
  if ( a3 )
  {
    v15 = *((_QWORD *)this + 2);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
    }
    v16 = (_QWORD *)*((_QWORD *)this + 3);
    v17 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v16 != v17 )
    {
      v18 = (char *)this + 8;
      if ( !this )
        v18 = 0LL;
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v16 + 80LL))(*v16, v18);
      ++v16;
    }
    detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 24);
  }
  if ( *(_QWORD *)a4 )
  {
    v14 = *((_QWORD *)this + 2);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      **(_QWORD **)a4 = *((_QWORD *)this + 2);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( !*((_QWORD *)a4 + 1) )
    return v7;
  v8 = (CD2DResource **)*((_QWORD *)this + 3);
  v9 = (CD2DResource **)*((_QWORD *)this + 4);
  while ( v8 != v9 )
  {
    v10 = *(__int64 (**)(void))(*(_QWORD *)*v8 + 40LL);
    if ( (char *)v10 == (char *)CD2DResource::GetDevice )
      Device = CD2DResource::GetDevice(*v8);
    else
      Device = (struct CD3DDevice *)v10();
    if ( Device == a2 )
    {
      v12 = *((_QWORD *)*v8 + 9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      **((_QWORD **)a4 + 1) = v12;
      return v7;
    }
    ++v8;
  }
  return 0;
}
