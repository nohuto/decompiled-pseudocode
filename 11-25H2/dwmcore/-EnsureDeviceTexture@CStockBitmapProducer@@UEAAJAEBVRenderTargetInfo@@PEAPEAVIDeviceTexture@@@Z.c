/*
 * XREFs of ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801DB3D0
 * Callers:
 *     ?GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180236F80 (-GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000D28C (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180040190 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C7F48 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x1801DB664 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801DBA64 (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     gsl::final_action__lambda_6a4b919438eee03480f86c448c6d57d6___::_final_action__lambda_6a4b919438eee03480f86c448c6d57d6___ @ 0x18029038C (gsl--final_action__lambda_6a4b919438eee03480f86c448c6d57d6___--_final_action__lambda_6a4b919438e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v11; // eax
  __int64 v12; // rax
  struct CDrawingContext *v13; // rbx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  struct CD3DDevice *v17; // [rsp+40h] [rbp-30h] BYREF
  struct CCachedImageProducer::CCachedRealization *v18; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v19[12]; // [rsp+50h] [rbp-20h] BYREF
  const char *v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  CGlobalDrawingContext *v23; // [rsp+A0h] [rbp+30h] BYREF
  struct CDrawingContext *v24; // [rsp+B8h] [rbp+48h] BYREF

  v3 = (CStockBitmapProducer *)((char *)this - 16);
  RealizationInternal = CCachedImageProducer::FindRealizationInternal((CStockBitmapProducer *)((char *)this - 16), a2);
  v18 = RealizationInternal;
  if ( RealizationInternal )
    return (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)RealizationInternal + 8LL) + 104LL))(
             *(_QWORD *)RealizationInternal + 8LL,
             a2,
             a3);
  v17 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v17);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)a2, &v17);
  v10 = Device;
  if ( Device >= 0 )
  {
    *(_DWORD *)v19 = 0;
    *(_QWORD *)&v19[4] = 1LL;
    *(_DWORD *)v19 = RenderTargetInfo::IsHDR(a2) ? 10 : 87;
    GetPixelFormatColorSpace(*(int *)v19, (enum DXGI_COLOR_SPACE_TYPE *)&v19[8]);
    v23 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v23);
    v24 = (struct CDrawingContext *)*((_QWORD *)this + 1);
    v21 = 21;
    v20 = "DWM stock bitmap temp";
    v11 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v17,
            (const struct CResourceTag *)&v20,
            (struct D2D_SIZE_U *)&v24,
            (struct PixelFormatInfo *)v19,
            a2,
            1,
            &v23);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v24 = 0LL;
      CDrawingContext::Create(&v24);
      v12 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v23 + 144LL))(v23);
      v13 = v24;
      v14 = CDrawingContext::BeginFrame(
              (__int64)v24,
              (v12 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64),
              0LL,
              0LL,
              0,
              0LL);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
          (const char *)(unsigned int)v14);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        v10 = v15;
        goto LABEL_12;
      }
      *(_QWORD *)v19 = v13;
      v19[8] = 1;
      v16 = CCachedImageProducer::EnsureRealizationInternal(v3, v13, &v18);
      v10 = v16;
      if ( v16 >= 0 )
      {
        gsl::final_action__lambda_6a4b919438eee03480f86c448c6d57d6___::_final_action__lambda_6a4b919438eee03480f86c448c6d57d6___(v19);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v17);
        RealizationInternal = v18;
        return (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)RealizationInternal + 8LL) + 104LL))(
                 *(_QWORD *)RealizationInternal + 8LL,
                 a2,
                 a3);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
        (const char *)(unsigned int)v16);
      gsl::final_action__lambda_6a4b919438eee03480f86c448c6d57d6___::_final_action__lambda_6a4b919438eee03480f86c448c6d57d6___(v19);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
        (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
    (const char *)(unsigned int)Device);
LABEL_12:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v17);
  return v10;
}
