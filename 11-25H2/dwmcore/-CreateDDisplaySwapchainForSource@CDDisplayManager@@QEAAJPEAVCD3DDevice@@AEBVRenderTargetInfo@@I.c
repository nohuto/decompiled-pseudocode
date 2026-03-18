/*
 * XREFs of ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802CBB7C
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x1800FEBB8 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801C5270 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x1801FB564 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x18021BFE4 (-EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ.c)
 *     ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x18023087C (-GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PE.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x1802461A8 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??0DDisplayTargetResources@@QEAA@XZ @ 0x180246F94 (--0DDisplayTargetResources@@QEAA@XZ.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180246FD8 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18025B950 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ @ 0x1802C888C (-InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x1802C8D60 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IUD2D_SIZE_U@@@Z @ 0x1802CA50C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUD.c)
 */

__int64 __fastcall CDDisplayManager::CreateDDisplaySwapchainForSource(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        struct _LUID *a3,
        int a4,
        const struct PixelFormatInfo *a5,
        const struct D2D_SIZE_U *a6,
        unsigned int a7,
        void *a8,
        struct CDDisplaySwapChain **a9)
{
  unsigned int v9; // ebx
  int Device; // edi
  CDDisplayManager *v14; // rcx
  CDDisplayManager *v15; // rcx
  int RateInfoForTarget; // eax
  unsigned int v17; // edi
  LPVOID v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  int updated; // eax
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v26[6]; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v27[2]; // [rsp+90h] [rbp-78h] BYREF
  int v28[12]; // [rsp+B8h] [rbp-50h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget *v29; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]
  struct CD3DDevice *v31; // [rsp+138h] [rbp+30h] BYREF

  v9 = 0;
  v31 = 0LL;
  memset(v27, 0, sizeof(v27));
  DDisplayTargetResources::DDisplayTargetResources((DDisplayTargetResources *)v28);
  v26[0] = 0x10000003CLL;
  v26[1] = 0LL;
  v26[2] = 0LL;
  v26[3] = 1LL;
  v26[4] = 0LL;
  v26[5] = 0LL;
  v25 = 0LL;
  Device = CDDisplayManager::EnsureDDisplayManager((CDDisplayManager *)0x10000003CLL);
  if ( Device < 0 )
  {
    v23 = 427;
    goto LABEL_21;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v31);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a3, &v31);
  if ( Device < 0 )
  {
    v23 = 432;
    goto LABEL_21;
  }
  Device = CDDisplayManager::GetDisplayDeviceAndTarget(
             (CDDisplayManager *)&g_DDisplayManager,
             *a3,
             a8,
             a4,
             (struct DDisplayTargetResources *)v28);
  if ( Device < 0 )
  {
    v23 = 439;
    goto LABEL_21;
  }
  Device = CDDisplayManager::CreateTaskPool(v14, v31, (__int64 **)v28, (struct DDisplayTaskPoolResources *)v27);
  if ( Device < 0 )
  {
    v23 = 445;
    goto LABEL_21;
  }
  RateInfoForTarget = CDDisplayManager::GetRateInfoForTarget(v15, v29, (struct RefreshRateInfo *)v26);
  v17 = RateInfoForTarget;
  if ( RateInfoForTarget >= 0 )
  {
    v18 = operator new(0x2A0uLL);
    if ( v18 )
    {
      v19 = CDDisplaySwapChain::CDDisplaySwapChain(
              (__int64)v18,
              &v31,
              (__int64 *)v27,
              (__int64)v28,
              a5,
              (const struct RenderTargetInfo *)a3,
              (struct RefreshRateInfo *)v26,
              a7,
              (__int64)*a6);
      v25 = v19;
      v20 = v19;
      if ( v19 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v19 + 8));
    }
    else
    {
      v20 = 0LL;
    }
    updated = CDDisplaySwapChain::EnsureDisplayBuffers((CDDisplaySwapChain *)v20);
    Device = updated;
    if ( updated >= 0 )
    {
      updated = CDDisplaySwapChain::UpdateRefreshRate((CDDisplaySwapChain *)(v20 + 24));
      Device = updated;
      if ( updated >= 0 )
      {
        CDDisplaySwapChain::InitializeVBlankWaitEventHandle((CDDisplaySwapChain *)v20);
        v25 = 0LL;
        *a9 = (struct CDDisplaySwapChain *)v20;
LABEL_22:
        v17 = v9;
        goto LABEL_23;
      }
      v22 = 48LL;
    }
    else
    {
      v22 = 46LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)updated);
    v23 = 463;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, v23, 0LL);
    v9 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)a2, Device, 2u);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
    (const char *)(unsigned int)RateInfoForTarget);
LABEL_23:
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>(&v25);
  DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v28);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)v27);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v31);
  return v17;
}
