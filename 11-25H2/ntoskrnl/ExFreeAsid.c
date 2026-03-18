/*
 * XREFs of ExFreeAsid @ 0x14064C8C8
 * Callers:
 *     IommuPasidDeviceCreate @ 0x1406F7E70 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpFreeAsid @ 0x14064CDF8 (ExpFreeAsid.c)
 */

__int64 __fastcall ExFreeAsid(int a1)
{
  return ExpFreeAsid((unsigned int)(a1 - 1), 0LL);
}
