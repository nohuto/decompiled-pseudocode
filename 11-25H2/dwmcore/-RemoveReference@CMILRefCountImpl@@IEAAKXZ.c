/*
 * XREFs of ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050
 * Callers:
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x1800492C0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x180049670 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180072160 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800D0A30 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801A8EB0 (-InternalRelease@-$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801C6ACC (-InternalRelease@-$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@CBitmapLock@@UEAAKXZ @ 0x1801DD4C0 (-Release@CBitmapLock@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801E646C (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKX.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801FEC40 (-InternalRelease@-$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18020FC90 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802151D0 (-InternalRelease@-$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIAccelerator@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802282A0 (-InternalRelease@-$CMILRefCountBaseT@UIAccelerator@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180229DC0 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIDwmMessageConversationHost@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18025A6C8 (-InternalRelease@-$CMILRefCountBaseT@UIDwmMessageConversationHost@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UIDwmCursorController@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1802BCB70 (-Release@-$CMILCOMBaseT@UIDwmCursorController@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802D0374 (-InternalRelease@-$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
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
