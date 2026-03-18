/*
 * XREFs of Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledFallback @ 0x140089724
 * Callers:
 *     Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledDeviceUsageNoInline @ 0x1400896EC (Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_MdmFixD0IncompletePairingCrash__private_descriptor);
}
