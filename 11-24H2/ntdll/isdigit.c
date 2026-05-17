/*
 * XREFs of isdigit @ 0x1801219B0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800E9840 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800E9A10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1800EFB30 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800EFDC0 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180144E20 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801CC150[v1] & 4;
}
