/*
 * XREFs of Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401A67CC
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1401255DC (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x14012565C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     IsPointerDeviceAccessible @ 0x140162460 (IsPointerDeviceAccessible.c)
 *     NtUserReportInertia @ 0x14016FA40 (NtUserReportInertia.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1401E6EE0 (RIMIDEValidateInjectionQpcCount.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x14020E260 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x14020E9BC (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 * Callees:
 *     Feature_TouchpadPublicApis3__private_IsEnabledFallback @ 0x1401A6804 (Feature_TouchpadPublicApis3__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadPublicApis3__private_featureState & 0x10) != 0 )
    return Feature_TouchpadPublicApis3__private_featureState & 1;
  else
    return Feature_TouchpadPublicApis3__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadPublicApis3__private_featureState,
             3LL);
}
