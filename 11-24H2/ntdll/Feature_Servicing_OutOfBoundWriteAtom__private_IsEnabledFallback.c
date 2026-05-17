/*
 * XREFs of Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledFallback @ 0x18013C0A4
 * Callers:
 *     Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline @ 0x18013C074 (Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_OutOfBoundWriteAtom__private_descriptor);
}
