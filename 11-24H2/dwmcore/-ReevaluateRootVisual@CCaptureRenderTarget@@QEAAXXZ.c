/*
 * XREFs of ?ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ @ 0x1802247BC
 * Callers:
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801EC920 (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801ECAA0 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?ProcessSetPreferReferenceVisual@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL@@@Z @ 0x180282A00 (-ProcessSetPreferReferenceVisual@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CA.c)
 * Callees:
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18018AAE4 (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CCaptureRenderTarget::ReevaluateRootVisual(struct CVisual **this)
{
  struct CVisual *v1; // rdx
  int v2; // eax
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 3144) && (v1 = this[370]) != 0LL )
  {
    v2 = CRenderTarget::SetRootVisual((CRenderTarget *)this, v1);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x160,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
        (const char *)(unsigned int)v2,
        v4);
  }
  else
  {
    v3 = CRenderTarget::SetRootVisual((CRenderTarget *)this, this[394]);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x164,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
}
