/*
 * XREFs of ??4?$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A8740
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008EEC0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A87E4 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A897C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=(
        CBaseObject **a1,
        CMILRefCountBase **a2)
{
  CMILRefCountBase *v3; // rcx
  CBaseObject *v4; // rax
  CBaseObject *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      CMILRefCountBase::AddRef(v3);
    v4 = *a1;
    *a1 = v3;
    v6 = v4;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v6);
  }
  return a1;
}
