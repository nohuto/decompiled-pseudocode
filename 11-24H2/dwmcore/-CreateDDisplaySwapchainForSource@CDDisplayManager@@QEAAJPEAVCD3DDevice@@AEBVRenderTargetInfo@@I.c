/*
 * XREFs of ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802C27F4
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x1801586AC (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x1801EF074 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x180210444 (-EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ.c)
 *     ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x18022506C (-GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PE.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x18023EFE4 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??0DDisplayTargetResources@@QEAA@XZ @ 0x18023FE94 (--0DDisplayTargetResources@@QEAA@XZ.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x18023FED8 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180250300 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ @ 0x1802BF4DC (-InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x1802BF9B0 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IUD2D_SIZE_U@@@Z @ 0x1802C117C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUD.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  LPVOID v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  int updated; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v28[6]; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v29[2]; // [rsp+90h] [rbp-78h] BYREF
  int v30[12]; // [rsp+B8h] [rbp-50h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget *v31; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]
  struct CD3DDevice *v33; // [rsp+138h] [rbp+30h] BYREF

  v9 = 0;
  v33 = 0LL;
  memset(v29, 0, sizeof(v29));
  DDisplayTargetResources::DDisplayTargetResources((DDisplayTargetResources *)v30);
  v28[0] = 0x10000003CLL;
  v28[1] = 0LL;
  v28[2] = 0LL;
  v28[3] = 1LL;
  v28[4] = 0LL;
  v28[5] = 0LL;
  v27 = 0LL;
  Device = CDDisplayManager::EnsureDDisplayManager((CDDisplayManager *)0x10000003CLL);
  if ( Device < 0 )
  {
    v25 = 427;
    goto LABEL_21;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v33);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a3, &v33);
  if ( Device < 0 )
  {
    v25 = 432;
    goto LABEL_21;
  }
  Device = CDDisplayManager::GetDisplayDeviceAndTarget(
             (CDDisplayManager *)&g_DDisplayManager,
             *a3,
             a8,
             a4,
             (struct DDisplayTargetResources *)v30);
  if ( Device < 0 )
  {
    v25 = 439;
    goto LABEL_21;
  }
  Device = CDDisplayManager::CreateTaskPool(v14, v33, (__int64 **)v30, (struct DDisplayTaskPoolResources *)v29);
  if ( Device < 0 )
  {
    v25 = 445;
    goto LABEL_21;
  }
  RateInfoForTarget = CDDisplayManager::GetRateInfoForTarget(v15, v31, (struct RefreshRateInfo *)v28);
  v17 = RateInfoForTarget;
  if ( RateInfoForTarget >= 0 )
  {
    v20 = operator new(0x2A0uLL);
    if ( v20 )
    {
      v21 = CDDisplaySwapChain::CDDisplaySwapChain(
              (__int64)v20,
              &v33,
              (__int64 *)v29,
              (__int64)v30,
              a5,
              (const struct RenderTargetInfo *)a3,
              (struct RefreshRateInfo *)v28,
              a7,
              (__int64)*a6);
      v27 = v21;
      v22 = v21;
      if ( v21 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v21 + 8));
    }
    else
    {
      v22 = 0LL;
    }
    updated = CDDisplaySwapChain::EnsureDisplayBuffers((CDDisplaySwapChain *)v22);
    Device = updated;
    if ( updated >= 0 )
    {
      updated = CDDisplaySwapChain::UpdateRefreshRate((CDDisplaySwapChain *)(v22 + 24));
      Device = updated;
      if ( updated >= 0 )
      {
        CDDisplaySwapChain::InitializeVBlankWaitEventHandle((CDDisplaySwapChain *)v22);
        v27 = 0LL;
        *a9 = (struct CDDisplaySwapChain *)v22;
LABEL_22:
        v17 = v9;
        goto LABEL_23;
      }
      v24 = 48LL;
    }
    else
    {
      v24 = 46LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)updated);
    v25 = 463;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, v25, 0LL);
    v9 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)a2, Device, 2u);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
    (const char *)(unsigned int)RateInfoForTarget);
LABEL_23:
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>(
    &v27,
    v18,
    v19);
  DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v30);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)v29);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v33);
  return v17;
}
