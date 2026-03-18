/*
 * XREFs of ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18001BFC0
 * Callers:
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C7C60 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801C7D10 (-GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001DFD0 (-clear_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default.c)
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x18001E3F0 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ @ 0x18001E4A0 (-IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18006D684 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 *     ??$emplace_back@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x1800FDBC4 (--$emplace_back@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCach.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedImageProducer::EnsureRealizationInternal(
        CCachedImageProducer *this,
        struct CDrawingContext *a2,
        const struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v6; // rax
  _QWORD *v7; // r15
  CRenderTargetBitmap ***v8; // rbx
  __int64 v9; // rsi
  CRenderTargetBitmap **v10; // rdi
  CRenderTargetBitmap *v11; // rcx
  __int64 (*v12)(void); // rax
  int IsValid; // eax
  __int64 v14; // rbx
  CRenderTargetBitmap *v15; // rcx
  __int64 (__fastcall *v16)(CRenderTargetBitmap *, const struct CCachedImageProducer::CCachedRealization ***); // rax
  float *RenderTargetInfo; // rax
  float *v18; // rcx
  int v19; // eax
  CDeviceTextureTarget *v20; // rax
  __int64 v21; // rdx
  bool (__fastcall *v22)(CDeviceTextureTarget *__hidden); // rdx
  CDeviceTextureTarget *v23; // rcx
  char IsProtected; // al
  CRenderTargetBitmap *v25; // rcx
  __int64 (__fastcall *v26)(CRenderTargetBitmap *, const struct CCachedImageProducer::CCachedRealization ***); // rax
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 (__fastcall *v30)(CCachedImageProducer *, struct CDrawingContext *, const struct CCachedImageProducer::CCachedRealization **); // rax
  int v31; // ebx
  const struct CCachedImageProducer::CCachedRealization *v32; // rdx
  const struct CCachedImageProducer::CCachedRealization *v33; // rax
  const struct CCachedImageProducer::CCachedRealization **v34; // [rsp+20h] [rbp-30h] BYREF
  const struct CCachedImageProducer::CCachedRealization *v35; // [rsp+28h] [rbp-28h] BYREF
  char v36; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  const struct CCachedImageProducer::CCachedRealization *v38; // [rsp+90h] [rbp+40h] BYREF
  const struct CCachedImageProducer::CCachedRealization *v39; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v38) = *((_BYTE *)g_pComposition + 6466);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v7 = (_QWORD *)((char *)this + 32);
  v8 = (CRenderTargetBitmap ***)*((_QWORD *)this + 4);
  v9 = v6;
  while ( v8 != *((CRenderTargetBitmap ****)this + 5) )
  {
    v10 = *v8;
    v11 = **v8;
    v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 24LL);
    if ( (char *)v12 == (char *)CRenderTargetBitmap::IsValid )
      IsValid = CRenderTargetBitmap::IsValid(v11);
    else
      IsValid = v12();
    if ( IsValid < 0 )
      goto LABEL_6;
    v15 = *v10;
    v16 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct CCachedImageProducer::CCachedRealization ***))(*(_QWORD *)*v10 + 88LL);
    if ( (char *)v16 == (char *)CRenderTargetBitmap::GetRenderTargetInfo )
      RenderTargetInfo = (float *)CRenderTargetBitmap::GetRenderTargetInfo(v15, &v34);
    else
      RenderTargetInfo = (float *)v16(v15, &v34);
    v18 = RenderTargetInfo;
    if ( *(_DWORD *)RenderTargetInfo == *(_DWORD *)v9
      && *((_DWORD *)RenderTargetInfo + 1) == *(_DWORD *)(v9 + 4)
      && ((v19 = *((_DWORD *)RenderTargetInfo + 2), v19 == -1) || v19 == *(_DWORD *)(v9 + 8)
                                                               || *(_DWORD *)(v9 + 8) == -3)
      && (v18[4] != 0.0) == (*(float *)(v9 + 16) != 0.0)
      && (!*((_BYTE *)v18 + 20) || *(_BYTE *)(v9 + 20)) )
    {
      v20 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)*v10 + 144LL))(*v10);
      v21 = *(_QWORD *)v20;
      if ( (_BYTE)v38 )
      {
        v22 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v21 + 160);
        v23 = v20;
        if ( (char *)v22 == (char *)CDeviceTextureTarget::IsProtected )
        {
          IsProtected = CDeviceTextureTarget::IsProtected(v20);
          goto LABEL_17;
        }
      }
      else
      {
        v22 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v21 + 176);
        v23 = v20;
        if ( v22 == CDeviceTextureTarget::IsBlackedOutForReadback )
        {
          IsProtected = CDeviceTextureTarget::IsBlackedOutForReadback(v20);
          goto LABEL_17;
        }
      }
      IsProtected = v22(v23);
LABEL_17:
      if ( IsProtected )
        goto LABEL_37;
      v25 = *v10;
      v26 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct CCachedImageProducer::CCachedRealization ***))(*(_QWORD *)*v10 + 88LL);
      if ( (char *)v26 == (char *)CRenderTargetBitmap::GetRenderTargetInfo )
        v27 = CRenderTargetBitmap::GetRenderTargetInfo(v25, &v34);
      else
        v27 = v26(v25, &v34);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v9 + 16) - *(float *)(v27 + 16)) & _xmm) <= 0.0000011920929 )
      {
        *a3 = (const struct CCachedImageProducer::CCachedRealization *)v10;
        return 0LL;
      }
LABEL_6:
      v14 = ((__int64)v8 - *v7) >> 3;
      detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 32,
        v14,
        1LL);
      v8 = (CRenderTargetBitmap ***)(*v7 + 8 * v14);
    }
    else
    {
LABEL_37:
      ++v8;
    }
  }
  v29 = *(_QWORD *)this;
  v34 = &v39;
  v39 = 0LL;
  v35 = 0LL;
  v30 = *(__int64 (__fastcall **)(CCachedImageProducer *, struct CDrawingContext *, const struct CCachedImageProducer::CCachedRealization **))(v29 + 96);
  v36 = 1;
  v31 = v30(this, a2, &v35);
  if ( v36 )
  {
    v32 = *v34;
    *v34 = v35;
    if ( v32 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
  }
  if ( v31 >= 0 )
  {
    v33 = v39;
    *a3 = v39;
    v38 = v33;
    v39 = 0LL;
    detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::emplace_back<std::unique_ptr<CCachedImageProducer::CCachedRealization>>(
      (char *)this + 32,
      &v38);
    if ( v39 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x81,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
    (const char *)(unsigned int)v31,
    (int)v34);
  if ( v39 )
    std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
  return (unsigned int)v31;
}
