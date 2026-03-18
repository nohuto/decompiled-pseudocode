/*
 * XREFs of ExFreeAsid @ 0x1406587A8
 * Callers:
 *     IommuPasidDeviceCreate @ 0x140703D50 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpFreeAsid @ 0x140658CEC (ExpFreeAsid.c)
 */

__int64 __fastcall ExFreeAsid(int a1)
{
  return ExpFreeAsid((unsigned int)(a1 - 1), 0LL);
}
