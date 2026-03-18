/*
 * XREFs of HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry @ 0x140087564
 * Callers:
 *     HUBDSM_MarkDeviceAsSupportingMSOSDescriptor @ 0x1400233A0 (HUBDSM_MarkDeviceAsSupportingMSOSDescriptor.c)
 * Callees:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x14008766C (HUBREG_AssignUsbflagsValueForDevice.c)
 */

__int64 __fastcall HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+31h] [rbp+9h]

  v3 = *(_BYTE *)(a1 + 2052);
  v2 = 1;
  return HUBREG_AssignUsbflagsValueForDevice(a1, L"\b\n", &v2, 2LL);
}
