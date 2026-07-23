/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1404ACC28
 * Callers:
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslFlushSecureAddressSpace()
{
  _BYTE v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecureHandle; // [rsp+28h] [rbp-80h]

  memset_0(v1, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255LL;
  SecureHandle = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2u, 0xF0u, 0, (__int64)v1);
}
