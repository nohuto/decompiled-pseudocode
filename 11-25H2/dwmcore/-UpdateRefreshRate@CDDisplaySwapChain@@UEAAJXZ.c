/*
 * XREFs of ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x1802C8D60
 * Callers:
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18028A410 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802CBB7C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@RefreshRateInfo@@QEAA_NAEBV1@@Z @ 0x18021E824 (-Update@RefreshRateInfo@@QEAA_NAEBV1@@Z.c)
 *     ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x18023087C (-GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PE.c)
 */

__int64 __fastcall CDDisplaySwapChain::UpdateRefreshRate(CDDisplaySwapChain *this)
{
  struct Windows::Devices::Display::Core::IDisplayTarget *v2; // rdx
  int RateInfoForTarget; // eax
  unsigned int v4; // edi
  char v6; // r10
  CGlobalComposition *v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]
  __int64 v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8[1] = 0LL;
  v8[2] = 0LL;
  v2 = (struct Windows::Devices::Display::Core::IDisplayTarget *)*((_QWORD *)this + 49);
  v8[0] = 0x10000003CLL;
  v10 = 0;
  v9 = 1;
  v11 = 0LL;
  v12 = 0LL;
  RateInfoForTarget = CDDisplayManager::GetRateInfoForTarget(this, v2, (struct RefreshRateInfo *)v8);
  v4 = RateInfoForTarget;
  if ( RateInfoForTarget >= 0 )
  {
    if ( RefreshRateInfo::Update((CDDisplaySwapChain *)((char *)this + 104), (const struct RefreshRateInfo *)v8) )
    {
      if ( *((_QWORD *)this + 19) )
        *((_QWORD *)this + 19) = 0LL;
      v7 = g_pComposition;
      if ( v6 != *((_DWORD *)this + 32) > 1u )
        *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
      *(_BYTE *)(*((_QWORD *)v7 + 77) + 749LL) = 1;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)RateInfoForTarget);
    return v4;
  }
}
