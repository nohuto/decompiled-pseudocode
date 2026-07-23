/*
 * XREFs of __isascii @ 0x1404FC250
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140486F10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressA @ 0x140496E90 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EB250 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EB380 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EB550 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
