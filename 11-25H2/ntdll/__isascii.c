/*
 * XREFs of __isascii @ 0x180123350
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800EABB0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800EAD80 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800F13E0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800F1670 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180146390 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
