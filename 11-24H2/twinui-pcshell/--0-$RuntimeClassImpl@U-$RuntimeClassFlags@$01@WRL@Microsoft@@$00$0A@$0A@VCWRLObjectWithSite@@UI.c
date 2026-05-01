/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVisibilityOverride@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180079BD4
 * Callers:
 *     ??0CVisibilityOverride@@QEAA@XZ @ 0x180079D00 (--0CVisibilityOverride@@QEAA@XZ.c)
 *     ??0CPPIAllUpViewService@@QEAA@XZ @ 0x1802A45B4 (--0CPPIAllUpViewService@@QEAA@XZ.c)
 *     ??0CCharmsWindowManager@@QEAA@XZ @ 0x1802B762C (--0CCharmsWindowManager@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VAllUpViewUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180499204 (--$MakeAndInitialize@VAllUpViewUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 *     ??0CVirtualDesktopSwitcherService@@QEAA@XZ @ 0x18049A470 (--0CVirtualDesktopSwitcherService@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180079BBC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCWRLObjec.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>(
        CWRLObjectWithSite *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>(a1);
  result = v1;
  *(_DWORD *)(v1 + 44) = 1;
  return result;
}
