/*
 * XREFs of Feature_UTMDSM__private_IsEnabledFallback @ 0x14004DF18
 * Callers:
 *     Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline @ 0x14004DEE0 (Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14003FD74 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UTMDSM__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_UTMDSM__private_descriptor);
}
