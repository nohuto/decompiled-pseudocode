/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x140491D60
 * Callers:
 *     HvlFlushPasid @ 0x140491C30 (HvlFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140585F34 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpFlushPasidAddressSpace(int a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = 0LL;
  v3[1] = a1;
  v3[0] = a2;
  return HvcallFastExtended(65696LL, (__int64)v3, 0x10u, 0LL, 0);
}
