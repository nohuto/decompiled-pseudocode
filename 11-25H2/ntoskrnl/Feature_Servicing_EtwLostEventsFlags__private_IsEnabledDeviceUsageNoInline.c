/*
 * XREFs of Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline @ 0x1404F0B8C
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 * Callees:
 *     Feature_Servicing_EtwLostEventsFlags__private_IsEnabledFallback @ 0x1406430C8 (Feature_Servicing_EtwLostEventsFlags__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_EtwLostEventsFlags__private_featureState & 0x10) != 0 )
    return Feature_Servicing_EtwLostEventsFlags__private_featureState & 1;
  else
    return Feature_Servicing_EtwLostEventsFlags__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_EtwLostEventsFlags__private_featureState,
             3LL);
}
