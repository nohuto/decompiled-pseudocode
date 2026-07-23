/*
 * XREFs of Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline @ 0x1405B22B0
 * Callers:
 *     KiInitializeVelocity @ 0x140C2A6C8 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_Servicing_AvoidSmtGroupings__private_IsEnabledFallback @ 0x1405B22E8 (Feature_Servicing_AvoidSmtGroupings__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_AvoidSmtGroupings__private_featureState & 0x10) != 0 )
    return Feature_Servicing_AvoidSmtGroupings__private_featureState & 1;
  else
    return Feature_Servicing_AvoidSmtGroupings__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AvoidSmtGroupings__private_featureState,
             3LL);
}
