/*
 * XREFs of ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x18004C5F0
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800480B0 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     ?Release@CBitmapLock@@UEAAKXZ @ 0x18004AF70 (-Release@CBitmapLock@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18004B984 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKX.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x18004DFD0 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800BB170 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x18016CC00 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x18016CFB0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801B6CD4 (-InternalRelease@-$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801E5020 (-InternalRelease@-$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801F25C0 (-InternalRelease@-$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802039C0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802088F0 (-InternalRelease@-$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIAccelerator@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18021C930 (-InternalRelease@-$CMILRefCountBaseT@UIAccelerator@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x18021E930 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIDwmMessageConversationHost@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18024F1F8 (-InternalRelease@-$CMILRefCountBaseT@UIDwmMessageConversationHost@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UIDwmCursorController@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1802B3600 (-Release@-$CMILCOMBaseT@UIDwmCursorController@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802C70F4 (-InternalRelease@-$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMILRefCountImpl::RemoveReference(CMILRefCountImpl *this)
{
  int v1; // ebx
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( v1 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v3);
  return (unsigned int)v1;
}
