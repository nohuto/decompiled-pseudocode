/*
 * XREFs of islower @ 0x1404FE9E0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14048C1F0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EDC70 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EDDA0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EDF70 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 2;
}
