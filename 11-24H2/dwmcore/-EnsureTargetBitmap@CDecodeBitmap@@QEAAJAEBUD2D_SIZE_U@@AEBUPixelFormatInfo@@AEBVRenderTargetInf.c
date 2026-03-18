/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18005C0E8
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18005D3C0 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8194 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800596A0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005A870 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18005A9B0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x18005BA8C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x18005BD3C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18005C530 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x18005C5E0 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18005CAAC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA60 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUPix.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAC0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        CDecodeBitmap *this,
        struct D3D11_SUBRESOURCE_DATA *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4)
{
  unsigned int v5; // r14d
  __int64 v6; // rcx
  void (__fastcall *v10)(__int64, CD3DDevice **); // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(__int64, struct IDeviceTextureTarget **); // rax
  int v14; // eax
  int Device; // eax
  CD3DDevice *v17; // rdi
  int DeviceTextureTarget; // eax
  struct IDeviceTextureTarget *v19; // rbx
  struct RenderTargetInfo *v20; // [rsp+20h] [rbp-40h]
  CD3DDevice *v21; // [rsp+30h] [rbp-30h] BYREF
  const char *v22; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+40h] [rbp-20h]
  struct IDeviceTextureTarget *v24[2]; // [rsp+48h] [rbp-18h] BYREF

  v5 = 0;
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    v10 = *(void (__fastcall **)(__int64, CD3DDevice **))(*(_QWORD *)v6 + 88LL);
    if ( (char *)v10 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v6, &v21);
    else
      v10(v6, &v21);
    if ( a2->pSysMem != v21 )
      goto LABEL_14;
    v11 = *((_QWORD *)this + 15);
    if ( v11 )
    {
      v12 = v11 + 8;
      v13 = *(void (__fastcall **)(__int64, struct IDeviceTextureTarget **))(*(_QWORD *)v12 + 24LL);
      if ( (char *)v13 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
        IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v12, v24);
      else
        v13(v12, v24);
      v14 = (int)v24[0];
    }
    else
    {
      v14 = 0;
    }
    if ( *(_DWORD *)a3 == v14
      && *((_BYTE *)a4 + 20) == CRenderTargetBitmap::IsHardwareProtected((CDecodeBitmap *)((char *)this + 80)) )
    {
      CRenderTargetBitmap::SetAlphaMode((CDecodeBitmap *)((char *)this + 80), *((enum DXGI_ALPHA_MODE *)a3 + 1));
      CRenderTargetBitmap::SetColorSpace((CDecodeBitmap *)((char *)this + 80), *((_DWORD *)a3 + 2));
      CRenderTargetBitmap::SetDisplayId((__int64)this + 80, *((_DWORD *)a4 + 2));
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
    v21 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v21);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)a4, &v21);
    v5 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x5Du, 0LL);
    }
    else
    {
      v24[0] = 0LL;
      v22 = "DWM Rendertarget (DecodeBitmap)";
      v23 = 31;
      v20 = a4;
      v17 = v21;
      DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                              v21,
                              (const struct CResourceTag *)&v22,
                              a2,
                              a3,
                              v20,
                              v24);
      v5 = DeviceTextureTarget;
      if ( DeviceTextureTarget >= 0 )
      {
        v19 = v24[0];
        CRenderTargetBitmap::Initialize(this, v24[0]);
        *((_BYTE *)this + 136) = 0;
        if ( v19 )
          (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v19 + 16LL))(v19);
        if ( v17 )
          CD3DDevice::Release(v17);
        return v5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTextureTarget, 0x64u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v24);
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v21);
  }
  return v5;
}
