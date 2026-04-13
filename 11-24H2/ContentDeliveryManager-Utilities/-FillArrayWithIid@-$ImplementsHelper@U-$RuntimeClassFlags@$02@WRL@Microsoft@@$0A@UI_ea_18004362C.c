/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18004362C
 * Callers:
 *     ?GetIids@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180043BB0 (-GetIids@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,IWeakReferenceSource,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = *a2;
  *(GUID *)(a3 + 16 * v3) = GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>::FillArrayWithIid(
           v3,
           a2,
           a3);
}
