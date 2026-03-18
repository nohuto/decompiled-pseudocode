/*
 * XREFs of ??0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@@Z @ 0x1802404FC
 * Callers:
 *     ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x18024AC10 (--0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefre.c)
 * Callees:
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x18021CD6C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

COverlaySwapChain *__fastcall COverlaySwapChain::COverlaySwapChain(
        COverlaySwapChain *this,
        struct CD3DDevice *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        const struct RefreshRateInfo *a5,
        unsigned int a6,
        unsigned int a7,
        struct _LUID a8)
{
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+2Ch] [rbp-1Ch]
  int v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+34h] [rbp-14h]

  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    (_QWORD *)this + 8,
    (__int64)a2);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 18) = a6;
  *(struct _LUID *)((char *)this + 76) = a8;
  *((_DWORD *)this + 21) = a7;
  *(_QWORD *)((char *)this + 92) = *(_QWORD *)a3;
  *((_DWORD *)this + 25) = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)a4;
  *((_QWORD *)this + 15) = *((_QWORD *)a4 + 2);
  *((_OWORD *)this + 8) = *(_OWORD *)a5;
  *((_OWORD *)this + 9) = *((_OWORD *)a5 + 1);
  v11 = *((_OWORD *)a5 + 2);
  *((_QWORD *)this + 22) = 0LL;
  *((_OWORD *)this + 10) = v11;
  *((_QWORD *)this + 23) = (char *)this + 192;
  *((_DWORD *)this + 48) = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v12 = *(_QWORD *)((char *)this + 76);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v14 = v12;
    v15 = *((_DWORD *)this + 18);
    NtHWCursorUpdatePointer(&v14, 0LL);
  }
  return this;
}
