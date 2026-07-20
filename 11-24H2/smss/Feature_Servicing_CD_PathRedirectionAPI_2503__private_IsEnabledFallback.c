/*
 * XREFs of Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledFallback @ 0x14001C058
 * Callers:
 *     Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline @ 0x14001C028 (Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_CD_PathRedirectionAPI_2503__private_descriptor);
}
