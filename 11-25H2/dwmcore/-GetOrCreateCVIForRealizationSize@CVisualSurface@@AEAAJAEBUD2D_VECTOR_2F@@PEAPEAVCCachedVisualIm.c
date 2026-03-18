/*
 * XREFs of ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18016F0D0
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18016ED14 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180007F18 (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18016F2A0 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?clear_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180185670 (-clear_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurfac.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180185A14 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@-$vector_.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::GetOrCreateCVIForRealizationSize(
        CVisualSurface *this,
        const struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  struct CCachedVisualImage *v6; // rdi
  int v7; // r13d
  int v8; // r14d
  _QWORD *v9; // r15
  __int64 v10; // rbx
  int *v11; // rsi
  CCachedVisualImage *v12; // rcx
  struct D2D_SIZE_U (__fastcall *v13)(CCachedVisualImage *__hidden); // rax
  __int64 v14; // rbx
  struct CCachedVisualImage *v15; // r14
  CGlobalComposition *CurrentFrameId; // rax
  struct CComposition *v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  CGlobalComposition *v21; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CCachedVisualImage *v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+6Ch] [rbp+14h]

  v6 = 0LL;
  v7 = (int)floorf_0(a2->x + 0.5);
  v8 = (int)floorf_0(a2->y + 0.5);
  v9 = (_QWORD *)((char *)this + 88);
  v10 = *((_QWORD *)this + 11);
  LODWORD(v23) = v8;
  while ( v10 != *((_QWORD *)this + 12) )
  {
    v11 = *(int **)v10;
    v12 = (CCachedVisualImage *)(*(_QWORD *)v10 + 80LL);
    v13 = *(struct D2D_SIZE_U (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)v12 + 32LL);
    if ( v13 == CCachedVisualImage::GetSize )
      CCachedVisualImage::GetSize(v12);
    else
      ((void (__fastcall *)(CCachedVisualImage *, int *))v13)(v12, &v24);
    if ( v7 == v24 && v8 == v25 )
    {
      v15 = v6;
      v6 = (struct CCachedVisualImage *)v11;
      (*(void (__fastcall **)(int *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( v15 )
        (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v15 + 16LL))(v15);
      CurrentFrameId = GetCurrentFrameId();
      v8 = (int)v23;
      *(_QWORD *)(v10 + 8) = CurrentFrameId;
LABEL_13:
      v10 += 16LL;
    }
    else
    {
      if ( v11[2] > 1 || (unsigned __int64)GetCurrentFrameId() - *(_QWORD *)(v10 + 8) <= 0xA )
        goto LABEL_13;
      v14 = (v10 - *v9) >> 4;
      detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 88,
        v14,
        1LL);
      v10 = *v9 + 16 * v14;
    }
  }
  if ( v6 )
    goto LABEL_15;
  v18 = (struct CComposition *)*((_QWORD *)this + 3);
  v23 = 0LL;
  v19 = CCachedVisualImage::CreateForVisualSurface(v18, &v23);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v19);
    if ( v23 )
      (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v23 + 16LL))(v23);
    return v20;
  }
  else
  {
    v6 = v23;
    if ( v23 )
      (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v23 + 8LL))(v23);
    v23 = v6;
    v21 = GetCurrentFrameId();
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,unsigned __int64>(
      (char *)this + 88,
      &v23,
      v21);
LABEL_15:
    *a3 = v6;
    return 0LL;
  }
}
