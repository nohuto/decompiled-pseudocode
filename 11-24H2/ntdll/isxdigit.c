/*
 * XREFs of isxdigit @ 0x18011FD30
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800E4F30 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800E5100 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800EA7B0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800EAA40 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1801431D0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801CB150[v1] & 0x80;
}
