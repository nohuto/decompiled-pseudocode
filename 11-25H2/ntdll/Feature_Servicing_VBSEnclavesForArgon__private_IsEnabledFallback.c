/*
 * XREFs of Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledFallback @ 0x180147114
 * Callers:
 *     Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline @ 0x1801470E4 (Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_VBSEnclavesForArgon__private_descriptor);
}
