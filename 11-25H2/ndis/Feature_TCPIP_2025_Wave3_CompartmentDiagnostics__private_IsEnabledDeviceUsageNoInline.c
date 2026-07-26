/*
 * XREFs of Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C
 * Callers:
 *     ndisIfCreateCompartment @ 0x1400D136C (ndisIfCreateCompartment.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 *     ndisIfDeleteCompartment @ 0x1400D1CEC (ndisIfDeleteCompartment.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400D2470 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400D254C (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D2970 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledFallback @ 0x1400D2BD4 (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledFallback.c)
 */

__int64 Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_featureState & 0x10) != 0 )
    return Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_featureState & 1;
  else
    return Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledFallback(
             (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_featureState,
             3LL);
}
