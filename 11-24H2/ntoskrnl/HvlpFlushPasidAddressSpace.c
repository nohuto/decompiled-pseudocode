/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x1404973D0
 * Callers:
 *     HvlFlushPasid @ 0x1404972A0 (HvlFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140588C54 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
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
