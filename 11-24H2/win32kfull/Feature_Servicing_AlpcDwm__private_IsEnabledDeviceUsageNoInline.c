/*
 * XREFs of Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline @ 0x1403244C8
 * Callers:
 *     DwmAsyncSetCompositionAttribute @ 0x1400872A4 (DwmAsyncSetCompositionAttribute.c)
 *     DwmAsyncSendTouchContacts @ 0x14018EDE0 (DwmAsyncSendTouchContacts.c)
 *     DwmSyncGetCompositionAttribute @ 0x14025C770 (DwmSyncGetCompositionAttribute.c)
 * Callees:
 *     Feature_Servicing_AlpcDwm__private_IsEnabledFallback @ 0x140324500 (Feature_Servicing_AlpcDwm__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_AlpcDwm__private_featureState & 0x10) != 0 )
    return Feature_Servicing_AlpcDwm__private_featureState & 1;
  else
    return Feature_Servicing_AlpcDwm__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AlpcDwm__private_featureState,
             3LL);
}
