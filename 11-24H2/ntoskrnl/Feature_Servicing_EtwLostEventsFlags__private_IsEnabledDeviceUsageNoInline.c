/*
 * XREFs of Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline @ 0x1404410B4
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 * Callees:
 *     Feature_Servicing_EtwLostEventsFlags__private_IsEnabledFallback @ 0x1404F8DC8 (Feature_Servicing_EtwLostEventsFlags__private_IsEnabledFallback.c)
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
