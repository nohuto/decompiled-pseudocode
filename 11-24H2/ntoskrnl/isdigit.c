/*
 * XREFs of isdigit @ 0x1404FC270
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140486F10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressA @ 0x140496E90 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EB250 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EB380 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EB550 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x1408282D8 (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140828358 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082882C (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 4;
}
