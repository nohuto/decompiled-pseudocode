/*
 * XREFs of ??4?$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroupProxy@@@Z @ 0x180064144
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180063BCC (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180085720 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ??$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B5CE8 (--$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B5F88 (--$CreateProxyFromSharedHandle@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualGroupPro.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800E9F98 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800EA250 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800EA580 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800EA890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CVisualGroupProxy,wil::err_returncode_policy>::operator=(
        CBaseObject **a1,
        CMILRefCountBase *a2)
{
  CBaseObject *v2; // r8

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  if ( v2 )
    CBaseObject::Release(v2);
  return a1;
}
