/*
 * XREFs of ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180284F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180055E00 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800FD434 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MakeStandardCachedRealization@CCachedImageProducer@@KA?AV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FA370 (-MakeStandardCachedRealization@CCachedImageProducer@@KA-AV-$unique_ptr@VCCachedRealization@CCach.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___ @ 0x180284E0C (gsl--final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___--_final_action__lambda_ed3bd09926e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStockBitmapProducer::ProduceRealization(
        CStockBitmapProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  struct RenderTargetInfo *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct D2D_SIZE_U v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 (__fastcall **v16)(char *, char *); // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  struct CCachedImageProducer::CCachedRealization **StandardCachedRealization; // rax
  struct CCachedImageProducer::CCachedRealization *v23; // rcx
  CGlobalDrawingContext *v25; // [rsp+40h] [rbp-40h] BYREF
  struct CDrawingContext *v26; // [rsp+48h] [rbp-38h] BYREF
  char v27; // [rsp+50h] [rbp-30h]
  const char *v28; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+60h] [rbp-20h]
  _BYTE v30[4]; // [rsp+68h] [rbp-18h] BYREF
  int v31; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 24LL))(
    *((_QWORD *)a2 + 4) + 8LL,
    v30);
  v31 = 1;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v25 = 0LL;
  v7 = *((_QWORD *)a2 + 5);
  v8 = (struct RenderTargetInfo *)v6;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v25, v9, v10);
  v11 = (struct D2D_SIZE_U)*((_QWORD *)this + 3);
  v28 = "DWM stock bitmap";
  v26 = (struct CDrawingContext *)v11;
  v29 = 16;
  v12 = CD3DDevice::CreateRenderTargetBitmap(
          v7,
          (const struct CResourceTag *)&v28,
          (const struct D2D_SIZE_U *)&v26,
          (struct PixelFormatInfo *)v30,
          v8,
          0,
          &v25);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 113LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_9;
  }
  v15 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v25 + 144LL))(v25);
  v12 = CDrawingContext::PushRenderTarget(
          a2,
          (struct IDeviceTarget *)((v15 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v15 >> 64)));
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 116LL;
    goto LABEL_5;
  }
  v26 = a2;
  v16 = (__int64 (__fastcall **)(char *, char *))*((_QWORD *)a2 + 2);
  v27 = 1;
  v17 = (*v16)((char *)a2 + 16, (char *)this + 72);
  v13 = v17;
  if ( v17 >= 0 )
  {
    gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___(
      (__int64)&v26,
      v18,
      v19);
    StandardCachedRealization = (struct CCachedImageProducer::CCachedRealization **)CCachedImageProducer::MakeStandardCachedRealization(
                                                                                      &v26,
                                                                                      (__int64 *)&v25);
    v23 = *StandardCachedRealization;
    *StandardCachedRealization = 0LL;
    *a3 = v23;
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>((__int64 **)&v26);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)(unsigned int)v17);
    gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___(
      (__int64)&v26,
      v20,
      v21);
  }
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  return v13;
}
