/*
 * XREFs of ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801EC9E4
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC484 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC680 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?SetTransform@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCTransform3D@@@Z @ 0x18027A31C (-SetTransform@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCTransf.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CCaptureRenderTarget::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  int v4; // eax
  struct CResource *v5; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CResource::RegisterNotifier((CResource *)this, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
      (const char *)(unsigned int)v4,
      v6);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[25]);
  v5 = *this;
  this[25] = a2;
  (*((void (__fastcall **)(struct CResource **))v5 + 29))(this);
}
