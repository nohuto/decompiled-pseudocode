/*
 * XREFs of HUBDSM_MarkDeviceAsSupportingMSOSDescriptor @ 0x1400233E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry @ 0x1400864AC (HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry.c)
 */

__int64 __fastcall HUBDSM_MarkDeviceAsSupportingMSOSDescriptor(__int64 a1)
{
  HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
