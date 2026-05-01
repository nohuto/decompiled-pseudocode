/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@UITopLevelAppViewSource@ComposableShell@Internal@Windows@@UITopLevelAppViewManager@789@@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18040940C
 * Callers:
 *     ?GetIids@HolographicPositioner@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180409920 (-GetIids@HolographicPositioner@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<Microsoft::WRL::CloakedIid<IShellPositionerViewHandoffWithShowCommand>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Windows::Internal::ComposableShell::ITopLevelAppViewSource,Windows::Internal::ComposableShell::ITopLevelAppViewManager>>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775;
  v10 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v10) = GUID_538317c5_5bad_4847_962d_42da294f5e0a;
  v11 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v11) = GUID_5090de35_ed23_43be_9714_586c5041026a;
  *(GUID *)(a3 + 16LL * v3) = GUID_334a8e75_f9cf_4161_9035_68246f9ea21d;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<Microsoft::WRL::CloakedIid<IShellPositionerViewHandoffWithShowCommand>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Windows::Internal::ComposableShell::ITopLevelAppViewSource,Windows::Internal::ComposableShell::ITopLevelAppViewManager>>>::FillArrayWithIid();
}
