/*
 * XREFs of Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback @ 0x1800A3B8C
 * Callers:
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x1800A3B5C (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_EnsureVerBlockCanHoldFixedInfo__private_descriptor);
}
