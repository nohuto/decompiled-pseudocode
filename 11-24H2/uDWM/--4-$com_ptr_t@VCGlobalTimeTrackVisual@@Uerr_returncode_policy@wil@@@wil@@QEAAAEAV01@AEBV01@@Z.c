/*
 * XREFs of ??4?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800E8968
 * Callers:
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800E9364 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CGlobalTimeTrackVisual,wil::err_returncode_policy>::operator=(
        CBaseObject **a1,
        CMILRefCountBase **a2)
{
  CBaseObject *v2; // r8
  CMILRefCountBase *v4; // rcx

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    CMILRefCountBase::AddRef(v4);
  if ( v2 )
    CBaseObject::Release(v2);
  return a1;
}
