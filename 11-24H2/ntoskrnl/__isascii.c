/*
 * XREFs of __isascii @ 0x1404FE990
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14048C1F0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressA @ 0x14049C260 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EDC70 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EDDA0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EDF70 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
