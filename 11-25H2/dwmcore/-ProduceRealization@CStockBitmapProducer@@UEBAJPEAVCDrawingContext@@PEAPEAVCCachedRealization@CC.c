/*
 * XREFs of ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802904A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800D8850 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800DD334 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MakeStandardCachedRealization@CCachedImageProducer@@KA?AV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180205FB0 (-MakeStandardCachedRealization@CCachedImageProducer@@KA-AV-$unique_ptr@VCCachedRealization@CCach.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___ @ 0x1802903AC (gsl--final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___--_final_action__lambda_ed3bd09926e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStockBitmapProducer::ProduceRealization(
        CStockBitmapProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  struct RenderTargetInfo *v8; // rbx
  struct D2D_SIZE_U v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 (__fastcall **v14)(char *, char *); // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  struct CCachedImageProducer::CCachedRealization **StandardCachedRealization; // rax
  struct CCachedImageProducer::CCachedRealization *v21; // rcx
  CGlobalDrawingContext *v23; // [rsp+40h] [rbp-40h] BYREF
  struct CDrawingContext *v24; // [rsp+48h] [rbp-38h] BYREF
  char v25; // [rsp+50h] [rbp-30h]
  const char *v26; // [rsp+58h] [rbp-28h] BYREF
  int v27; // [rsp+60h] [rbp-20h]
  _BYTE v28[4]; // [rsp+68h] [rbp-18h] BYREF
  int v29; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 24LL))(
    *((_QWORD *)a2 + 4) + 8LL,
    v28);
  v29 = 1;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v23 = 0LL;
  v7 = *((_QWORD *)a2 + 5);
  v8 = (struct RenderTargetInfo *)v6;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v23);
  v9 = (struct D2D_SIZE_U)*((_QWORD *)this + 3);
  v26 = "DWM stock bitmap";
  v24 = (struct CDrawingContext *)v9;
  v27 = 16;
  v10 = CD3DDevice::CreateRenderTargetBitmap(
          v7,
          (const struct CResourceTag *)&v26,
          (struct D2D_SIZE_U *)&v24,
          (struct PixelFormatInfo *)v28,
          v8,
          0,
          &v23);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 113LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  v13 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v23 + 144LL))(v23);
  v10 = CDrawingContext::PushRenderTarget(
          a2,
          (struct IDeviceTarget *)((v13 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 116LL;
    goto LABEL_5;
  }
  v24 = a2;
  v14 = (__int64 (__fastcall **)(char *, char *))*((_QWORD *)a2 + 2);
  v25 = 1;
  v15 = (*v14)((char *)a2 + 16, (char *)this + 72);
  v11 = v15;
  if ( v15 >= 0 )
  {
    gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___(
      (__int64)&v24,
      v16,
      v17);
    StandardCachedRealization = (struct CCachedImageProducer::CCachedRealization **)CCachedImageProducer::MakeStandardCachedRealization(
                                                                                      &v24,
                                                                                      (__int64 *)&v23);
    v21 = *StandardCachedRealization;
    *StandardCachedRealization = 0LL;
    *a3 = v21;
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>((__int64 **)&v24);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)(unsigned int)v15);
    gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___(
      (__int64)&v24,
      v18,
      v19);
  }
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v11;
}
