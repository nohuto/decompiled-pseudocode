/*
 * XREFs of isdigit @ 0x1404FE9B0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14048C1F0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressA @ 0x14049C260 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EDC70 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EDDA0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EDF70 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x140827B08 (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140827B88 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082805C (MinAsn1DecodeUtcTime.c)
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
