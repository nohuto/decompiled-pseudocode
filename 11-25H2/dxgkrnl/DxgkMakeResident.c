/*
 * XREFs of DxgkMakeResident @ 0x140293120
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x140293140 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 */

int __fastcall DxgkMakeResident(struct D3DDDI_MAKERESIDENT *a1)
{
  return DxgkMakeResidentInternal(a1, 1, 0LL);
}
