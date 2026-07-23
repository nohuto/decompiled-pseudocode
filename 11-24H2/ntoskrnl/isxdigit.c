/*
 * XREFs of isxdigit @ 0x1404FC360
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140486F10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressA @ 0x140496E90 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EB250 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EB380 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EB550 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 0x80;
}
