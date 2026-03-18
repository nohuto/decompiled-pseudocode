/*
 * XREFs of ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C7C60
 * Callers:
 *     ?GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18022B180 (-GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000C958 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18001BFC0 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005D350 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180061250 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801C7F48 (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___ @ 0x180284DEC (gsl--final_action__lambda_21858384f40d571ee451d04104df5963___--_final_action__lambda_21858384f40.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStockBitmapProducer::EnsureDeviceTexture(
        CStockBitmapProducer *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CCachedImageProducer *v3; // r14
  struct CCachedImageProducer::CCachedRealization *RealizationInternal; // rax
  int Device; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  struct CDrawingContext *v15; // rbx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  struct CD3DDevice *v19; // [rsp+40h] [rbp-30h] BYREF
  struct CCachedImageProducer::CCachedRealization *v20; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v21[12]; // [rsp+50h] [rbp-20h] BYREF
  const char *v22; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  CGlobalDrawingContext *v25; // [rsp+A0h] [rbp+30h] BYREF
  struct CDrawingContext *v26; // [rsp+B8h] [rbp+48h] BYREF

  v3 = (CStockBitmapProducer *)((char *)this - 16);
  RealizationInternal = CCachedImageProducer::FindRealizationInternal((CStockBitmapProducer *)((char *)this - 16), a2);
  v20 = RealizationInternal;
  if ( RealizationInternal )
    return (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)RealizationInternal + 8LL) + 104LL))(
             *(_QWORD *)RealizationInternal + 8LL,
             a2,
             a3);
  v19 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v19);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)a2, &v19);
  v10 = Device;
  if ( Device >= 0 )
  {
    *(_DWORD *)v21 = 0;
    *(_QWORD *)&v21[4] = 1LL;
    *(_DWORD *)v21 = RenderTargetInfo::IsHDR(a2) ? 10 : 87;
    GetPixelFormatColorSpace(*(int *)v21, (enum DXGI_COLOR_SPACE_TYPE *)&v21[8]);
    v25 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v25, v11, v12);
    v26 = (struct CDrawingContext *)*((_QWORD *)this + 1);
    v23 = 21;
    v22 = "DWM stock bitmap temp";
    v13 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v19,
            (const struct CResourceTag *)&v22,
            (const struct D2D_SIZE_U *)&v26,
            (struct PixelFormatInfo *)v21,
            a2,
            1,
            &v25);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v26 = 0LL;
      CDrawingContext::Create(&v26);
      v14 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v25 + 144LL))(v25);
      v15 = v26;
      v16 = CDrawingContext::BeginFrame(
              (__int64)v26,
              (v14 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64),
              0LL,
              0LL,
              0,
              0LL);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
          (const char *)(unsigned int)v16);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        v10 = v17;
        goto LABEL_12;
      }
      *(_QWORD *)v21 = v15;
      v21[8] = 1;
      v18 = CCachedImageProducer::EnsureRealizationInternal(v3, v15, &v20);
      v10 = v18;
      if ( v18 >= 0 )
      {
        gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___(v21);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v19);
        RealizationInternal = v20;
        return (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)RealizationInternal + 8LL) + 104LL))(
                 *(_QWORD *)RealizationInternal + 8LL,
                 a2,
                 a3);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
        (const char *)(unsigned int)v18);
      gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___(v21);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
        (const char *)(unsigned int)v13);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
    (const char *)(unsigned int)Device);
LABEL_12:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v19);
  return v10;
}
