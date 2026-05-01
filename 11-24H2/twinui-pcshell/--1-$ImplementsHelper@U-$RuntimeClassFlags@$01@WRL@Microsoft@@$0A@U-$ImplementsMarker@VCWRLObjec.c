/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802B8224
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x18045872C (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ??1CAppTransitionTargetManager@@UEAA@XZ @ 0x1804E5F84 (--1CAppTransitionTargetManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UITaggableTarget@@VCWRLObjectWithSite@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804E5FC0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UITaggableTarget@@VCWRLObjectWithSite.c)
 *     ??_GCAppArrangementSingleTransitionTarget@@UEAAPEAXI@Z @ 0x1804E6010 (--_GCAppArrangementSingleTransitionTarget@@UEAAPEAXI@Z.c)
 *     ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x1804E6060 (--_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z.c)
 *     ??1CDropFeedback@@UEAA@XZ @ 0x18053EDB0 (--1CDropFeedback@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18053EE60 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UI.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x180541BFC (--1CDragVisual@@MEAA@XZ.c)
 *     ??1CPinnedList@@UEAA@XZ @ 0x18068AF3C (--1CPinnedList@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
}
