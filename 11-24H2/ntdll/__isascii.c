/*
 * XREFs of __isascii @ 0x180121870
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800E9840 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800E9A10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800EFB30 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800EFDC0 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180144E20 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
