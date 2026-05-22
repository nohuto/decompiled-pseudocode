/*
 * XREFs of ?_Reset@?$_Variant_base@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@UHeatTouchpadClickForceSensitivityContextMessage@@@std@@QEAAXXZ @ 0x1801946F8
 * Callers:
 *     ??$emplace@UHeatVirtualTouchpadContextMessage@@$$V$04$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@UHeatTouchpadClickForceSensitivityContextMessage@@@std@@QEAAAEAUHeatVirtualTouchpadContextMessage@@XZ @ 0x180192E18 (--$emplace@UHeatVirtualTouchpadContextMessage@@$$V$04$0A@@-$variant@Umonostate@std@@UHeatInputCo.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x1801934E8 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Visit@V_lambda_932298db0fc7a8424d9a6eaff3f3fd49_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@UHeatTouchpadClickForceSensitivityContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_932298db0fc7a8424d9a6eaff3f3fd49_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@UHeatTouchpadClickForceSensitivityContextMessage@@@1@@Z @ 0x1801928E4 (--$_Visit@V_lambda_932298db0fc7a8424d9a6eaff3f3fd49_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 */

void __fastcall std::_Variant_base<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage,HeatTouchpadClickForceSensitivityContextMessage>::_Reset(
        __int64 a1,
        __int64 a2)
{
  std::_Variant_raw_visit1<2>::_Visit<_lambda_932298db0fc7a8424d9a6eaff3f3fd49_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage,HeatTouchpadClickForceSensitivityContextMessage> &>(
    *(char *)(a1 + 64) + 1LL,
    a2,
    (_QWORD **)a1);
  *(_BYTE *)(a1 + 64) = -1;
}
