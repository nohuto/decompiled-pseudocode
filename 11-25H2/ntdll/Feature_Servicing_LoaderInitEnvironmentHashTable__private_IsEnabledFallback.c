/*
 * XREFs of Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledFallback @ 0x18011E8D0
 * Callers:
 *     Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline @ 0x18011E708 (Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_LoaderInitEnvironmentHashTable__private_descriptor);
}
