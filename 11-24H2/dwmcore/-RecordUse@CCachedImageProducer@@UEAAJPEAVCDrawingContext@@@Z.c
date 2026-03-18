/*
 * XREFs of ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001D1E0
 * Callers:
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001C3B0 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180146CD0 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z @ 0x1801A3C50 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001DFD0 (-clear_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default.c)
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x18001E3F0 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ @ 0x18001E4A0 (-IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18006D684 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 *     ??$emplace_back@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x1800FDBC4 (--$emplace_back@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCach.c)
 *     ?RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801B1DF0 (-RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedImageProducer::RecordUse(CCachedImageProducer *this, struct CDrawingContext *a2)
{
  __int64 *v2; // r15
  char v4; // r13
  __int64 v5; // rax
  _QWORD *v6; // r12
  CRenderTargetBitmap ***v7; // rdi
  __int64 v8; // rsi
  CRenderTargetBitmap **v9; // rbx
  CRenderTargetBitmap *v10; // rcx
  __int64 (*v11)(void); // rax
  int IsValid; // eax
  __int64 v13; // rdi
  CRenderTargetBitmap *v14; // rcx
  __int64 (__fastcall *v15)(CRenderTargetBitmap *, _BYTE *); // rax
  float *RenderTargetInfo; // rax
  float *v17; // rcx
  int v18; // eax
  CDeviceTextureTarget *v19; // rax
  __int64 v20; // rdx
  bool (__fastcall *v21)(CDeviceTextureTarget *__hidden); // rdx
  CDeviceTextureTarget *v22; // rcx
  char IsProtected; // al
  CRenderTargetBitmap *v24; // rcx
  __int64 (__fastcall *v25)(CRenderTargetBitmap *, _BYTE *); // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64 *, struct CDrawingContext *, CRenderTargetBitmap ***); // rax
  unsigned int v29; // ebx
  CRenderTargetBitmap **v30; // rdx
  CRenderTargetBitmap *v31; // rcx
  __int64 (__fastcall *v32)(CRenderTargetBitmap *__hidden, struct CDrawingContext *); // rax
  int v33; // eax
  __int64 v35; // rdx
  CRenderTargetBitmap ***v36; // [rsp+20h] [rbp-60h]
  CRenderTargetBitmap **v37; // [rsp+28h] [rbp-58h] BYREF
  char v38; // [rsp+30h] [rbp-50h]
  _BYTE v39[24]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v40[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  CRenderTargetBitmap **v42; // [rsp+C0h] [rbp+40h] BYREF
  CRenderTargetBitmap **v43; // [rsp+C8h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this - 16);
  v4 = *((_BYTE *)g_pComposition + 6466);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v6 = v2 + 4;
  v7 = (CRenderTargetBitmap ***)v2[4];
  v8 = v5;
  while ( v7 != (CRenderTargetBitmap ***)v2[5] )
  {
    v9 = *v7;
    v10 = **v7;
    v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 24LL);
    if ( (char *)v11 == (char *)CRenderTargetBitmap::IsValid )
      IsValid = CRenderTargetBitmap::IsValid(v10);
    else
      IsValid = v11();
    if ( IsValid < 0 )
      goto LABEL_6;
    v14 = *v9;
    v15 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, _BYTE *))(*(_QWORD *)*v9 + 88LL);
    if ( (char *)v15 == (char *)CRenderTargetBitmap::GetRenderTargetInfo )
      RenderTargetInfo = (float *)CRenderTargetBitmap::GetRenderTargetInfo(v14, v39);
    else
      RenderTargetInfo = (float *)v15(v14, v39);
    v17 = RenderTargetInfo;
    if ( *(_DWORD *)RenderTargetInfo == *(_DWORD *)v8
      && *((_DWORD *)RenderTargetInfo + 1) == *(_DWORD *)(v8 + 4)
      && ((v18 = *((_DWORD *)RenderTargetInfo + 2), v18 == -1) || v18 == *(_DWORD *)(v8 + 8)
                                                               || *(_DWORD *)(v8 + 8) == -3)
      && (v17[4] != 0.0) == (*(float *)(v8 + 16) != 0.0)
      && (!*((_BYTE *)v17 + 20) || *(_BYTE *)(v8 + 20)) )
    {
      v19 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)*v9 + 144LL))(*v9);
      v20 = *(_QWORD *)v19;
      if ( v4 )
      {
        v21 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v20 + 160);
        v22 = v19;
        if ( (char *)v21 == (char *)CDeviceTextureTarget::IsProtected )
        {
          IsProtected = CDeviceTextureTarget::IsProtected(v19);
          goto LABEL_17;
        }
      }
      else
      {
        v21 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v20 + 176);
        v22 = v19;
        if ( v21 == CDeviceTextureTarget::IsBlackedOutForReadback )
        {
          IsProtected = CDeviceTextureTarget::IsBlackedOutForReadback(v19);
          goto LABEL_17;
        }
      }
      IsProtected = v21(v22);
LABEL_17:
      if ( IsProtected )
        goto LABEL_41;
      v24 = *v9;
      v25 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, _BYTE *))(*(_QWORD *)*v9 + 88LL);
      if ( (char *)v25 == (char *)CRenderTargetBitmap::GetRenderTargetInfo )
        v26 = CRenderTargetBitmap::GetRenderTargetInfo(v24, v40);
      else
        v26 = v25(v24, v40);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v8 + 16) - *(float *)(v26 + 16)) & _xmm) <= 0.0000011920929 )
        goto LABEL_28;
LABEL_6:
      v13 = ((__int64)v7 - *v6) >> 3;
      detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2 + 4,
        v13,
        1LL);
      v7 = (CRenderTargetBitmap ***)(*v6 + 8 * v13);
    }
    else
    {
LABEL_41:
      ++v7;
    }
  }
  v27 = *v2;
  v42 = 0LL;
  v37 = 0LL;
  v36 = &v42;
  v28 = *(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, CRenderTargetBitmap ***))(v27 + 96);
  v38 = 1;
  v29 = v28(v2, a2, &v37);
  if ( v38 )
  {
    v30 = v42;
    v42 = v37;
    if ( v30 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
  }
  if ( (v29 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
      (const char *)v29,
      (int)&v42);
    if ( v42 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
    v35 = 48LL;
    goto LABEL_38;
  }
  v9 = v42;
  v42 = 0LL;
  v43 = v9;
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::emplace_back<std::unique_ptr<CCachedImageProducer::CCachedRealization>>(
    v2 + 4,
    &v43);
  if ( v42 )
    std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
LABEL_28:
  v31 = (CRenderTargetBitmap *)((char *)*v9 + 8);
  v32 = *(__int64 (__fastcall **)(CRenderTargetBitmap *__hidden, struct CDrawingContext *))(*(_QWORD *)v31 + 88LL);
  if ( v32 == CRenderTargetBitmap::RecordUse )
    v33 = CRenderTargetBitmap::RecordUse(v31, a2);
  else
    v33 = v32(v31, a2);
  v29 = v33;
  if ( v33 >= 0 )
    return 0LL;
  v35 = 50LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
    (const char *)v29,
    (int)v36);
  return v29;
}
