/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback @ 0x180091D60
 * Callers:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_SdbValidateRootTagsOnOpen__private_descriptor);
}
