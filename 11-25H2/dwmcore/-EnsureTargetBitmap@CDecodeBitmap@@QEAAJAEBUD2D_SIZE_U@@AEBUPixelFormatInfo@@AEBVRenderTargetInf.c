/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18003F30C
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180176E04 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802E1434 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x18003F290 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18003F750 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800408A0 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180040CC0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180040D70 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x180041010 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x180042E74 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1801C76BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUPixelFormatInfo@@XZ @ 0x1802D6CD0 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUPix.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        CDecodeBitmap *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4)
{
  unsigned int v5; // r14d
  __int64 v6; // rcx
  void (__fastcall *v10)(__int64, struct CD3DDevice **); // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(__int64, struct IDeviceTextureTarget **); // rax
  int v14; // eax
  struct _LUID v16; // rdx
  int Device; // eax
  CD3DDevice *v18; // rdi
  int DeviceTextureTarget; // eax
  struct IDeviceTextureTarget *v20; // rbx
  struct RenderTargetInfo *v21; // [rsp+20h] [rbp-40h]
  struct CD3DDevice *v22; // [rsp+30h] [rbp-30h] BYREF
  const char *v23; // [rsp+38h] [rbp-28h] BYREF
  int v24; // [rsp+40h] [rbp-20h]
  struct IDeviceTextureTarget *v25[2]; // [rsp+48h] [rbp-18h] BYREF

  v5 = 0;
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    v10 = *(void (__fastcall **)(__int64, struct CD3DDevice **))(*(_QWORD *)v6 + 88LL);
    if ( (char *)v10 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v6, &v22);
    else
      v10(v6, &v22);
    if ( (struct CD3DDevice *)*a2 != v22 )
      goto LABEL_14;
    v11 = *((_QWORD *)this + 15);
    if ( v11 )
    {
      v12 = v11 + 8;
      v13 = *(void (__fastcall **)(__int64, struct IDeviceTextureTarget **))(*(_QWORD *)v12 + 24LL);
      if ( (char *)v13 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
        IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v12, v25);
      else
        v13(v12, v25);
      v14 = (int)v25[0];
    }
    else
    {
      v14 = 0;
    }
    if ( *(_DWORD *)a3 == v14
      && *((_BYTE *)a4 + 20) == CRenderTargetBitmap::IsHardwareProtected((CDecodeBitmap *)((char *)this + 80)) )
    {
      CRenderTargetBitmap::SetAlphaMode((CDecodeBitmap *)((char *)this + 80), *((enum DXGI_ALPHA_MODE *)a3 + 1));
      CRenderTargetBitmap::SetColorSpace((CDecodeBitmap *)((char *)this + 80), *((enum DXGI_COLOR_SPACE_TYPE *)a3 + 2));
      CRenderTargetBitmap::SetDisplayId((char *)this + 80, *((unsigned int *)a4 + 2));
      CRenderTargetBitmap::SetSDRBoost((CDecodeBitmap *)((char *)this + 80), *((float *)a4 + 4));
    }
    else
    {
LABEL_14:
      CRenderTargetBitmap::ReleaseDeviceTarget(this);
    }
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v16 = *(struct _LUID *)a4;
    v22 = 0LL;
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v16, &v22);
    v5 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x5Du, 0LL);
    }
    else
    {
      v25[0] = 0LL;
      v23 = "DWM Rendertarget (DecodeBitmap)";
      v24 = 31;
      v21 = a4;
      v18 = v22;
      DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                              v22,
                              (const struct CResourceTag *)&v23,
                              a2,
                              a3,
                              v21,
                              v25);
      v5 = DeviceTextureTarget;
      if ( DeviceTextureTarget >= 0 )
      {
        v20 = v25[0];
        CRenderTargetBitmap::Initialize(this, v25[0]);
        *((_BYTE *)this + 136) = 0;
        if ( v20 )
          (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v18 )
          CD3DDevice::Release(v18);
        return v5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTextureTarget, 0x64u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v25);
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v22);
  }
  return v5;
}
