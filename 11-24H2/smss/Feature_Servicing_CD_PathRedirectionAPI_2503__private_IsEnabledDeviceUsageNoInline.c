/*
 * XREFs of Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline @ 0x14001C028
 * Callers:
 *     CreateFileInternal @ 0x14001C20C (CreateFileInternal.c)
 *     CreateFileW @ 0x14001CBB0 (CreateFileW.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_CD_PathRedirectionAPI_2503__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CD_PathRedirectionAPI_2503__private_featureState & 1;
  else
    return Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_featureState,
             3LL);
}
