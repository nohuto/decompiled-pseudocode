/*
 * XREFs of ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x18023180C
 * Callers:
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802319BC (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CGlobalDrawingContext **__fastcall wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(
        CGlobalDrawingContext **a1,
        __int64 a2)
{
  CGlobalDrawingContext *v2; // rdi

  v2 = *a1;
  *a1 = (CGlobalDrawingContext *)a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  if ( v2 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v2);
  return a1;
}
