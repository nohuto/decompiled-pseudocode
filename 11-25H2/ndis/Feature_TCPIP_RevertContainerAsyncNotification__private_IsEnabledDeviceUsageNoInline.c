/*
 * XREFs of Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline @ 0x1400D2BF0
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400D1188 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400D136C (ndisIfCreateCompartment.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 *     ndisIfDeleteCompartment @ 0x1400D1CEC (ndisIfDeleteCompartment.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase1@@YAXXZ @ 0x1401999B8 (-ndisIfCompartmentSubsystemInitializePhase1@@YAXXZ.c)
 * Callees:
 *     Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledFallback @ 0x1400D2C28 (Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledFallback.c)
 */

__int64 Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TCPIP_RevertContainerAsyncNotification__private_featureState & 0x10) != 0 )
    return Feature_TCPIP_RevertContainerAsyncNotification__private_featureState & 1;
  else
    return Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledFallback(
             (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_featureState,
             3LL);
}
