/*
 * XREFs of Feature_CrmDeveloperQuietMode__private_IsEnabledFallback @ 0x180078DB8
 * Callers:
 *     Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline @ 0x18006FF04 (Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CrmDeveloperQuietMode__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CrmDeveloperQuietMode__private_descriptor);
}
