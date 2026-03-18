/*
 * XREFs of ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180171C74
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180171A70 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x180083F80 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z @ 0x1802C3E58 (-NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x1802C9298 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEA.c)
 */

__int64 __fastcall CDDisplaySwapChain::PrePresent(CDDisplaySwapChain *this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetImpl'::`2'::impl) )
      CD3DDevice::NotifyNoSequencePresent(
        *((CD3DDevice **)this + 8),
        *(struct _LUID *)((char *)this + 76),
        *((_DWORD *)this + 18));
  }
  else
  {
    v3 = COverlaySwapChain::CopyFrontToBackBuffer((CDDisplaySwapChain *)((char *)this + 24));
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\global\\DDisplaySwapchain.h",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  return 0LL;
}
