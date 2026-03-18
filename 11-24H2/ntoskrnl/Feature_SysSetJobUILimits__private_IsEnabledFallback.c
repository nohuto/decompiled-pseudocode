/*
 * XREFs of Feature_SysSetJobUILimits__private_IsEnabledFallback @ 0x1405E5804
 * Callers:
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1405E57CC (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D17E0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SysSetJobUILimits__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_SysSetJobUILimits__private_descriptor,
           a4);
}
