/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180060F2C
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180060C58 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800607B0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180155944 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802B7A4C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  UINT32 v1; // eax
  enum DXGI_COLOR_SPACE_TYPE v3; // ebx
  int Device; // eax
  CD3DDevice *v5; // rbx
  unsigned int v6; // edi
  struct IRenderTargetBitmap **v7; // r14
  int v8; // eax
  CDeviceManager *v10; // rcx
  int WarpDevice; // eax
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v14; // [rsp+48h] [rbp-38h]
  const char *v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  struct _LUID v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+70h] [rbp-10h]
  char v21; // [rsp+74h] [rbp-Ch]
  __int16 v22; // [rsp+75h] [rbp-Bh]
  char v23; // [rsp+77h] [rbp-9h]
  CD3DDevice *v24; // [rsp+B0h] [rbp+30h] BYREF
  struct D2D_SIZE_U v25; // [rsp+B8h] [rbp+38h] BYREF

  v1 = *((_DWORD *)this + 481);
  v3 = *((_DWORD *)this + 485);
  v13 = *(_QWORD *)((char *)this + 1932);
  v25.width = v1;
  v25.height = *((_DWORD *)this + 482);
  v14 = v3;
  if ( (_DWORD)v13 == 88 )
    v13 = 0x300000057LL;
  CDisplayManager::GetPrimaryAdapterLuid(this);
  v19 = 0;
  v18 = -3;
  if ( IsDXGIColorSpaceHDR(v3) )
    v20 = 1065353216;
  else
    v20 = 0;
  v21 = 0;
  v24 = 0LL;
  v22 = 0;
  v23 = 0;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v24);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v17, &v24);
  v5 = v24;
  v6 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x13Au, 0LL);
  }
  else
  {
    v7 = (struct IRenderTargetBitmap **)((char *)this + 64);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((char *)this + 64);
    v15 = "DWM Scratch Rendertarget (capturebits)";
    v16 = 38;
    v8 = CD3DDevice::CreateRenderTargetBitmap(
           (__int64)v5,
           (const struct CResourceTag *)&v15,
           &v25,
           (struct PixelFormatInfo *)&v13,
           (struct RenderTargetInfo *)&v17,
           1,
           (struct IRenderTargetBitmap **)this + 8);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x142u, 0LL);
      v24 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v24);
      WarpDevice = CDeviceManager::GetWarpDevice(v10, &v24);
      v6 = WarpDevice;
      if ( WarpDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WarpDevice, 0x148u, 0LL);
      }
      else
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v7);
        v15 = "DWM Scratch Rendertarget (capturebits)";
        v16 = 38;
        v12 = CD3DDevice::CreateRenderTargetBitmap(
                (__int64)v24,
                (const struct CResourceTag *)&v15,
                &v25,
                (struct PixelFormatInfo *)&v13,
                (struct RenderTargetInfo *)&v17,
                1,
                v7);
        v6 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x14Fu, 0LL);
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v24);
    }
  }
  if ( v5 )
    CD3DDevice::Release(v5);
  return v6;
}
