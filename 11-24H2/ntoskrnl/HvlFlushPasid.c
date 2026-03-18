/*
 * XREFs of HvlFlushPasid @ 0x1404972A0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastFlushPasidAddressList @ 0x1404972DC (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1404973D0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140588C54 (HvlpSlowFlushPasidAddressList.c)
 */

__int64 __fastcall HvlFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 > 0xC )
    return HvlpSlowFlushPasidAddressList(a1);
  return HvlpFastFlushPasidAddressList(a1);
}
