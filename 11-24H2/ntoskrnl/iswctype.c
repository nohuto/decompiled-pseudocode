/*
 * XREFs of iswctype @ 0x1404FE4F0
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x14046A670 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x14046A8A0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140470FA0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140471110 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1404FC390 (iswalnum.c)
 *     iswalpha @ 0x1404FC3AC (iswalpha.c)
 *     iswdigit @ 0x1404FC3D0 (iswdigit.c)
 *     iswspace @ 0x1404FC3F0 (iswspace.c)
 *     towlower @ 0x1404FD4D0 (towlower.c)
 *     _whiteout @ 0x140504A10 (_whiteout.c)
 *     _winput_s @ 0x140504A68 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405EB7F0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
