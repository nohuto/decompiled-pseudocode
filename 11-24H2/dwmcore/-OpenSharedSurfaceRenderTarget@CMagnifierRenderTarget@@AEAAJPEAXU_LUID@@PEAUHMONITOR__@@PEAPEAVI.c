/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180283C10
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180283A6C (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802BC800 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x1802C02B4 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        void *a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  struct IRenderTargetBitmap **v5; // r14
  int v6; // esi
  int v10; // eax
  unsigned int v11; // edi
  int Device; // eax
  __int64 v13; // r8
  int RenderTargetBitmap; // eax
  struct CD3DDevice *v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  v6 = (int)a4;
  v16 = 0LL;
  *a5 = 0LL;
  if ( a4 )
  {
    v10 = CDisplayManager::ValidateLuidAndMonitor(this, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v10, 0x1DBu, 0LL);
      goto LABEL_9;
    }
  }
  else
  {
    v6 = -1;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v16);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a3, &v16);
  v11 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, Device, 0x1E3u, 0LL);
  }
  else
  {
    RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap(
                           v16,
                           a2,
                           v13,
                           *((unsigned int *)this + 33),
                           *((_DWORD *)this + 34),
                           v6,
                           0,
                           v5);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, RenderTargetBitmap, 0x1EBu, 0LL);
  }
LABEL_9:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v16);
  return v11;
}
