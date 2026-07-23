/*
 * XREFs of ExFreeAsid @ 0x140656E48
 * Callers:
 *     IommuPasidDeviceCreate @ 0x140701910 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpFreeAsid @ 0x14065738C (ExpFreeAsid.c)
 */

__int64 __fastcall ExFreeAsid(int a1)
{
  return ExpFreeAsid((unsigned int)(a1 - 1), 0LL);
}
