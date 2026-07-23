/*
 * XREFs of __isascii @ 0x18011FAA0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800E4F30 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800E5100 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800EA7B0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800EAA40 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1801431D0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
